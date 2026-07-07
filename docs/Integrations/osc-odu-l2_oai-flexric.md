OSC O-DU L2 [G] ＋ OAI FlexRIC
===
###### tags: `integration` `OSC-OAI`


> Author: [Jacky Chiang](https://github.com/jackychiangtw)

- [Integration - OSC O-DU L2 \[G\] ＋ OAI FlexRIC](#integration---osc-o-du-l2-g--oai-flexric)
          - [tags: `OSC Integration`, `OAI Integration`, `G Release`, `O-DU High`, `CU-Stub`, `OAI FlexRIC`](#tags-osc-integration-oai-integration-g-release-o-du-high-cu-stub-oai-flexric)
  - [1. Introduction](#1-introduction)
    - [1.1 System Architecture](#11-system-architecture)
  - [2. Install FlexRIC](#2-install-flexric)
    - [2.1. Install dependencies](#21-install-dependencies)
    - [2.2. Install cmake](#22-install-cmake)
    - [2.3. Install swig](#23-install-swig)
    - [2.4. Git clone FlexRIC](#24-git-clone-flexric)
    - [2.5. Build and Install](#25-build-and-install)
    - [2.5.1. Modify the FlexRIC IP Address (Optional)](#251-modify-the-flexric-ip-address-optional)
    - [2.6. Run Near-RT RIC](#26-run-near-rt-ric)
    - [2.6.1 Run the gnb-du](#261-run-the-gnb-du)
    - [2.7. Run xApp](#27-run-xapp)
  - [3. Run O-DU High](#3-run-o-du-high)
    - [3.1 Disable the E2 Node Configuration update](#31-disable-the-e2-node-configuration-update)
    - [3.2. Configure and build](#32-configure-and-build)
    - [3.2. Run O-DU High](#32-run-o-du-high)
  - [4. Development](#4-development)
    - [4.1. Establish the connection](#41-establish-the-connection)
    - [4.2. Compatible with E2 Setup Request](#42-compatible-with-e2-setup-request)
    - [4.3. Compatible with RIC Subscription](#43-compatible-with-ric-subscription)
    - [4.4 Compatible with RIC Indication](#44-compatible-with-ric-indication)
    - [4.5 Upgrade the E2AP version to v2.03](#45-upgrade-the-e2ap-version-to-v203)
    - [4.6 O-DU Integrates to FlexRIC \["mir-dev"\] E2SM-KPMv3](#46-o-du-integrates-to-flexric-mir-dev-e2sm-kpmv3)
    - [4.7 O-DU Integratrs to FlexRIC \["mir-dev"\] E2SM-RC](#47-o-du-integratrs-to-flexric-mir-dev-e2sm-rc)
  - [5. Result](#5-result)
    - [5.1 Install FlexRIC](#51-install-flexric)
    - [5.2 O-DU Connects to FlexRIC](#52-o-du-connects-to-flexric)
    - [5.3 FlexRIC \["mir\_dev"\] upgrades to E2APv2](#53-flexric-mir_dev-upgrades-to-e2apv2)
      - [agent-ric](#agent-ric)
      - [emu\_agent\_gnb\_du](#emu_agent_gnb_du)
    - [5.4 O-DU Integrates to FlexRIC \["mir-dev"\] E2SM-KPMv3](#54-o-du-integrates-to-flexric-mir-dev-e2sm-kpmv3)
    - [5.5 O-DU Integratrs to FlexRIC \['mir-dev'\] E2SM-RC](#55-o-du-integratrs-to-flexric-mir-dev-e2sm-rc)


## 1. Introduction

### 1.1 System Architecture
![](https://i.imgur.com/3z30rIg.png)

1. **FlexRIC server** 
   - Repository: https://gitlab.eurecom.fr/mosaic5g/flexric/-/tree/ntust_osc
   - - Version: mir_dev
   - IP address: 192.168.8.228

2. **KPM xApp**
   - Repository: included in FlexRIC
   - Version: v2.0

3. **O-DU High**
   - Repository: https://github.com/NTUST-BMW-Lab/odu-e2sm.git
   - Version: main (G Release)
   - IP address: 192.168.8.46

## 2. Install FlexRIC

### 2.1. Install dependencies
```bash
sudo apt install asn1c libsctp-dev poppler-utils python3.8 libpython2-dev build-essential libssl-dev -y

sudo apt-get install -y pcre2-utils libpcre2-dev bison flex automake libssl-dev
```

### 2.2. Install cmake
> **Requirement**:
cmake version 3.13 or higher

Install cmake with specific version:
```bash
wget http://www.cmake.org/files/v3.24/cmake-3.24.2.tar.gz
tar xf cmake-3.24.2.tar.gz

cd cmake-3.24.2
./configure
make

sudo make install
```

> Sometimes make will fail if using `make -j`

### 2.3. Install swig
It's a dependencies for cmake.
```bash
git clone https://github.com/swig/swig.git

cd swig
./autogen.sh
./configure
make

sudo make install
```

### 2.4. Git clone FlexRIC
```bash
git clone https://gitlab.eurecom.fr/mosaic5g/flexric.git -b ntust_osc
```

### 2.5. Build and Install
```bash
cd flexric && mkdir build && cd build && cmake ..
make -j

sudo make install

cd test/agent-ric
./test_near_ric
```

If an error occurs at `make`, the reason may be a lack of ASN1C library:
```bash
git clone https://gitlab.eurecom.fr/oai/openairinterface5g oai && cd oai && cd cmake_targets/ &&  ./build_oai -I
```

> The latest code may have problems with ASN1C library installation. Run `git checkout 2023.w16` to use earlier version.

After that, you should have your computer installed. Confirm it with:
```bash
locate asn_application.h
```

### 2.5.1. Modify the FlexRIC IP Address (Optional)
Modify the IP address for Near-RT RIC; then, the xApp will bind a new IP address. After that, gNB-du (E2 node) will connect the new IP. 

```bash
cd flexric

vim flexric.conf
```

### 2.6. Run Near-RT RIC
```bash
./build/examples/ric/nearRT-RIC
```

### 2.6.1 Run the gnb-du
This step can be changed to [step 3](#3-run-o-du-high) if FlexRIC wants to connect to O-DU. 

```bash
./build/examples/emulator/agent/emu_agent_gnb_du
```

### 2.7. Run xApp
Run the xApp after the E2 node is connected.

```bash
./build/examples/xApp/c/kpm_rc/xapp_kpm_rc
```

## 3. Run O-DU High

### 3.1 Disable the E2 Node Configuration update
Disable sending E2 Node Configuration update. FlexRIC can't handle it.
- Path: [./src/du_app/du_e2ap_msg_hdl.c](https://github.com/NTUST-BMW-Lab/odu-e2sm/blob/sch_slice_based/src/du_app/du_e2ap_msg_hdl.c)
```c
// BuildAndSendE2NodeConfigUpdate()
```

### 3.2. Configure and build
**Install the required libraries**
Update the newest package.
```bash
sudo apt-get update
```

**Note**: If you cannot use the `ifconfig`, run the command below to install tools.
```bash
sudo apt-get install net-tools -y
```

Install required libraries to build and compile the O-DU high.
```bash
## GCC, ensure your GCC version is 4.6.3 or above for compiling, and install it if necessary.
gcc --version

## Install GCC by below command
sudo apt-get install -y build-essential

## LKSCTP
sudo apt-get install -y libsctp-dev

## PCAP 
sudo apt-get install -y libpcap-dev
```

Configure the DU, RIC and CU_Stub IP Addresses.

According to the IP modified in [step 2.5.1](#251-modify-the-flexric-ip-address-optional), the port is set to "36421".

Modify the DU, RIC, and CU-Stub IP address configuration in [du_cfg.h](https://github.com/NTUST-BMW-Lab/odu-e2sm/blob/sch_slice_based/src/du_app/du_cfg.h) file:
```bash
vim ./src/du_app/du_cfg.h 
```
    
line [31-33](https://github.com/NTUST-BMW-Lab/odu-e2sm/blob/sch_slice_based/src/du_app/du_cfg.h#L31):
```h
#define DU_IP_V4_ADDR /*<DU IP Address> ex: "192.168.8.5"*/
#define CU_IP_V4_ADDR /*<CU IP Address> ex: "192.168.8.245"*/
#define RIC_IP_V4_ADDR /*<RIC IP Address> ex: "192.168.8.41"*/
```

- DU Address: O-DU's host IP address
- CU Address: Any IP address within the same network with DU and RIC
- RIC Address: RIC platform's host IP address.

**Note** In common case, O-DU is connected with CU_STUB and RIC_STUB with virtual interfaces. When O-DU connects with RIC, it will occur that O-DU can't receive its response message. 

1. **Compile the O-DU and CU Stub**
   1. Compile the O-DU and CU Stub. It's not necessary to compile RIC Stub
        ```bash
        make odu MACHINE=BIT64 MODE=FDD

        make cu_stub NODE=TEST_STUB MACHINE=BIT64 MODE=FDD
        ```
    2. Run the make clean command if needed:
        ```bash
        make clean_all
        ```

2. **Assign the virtual IP to the network interface**
    ```bash
    sudo ifconfig eth1:CU_STUB "192.168.8.245"
    ```

### 3.2. Run O-DU High

Open two terminals to execute CU Stub and O-DU High separately:
- Terminal 1 for CU_STUB:
    ```bash
    cd l2/bin/cu_stub
    ./cu_stub
    ```

- Terminal 2 for DU:
    ```bash
    cd l2/bin/odu
    sudo ./odu
    ```

## 4. Development
### 4.1. Establish the connection

Execute the "Near-RT RIC" first, then cu_stub and O-DU. 

Note: If all executions shut down immediately, it is because the Near-RT RIC is aborted and disconnected. 

- Near-RT RIC
    ![](https://i.imgur.com/bDqrVU4.png)

Thus, the connection is established, and O-DU needs to be modified. 

### 4.2. Compatible with E2 Setup Request

Three parts needed to modify:

1. Unused bit of gNB ID
    - Near-RT RIC log:
        ![](https://i.imgur.com/jEMxu20.png)
    - Solution: Modify unused bit to 4 in `du_e2ap_msg_hdl.c` line 61


2. Unknown RAN Function ID
    - Near-RT RIC log:
        ![](https://i.imgur.com/fHz0bPH.png)
    - Solution: Modify RAN Function ID to 147 in `du_e2sm_manager.c`, remove RAN Function Description of E2SM-RC 


3. RAN Function Description length is too long
    - Near-RT RIC log:
        ![](https://i.imgur.com/dxvdce8.png)
    - Solution: Modify `flexric/src/ric/msg_handler_ric.c` line 88. 
        ![](https://hackmd.io/_uploads/S1ulQNQHn.png)

### 4.3. Compatible with RIC Subscription
1. The `RIC Actions Not Admitted List isn't found` in RIC Subscription Response
    - Near-RT RIC log:
	![](https://i.imgur.com/zC8iEkW.png)
    - Solution: Add the empty `Not Admitted List` in RIC Subscription Response

2. Error in the RB tree
    - Near-RT RIC log:
    	![](https://i.imgur.com/rr2Hv7Z.png)
    - Solution: Call flow is `e2ap_handle_subscription_response_ric` -> `bi_map_extract_right` -> `assoc_extract`. The reason is that the RIC subscription response's RAN function ID doesn't equal the subscription request. 

3. Action ID in the admitted list
    - Near-RT RIC log: 
        ![](https://i.imgur.com/0tochcx.png)
    - Solution: Modify the Action ID `0` in O-DU


4. Modify the meas info name. Add the meas info here.  
    - `src/sm/kpm_sm_v2.02`

### 4.4 Compatible with RIC Indication
1. Near-RT RIC can't decode the RIC Indication Header. 
    - Near-RT RIC log:
        ![](https://i.imgur.com/5TSrUIQ.png)
    - If removes some header content, the all RIC Indication Message can be transmitted. Near-RT RIC won't be crushed.
        ![](https://i.imgur.com/PJjX6ji.png)
    - Solution: Add the '\0' in these fields. (SenderName, Sender Type and vendorName)

2. Because RIC Subscription only sends the style 1, RIC indication also sends the style 1. 

### 4.5 Upgrade the E2AP version to v2.03
From now on, we started using the branch "mir_dev" to integrate. The version of E2SM-KPM is 3.0. However, the E2AP needs to be upgraded since it's v1.01; otherwise, the O-DU won't be able to decode the message.

Fortunately, the branch "ntust_osc" uses E2AP v2.03. We can refer to the source code from this branch:

The step of Upgrading:
1. Copy the folder [flexric/src/lib/ap](https://gitlab.eurecom.fr/mosaic5g/flexric/-/tree/ntust_osc/src/lib/ap) from FlexRIC GitLab branch "ntust_osc"
2. Copy the folder [flexric/test/encode_decode](https://gitlab.eurecom.fr/mosaic5g/flexric/-/tree/ntust_osc/test/encode_decode) from FlexRIC GitLab branch "ntust_osc"
3. Fix the compiling error. The reason to compile and execute errors are:
    - Definition of RAN Function
        - E2APv1
            ![](https://hackmd.io/_uploads/HkM8YEsS2.png)
        - E2APv2
            ![](https://hackmd.io/_uploads/Hkly94sBn.png)
    - Definition of RIC Control ACK
        - E2APv1
            ![](https://hackmd.io/_uploads/HJ56zHsH2.png)
        - E2APv2
            ![](https://hackmd.io/_uploads/BkS2zrjrn.png)
    - Definition of plmnid
        - E2APv1 
            ![](https://hackmd.io/_uploads/S15sBrjHn.png)
        - E2APv2
            ![](https://hackmd.io/_uploads/r1JsrroSn.png)

[Result to test the modification](https://hackmd.io/NckitP8uTfylQV2ZcmWmdQ?view#53-FlexRIC-%E2%80%9Cmir_dev%E2%80%9D-upgrades-to-E2APv2)


### 4.6 O-DU Integrates to FlexRIC ["mir-dev"] E2SM-KPMv3
The steps of integration of O-DU and FlexRIC

1. [Modify O-DU source code to support E2SM-KPMv3](https://hackmd.io/fSbe8RLdTWyage_Ev8r_xg?view#413-O-DU-supports-E2SM-KPM-v202-and-v300-simultaneously)
2. Modify the source code `flexric/build/examples/xApp/c/kpm_rc/xapp_kpm_rc` to send the RIC Subscription, which O-DU supported
- Measurement Info (Format 1)
```c
static
meas_info_format_1_lst_t gen_meas_info_format_1_lst(const char action[])
{
  meas_info_format_1_lst_t dst = {0}; 

  dst.meas_type.type = NAME_MEAS_TYPE;
  // ETSI TS 128 552
  dst.meas_type.name = copy_str_to_ba(  action );

  dst.label_info_lst_len = 1;
  dst.label_info_lst = calloc(1, sizeof(label_info_lst_t));
  assert(dst.label_info_lst != NULL && "Memory exhausted");
  dst.label_info_lst[0].noLabel = calloc(1, sizeof(enum_value_e));
  assert(dst.label_info_lst[0].noLabel != NULL && "Memory exhausted");
  *dst.label_info_lst[0].noLabel = TRUE_ENUM_VALUE;

  return dst;
}
```

- Action Definition (Format 1)
```c
static
kpm_act_def_format_1_t gen_act_def_oran_frmt_1(const char action[][25], size_t size)
{
  kpm_act_def_format_1_t dst = {0};

  dst.gran_period_ms = 100;

  // [1, 65535]
  dst.meas_info_lst_len = size;
  dst.meas_info_lst = calloc(size, sizeof(meas_info_format_1_lst_t));
  assert(dst.meas_info_lst != NULL && "Memory exhausted");

  for(int i=0;i<size;i++){
    dst.meas_info_lst[i] = gen_meas_info_format_1_lst(action[i]);
  }

  return dst;
}
```

- Measurement info (Format 3)
```c
static
meas_info_format_3_lst_t gen_meas_info_format_3_lst(const char action[])
{
  meas_info_format_3_lst_t dst = {0}; 

  dst.meas_type.type = NAME_MEAS_TYPE;
  // ETSI TS 128 552
  dst.meas_type.name = copy_str_to_ba(  action );

  dst.matching_cond_lst_len = 1;
  dst.matching_cond_lst = calloc(1, sizeof(matching_condition_format_3_lst_t));
  assert(dst.matching_cond_lst  != NULL && "Memory exhausted");

  dst.matching_cond_lst->cond_type = LABEL_INFO;
  dst.matching_cond_lst->label_info_lst.noLabel = calloc(1, sizeof(enum_value_e));
  assert(dst.matching_cond_lst->label_info_lst.noLabel != NULL && "Memory exhausted");
  *dst.matching_cond_lst->label_info_lst.noLabel = TRUE_ENUM_VALUE;

  return dst;
}
```

- Action Definition (Format 3)
```c
static
kpm_act_def_format_3_t gen_act_def_oran_frmt_3(const char action[][25], size_t size)
{
  kpm_act_def_format_3_t dst = {0};

  dst.gran_period_ms = 100;

  // [1, 65535]
  dst.meas_info_lst_len = size;
  dst.meas_info_lst = calloc(size, sizeof(meas_info_format_3_lst_t));
  assert(dst.meas_info_lst != NULL && "Memory exhausted");

  for(int i=0;i<size;i++){
    dst.meas_info_lst[i] = gen_meas_info_format_3_lst(action[i]);
  }

  return dst;
}
```

3. Declare the measurement name in the `main()`
```c
const char act1[][25] = {"DRB.UEThpDl", "RRU.PrbUsedDl", "RRU.PrbAvailDl", "RRU.PrbTotDl"}; 
const char act2[][25] = {"DRB.UEThpDl.SNSSAI", "RRU.PrbUsedDl.SNSSAI"}; 
kpm_sub.ad[0] = gen_act_def_oran_cell(act1, sizeof(act1)/sizeof(*act1)); 
kpm_sub.ad[1] = gen_act_def_oran_slice(act2, sizeof(act2)/sizeof(*act2)); 
```
4. Compile and execute

### 4.7 O-DU Integratrs to FlexRIC ["mir-dev"] E2SM-RC
Add the source code in FlexRIC xApp to support RRM Policy:

```c
uint8_t fill_rrm_policy(ran_param_struct_t *ran_param, uint8_t *plmnid, uint8_t *sst, uint8_t *sd, int minPrb, int maxPrb, int dedPrb){

  ran_param->sz_ran_param_struct = 4;
  ran_param->ran_param_struct = calloc(4, sizeof(seq_ran_param_t));
  ran_param->ran_param_struct[0].ran_param_id = 3;
  ran_param->ran_param_struct[0].ran_param_val.type = STRUCTURE_RAN_PARAMETER_VAL_TYPE;
  ran_param->ran_param_struct[0].ran_param_val.strct = calloc(1, sizeof(ran_param_struct_t));
  ran_param->ran_param_struct[0].ran_param_val.strct->sz_ran_param_struct = 1;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct = calloc(1, sizeof(seq_ran_param_t));
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_id = 5;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.type = LIST_RAN_PARAMETER_VAL_TYPE;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst = calloc(1, sizeof(ran_param_list_t));
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->sz_lst_ran_param = 1;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param = calloc(1, sizeof(lst_ran_param_t));
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_id = 6;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.sz_ran_param_struct = 2;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct = calloc(2, sizeof(seq_ran_param_t));
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[0].ran_param_id = 7;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[0].ran_param_val.type = ELEMENT_KEY_FLAG_FALSE_RAN_PARAMETER_VAL_TYPE;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[0].ran_param_val.flag_false = calloc(1, sizeof(ran_parameter_value_t));
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[0].ran_param_val.flag_false->type = OCTET_STRING_RAN_PARAMETER_VALUE;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[0].ran_param_val.flag_false->octet_str_ran.len = 6;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[0].ran_param_val.flag_false->octet_str_ran.buf = calloc(6, sizeof(uint8_t));
  memcpy(ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[0].ran_param_val.flag_false->octet_str_ran.buf, plmnid, 6);  // plmnid

  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_id = 8;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.type = STRUCTURE_RAN_PARAMETER_VAL_TYPE;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct = calloc(1, sizeof(ran_param_struct_t));
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->sz_ran_param_struct = 2;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct = calloc(2,sizeof(seq_ran_param_t));
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[0].ran_param_id = 9;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[0].ran_param_val.type = ELEMENT_KEY_FLAG_FALSE_RAN_PARAMETER_VAL_TYPE;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[0].ran_param_val.flag_false = calloc(1, sizeof(ran_parameter_value_t));
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[0].ran_param_val.flag_false->type = OCTET_STRING_RAN_PARAMETER_VALUE;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[0].ran_param_val.flag_false->octet_str_ran.len = 1;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[0].ran_param_val.flag_false->octet_str_ran.buf = calloc(1, sizeof(uint8_t));
  memcpy(ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[0].ran_param_val.flag_false->octet_str_ran.buf, sst, 1); // S-NSSAI
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[1].ran_param_id = 10;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[1].ran_param_val.type = ELEMENT_KEY_FLAG_FALSE_RAN_PARAMETER_VAL_TYPE;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[1].ran_param_val.flag_false = calloc(1, sizeof(ran_parameter_value_t));
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[1].ran_param_val.flag_false->type = OCTET_STRING_RAN_PARAMETER_VALUE;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[1].ran_param_val.flag_false->octet_str_ran.len = 3;
  ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[1].ran_param_val.flag_false->octet_str_ran.buf = calloc(3, sizeof(uint8_t));
  memcpy(ran_param->ran_param_struct[0].ran_param_val.strct->ran_param_struct->ran_param_val.lst->lst_ran_param->ran_param_struct.ran_param_struct[1].ran_param_val.strct->ran_param_struct[1].ran_param_val.flag_false->octet_str_ran.buf, sd, 3); // S-NSSAI

  ran_param->ran_param_struct[1].ran_param_id = 11;
  ran_param->ran_param_struct[1].ran_param_val.type = ELEMENT_KEY_FLAG_FALSE_RAN_PARAMETER_VAL_TYPE;
  ran_param->ran_param_struct[1].ran_param_val.flag_false = calloc(1, sizeof(ran_parameter_value_t));
  ran_param->ran_param_struct[1].ran_param_val.flag_false->type = INTEGER_RAN_PARAMETER_VALUE;
  ran_param->ran_param_struct[1].ran_param_val.flag_false->int_ran = minPrb; // Min
  ran_param->ran_param_struct[2].ran_param_id = 12;
  ran_param->ran_param_struct[2].ran_param_val.type = ELEMENT_KEY_FLAG_FALSE_RAN_PARAMETER_VAL_TYPE;
  ran_param->ran_param_struct[2].ran_param_val.flag_false = calloc(1, sizeof(ran_parameter_value_t));
  ran_param->ran_param_struct[2].ran_param_val.flag_false->type = INTEGER_RAN_PARAMETER_VALUE;
  ran_param->ran_param_struct[2].ran_param_val.flag_false->int_ran = maxPrb; // Max
  ran_param->ran_param_struct[3].ran_param_id = 13;
  ran_param->ran_param_struct[3].ran_param_val.type = ELEMENT_KEY_FLAG_FALSE_RAN_PARAMETER_VAL_TYPE;
  ran_param->ran_param_struct[3].ran_param_val.flag_false = calloc(1, sizeof(ran_parameter_value_t));
  ran_param->ran_param_struct[3].ran_param_val.flag_false->type = INTEGER_RAN_PARAMETER_VALUE;
  ran_param->ran_param_struct[3].ran_param_val.flag_false->int_ran = dedPrb; // Ded

  return 0;
}


static
e2sm_rc_ctrl_msg_frmt_1_t gen_rc_ctrl_msg_frmt_1_rrm_policy()
{
  e2sm_rc_ctrl_msg_frmt_1_t dst = {0}; 
  uint8_t plmnid[][6] = {{3,1,1,4,8,0}, {3,1,1,4,8,0}};
  uint8_t sst[][1] = {{1}, {5}};
  uint8_t sd[][3] = {{2,3,4}, {6,7,8}};

  // RRM Policy configuration
  dst.sz_ran_param = 1;
  dst.ran_param = calloc(1, sizeof(seq_ran_param_t));
  dst.ran_param->ran_param_id = 1;
  dst.ran_param->ran_param_val.type = LIST_RAN_PARAMETER_VAL_TYPE;
  dst.ran_param->ran_param_val.lst = calloc(3, sizeof(ran_param_list_t));
  dst.ran_param->ran_param_val.lst->sz_lst_ran_param = 3;
  dst.ran_param->ran_param_val.lst->lst_ran_param = calloc(3, sizeof(lst_ran_param_t));
  dst.ran_param->ran_param_val.lst->lst_ran_param[0].ran_param_id = 2;
  dst.ran_param->ran_param_val.lst->lst_ran_param[1].ran_param_id = 2;
  dst.ran_param->ran_param_val.lst->lst_ran_param[2].ran_param_id = 2;
  assert(dst.ran_param != NULL && "Memory exhausted");

  fill_rrm_policy(&dst.ran_param->ran_param_val.lst->lst_ran_param[0].ran_param_struct, plmnid[0], sst[0], sd[0], 25, 85, 5);
  fill_rrm_policy(&dst.ran_param->ran_param_val.lst->lst_ran_param[1].ran_param_struct, plmnid[1], sst[1], sd[1], 35, 75, 15);
  fill_rrm_policy(&dst.ran_param->ran_param_val.lst->lst_ran_param[2].ran_param_struct, plmnid[2], sst[2], sd[2], 15, 65, 15);

}
```

## 5. Result
### 5.1 Install FlexRIC
The screenshot after executing step [2.6](#26-run-near-rt-ric), [2.6.1](#261-run-the-gnb-du), and [2.7](#27-run-xapp)
- Near-RT RIC
    ![](https://i.imgur.com/j4BUXCt.png)

- gnb-du
    ![](https://i.imgur.com/7PnPJuv.png)

- xApp
    ![](https://i.imgur.com/ygBuuX8.png)

Move the gnb-du to another IP, then use [E2AP sniffer](https://hackmd.io/mFFFnpqWQLqif7Gh8Do4HQ) to capture the E2AP packet. 
- Near-RT RIC, xApp: `192.168.8.41`
- gnb-du: `192.168.8.5`
    ![](https://i.imgur.com/ILQNGqo.png)

> E2 agent send the E2 SetupRequest repeatedly if E2 Setup Response isn't gotten.

### 5.2 O-DU Connects to FlexRIC

E2SM-KPM xApp in the FlexRIC received the RIC indication from O-DU and decoded the message successfully. 

The FlexRIC xApp can print the cell indications that consists of:
- UE throughput
- Used PRB
- Available PRB
- PRB usage

![](https://i.imgur.com/Wk39LWO.png)

### 5.3 FlexRIC ["mir_dev"] upgrades to E2APv2

The 2 cases to be tested:

#### agent-ric
Execute 1 terminal:
```bash
./flexric/build/test/agent-ric
```

The procedures in the execution

- Initialization
    ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_58f5396d4211c77d183d016079d2157b.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519449&Signature=Qp0uUiC4uPl93KLhz4oEBx1%2FxbQ%3D)
- RIC Subscription Request
    ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_7d810bc77a146897693fb936654e6e78.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519460&Signature=ta11DjCxrIhMkyteEYJpS7%2B1WQ8%3D)
- RIC Indication
    ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_f88f26bbc1c9d3102f4061a3fc9a0651.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519468&Signature=bjUN8h2vAha9PBnz6XOZ1sE%2BQPI%3D)
- RIC Control
    ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_b691b38d6c229bd1f9ecd2b9c4e74b64.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519482&Signature=vPbPXyBaBJ33EpAl4OEaqxHTldI%3D)
- RIC Subscription Delete
    ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_9b36a2154401d3d46ddae755c0b1a214.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519497&Signature=fy5qITcKHfJVpYJyHaxeJdTFATc%3D)

#### emu_agent_gnb_du
Execute three terminals:
```bash
./flexric/build/examples/emulator/agent/emu_agent_gnb_du

./flexric/build/examples/ric/nearRT-RIC

./flexric/build/examples/xApp/c/kpm_rc/xapp_kpm_rc
```

The procedures in the execution
- Near-RT RIC
    ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_2b2ef29a5542dfc1cad7ded94824ed1c.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519513&Signature=K3QVr%2FAw99TTvM4VCTi1p9qXN3g%3D)

- xApp
    - RIC Indication
        ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_098ac8615f999adfa91bd85ad4673dfb.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519521&Signature=xQhAHQoCONPpyVMIuYVTAFgs6Dk%3D)
    - RIC Control
        ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_b6bc7743658bfd5c5b30726ae475b831.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519534&Signature=7or3n0jKMWkEDaTx%2B7u9Xk4aEmo%3D)

- emu_agent_gnb_du
    ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_0600c50a20b4f940ccc20685e91e43c7.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519543&Signature=%2BbQf8mzW6NDQHMqvmrdDecJuL5E%3D)

### 5.4 O-DU Integrates to FlexRIC ["mir-dev"] E2SM-KPMv3

In the beginning, O-DU will finish the procedures below.

![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_dd82004f395a3b9eab6fba0f2400a222.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519553&Signature=eA3fw0bvkLaXzm1gxMv6%2BBqCjes%3D)

Due to FlexRIC lacks two functionality at this moment:
1. FlexRIC doesn't support encoding multiple action items in the subscription 
    ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_f45cb73b50003a39ce28b8e59fb9258a.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519573&Signature=YVLmCcygCkDHSSwHfQhR1Ah5ZxI%3D)
2. FlexRIC doesn't support the decode Slice ID in the KPM service model
    ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_57630ecb06fc7ba5c0d999fa8b227a79.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519583&Signature=Rwqfu2fbNGmzY5IWMs2Xw3l3OQM%3D)

In this note, we only finish the result on this MSC:
![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_29cc3de557d6e0e28b1c5ec44f6840a8.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519590&Signature=ZNYlQ5lCf3hTTpxFTxLr5jsJ36I%3D)

Result in xApp:

![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_a8633689a7767cb381702e741cfc4b9b.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519417&Signature=VHhAylOS50CRTBJ1LIFu08Du178%3D)
<!-- ![](https://hackmd.io/_uploads/BJ338lfUh.png)
 -->

### 5.5 O-DU Integratrs to FlexRIC ['mir-dev'] E2SM-RC

Execute the O-DU and xApp. Here is the log in the execution:

- xApp
    
    ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_c64398a577b5cde9738755754c18e5e6.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519610&Signature=kfHmzdpWeWs5Mgc9WftOhUSVYls%3D)

- O-DU
    
    ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_3a18f5fd695d3cfee639b17fb672b4f5.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519618&Signature=ZuU2u%2B7tLkSqXAwujG2vYX4B24Q%3D)
    
    ![](https://hackmd-prod-images.s3-ap-northeast-1.amazonaws.com/uploads/upload_a620cd326fd85529a241207185b5c8c0.png?AWSAccessKeyId=AKIA3XSAAW6AWSKNINWO&Expires=1696519637&Signature=StEzm0dw8ivP778NNIncVDR52v0%3D)
