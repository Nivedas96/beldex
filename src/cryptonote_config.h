// Copyright (c) 2014-2018, The Monero Project
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 
// Parts of this file are originally copyright (c) 2012-2013 The Cryptonote developers

#pragma once

#include <string>
#include <boost/uuid/uuid.hpp>

#define CRYPTONOTE_DNS_TIMEOUT_MS                       20000

#define CRYPTONOTE_MAX_BLOCK_NUMBER                     500000000
#define CRYPTONOTE_MAX_BLOCK_SIZE                       500000000  // block header blob limit, never used!
#define CRYPTONOTE_GETBLOCKTEMPLATE_MAX_BLOCK_SIZE	196608 //size of block (bytes) that is the maximum that miners will produce
#define CRYPTONOTE_MAX_TX_SIZE                          1000000000
#define CRYPTONOTE_PUBLIC_ADDRESS_TEXTBLOB_VER          0
#define CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW            60
#define CURRENT_TRANSACTION_VERSION                     2
#define CURRENT_BLOCK_MAJOR_VERSION                     1
#define CURRENT_BLOCK_MINOR_VERSION                     0
#define CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT              60*60*2
#define CRYPTONOTE_DEFAULT_TX_SPENDABLE_AGE             3

#define BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW               60

#define CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT_V2           500
#define BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW_V2            12

// MONEY_SUPPLY - total number coins to be generated
//#define MONEY_SUPPLY                                    ((uint64_t)(-1)) // to be changed to 25600000000000000000 next update as uint64_t can't represent it
#define MONEY_SUPPLY                                    ((uint64_t)1500000000000000000) //sarath changed
#define EMISSION_SPEED_FACTOR_PER_MINUTE                (24)
#define FINAL_SUBSIDY_PER_MINUTE                        ((uint64_t)3000000000) // 3 * pow(10, 11)

#define HARD_FORK_SPLIT_HEIGHT                          ((uint64_t)1)
#define DEV_REWARD                                      ((uint64_t)750000000000000000) // ~5.8% dev
#define CRYPTONOTE_REWARD_BLOCKS_WINDOW                 100
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2    60000 //size of block (bytes) after which reward for block calculated using block size
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1    20000 //size of block (bytes) after which reward for block calculated using block size - before first fork
#define CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V5    300000 //size of block (bytes) after which reward for block calculated using block size - second change, from v5
#define CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE          600
//#define CRYPTONOTE_DISPLAY_DECIMAL_POINT                11
#define CRYPTONOTE_DISPLAY_DECIMAL_POINT                9  //sarath change
// COIN - number of smallest units in one coin
//#define COIN                                            ((uint64_t)100000000000) // pow(10, 11)
#define COIN                                            ((uint64_t)1000000000) // pow(10, 11)

//#define FEE_PER_KB_OLD                                  ((uint64_t)10000000000) // pow(10, 10)
#define FEE_PER_KB_OLD                                  ((uint64_t)6000000000) // pow(10, 10)
#define FEE_PER_KB                                      ((uint64_t)200000000) // 2 * pow(10, 9)
#define DYNAMIC_FEE_PER_KB_BASE_FEE                     ((uint64_t)200000000) // 2 * pow(10,9)
#define DYNAMIC_FEE_PER_KB_BASE_BLOCK_REWARD            ((uint64_t)100000000000) // 10 * pow(10,12)
#define DYNAMIC_FEE_PER_KB_BASE_FEE_V5                  ((uint64_t)200000000 * (uint64_t)CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2 / CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V5)

#define ORPHANED_BLOCKS_MAX_COUNT                       100


#define DIFFICULTY_TARGET_V2                            120  // seconds
#define DIFFICULTY_TARGET_V1                            60  // seconds - before first fork
#define DIFFICULTY_WINDOW                               720 // blocks
#define DIFFICULTY_LAG                                  15  // !!!
#define DIFFICULTY_CUT                                  60  // timestamps to cut after sorting
#define DIFFICULTY_BLOCKS_COUNT                         DIFFICULTY_WINDOW + DIFFICULTY_LAG

#define DIFFICULTY_WINDOW_V2                            60 
#define DIFFICULTY_LAG_V2                               0  // just for refrence
#define DIFFICULTY_CUT_V2                               0  // just for refrence
#define DIFFICULTY_BLOCKS_COUNT_V2                      DIFFICULTY_WINDOW_V2

#define CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS_V1   DIFFICULTY_TARGET_V1 * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS
#define CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS_V2   DIFFICULTY_TARGET_V2 * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS
#define CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS       1


#define DIFFICULTY_BLOCKS_ESTIMATE_TIMESPAN             DIFFICULTY_TARGET_V1 //just alias; used by tests


#define BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT          10000  //by default, blocks ids count in synchronizing
#define BLOCKS_SYNCHRONIZING_DEFAULT_COUNT_PRE_V4       100    //by default, blocks count in blocks downloading
#define BLOCKS_SYNCHRONIZING_DEFAULT_COUNT              20     //by default, blocks count in blocks downloading

#define CRYPTONOTE_MEMPOOL_TX_LIVETIME                    (86400*3) //seconds, three days
#define CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME     604800 //seconds, one week

#define COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT           1000

#define P2P_LOCAL_WHITE_PEERLIST_LIMIT                  1000
#define P2P_LOCAL_GRAY_PEERLIST_LIMIT                   5000

#define P2P_DEFAULT_CONNECTIONS_COUNT                   8
#define P2P_DEFAULT_HANDSHAKE_INTERVAL                  60           //secondes
#define P2P_DEFAULT_PACKET_MAX_SIZE                     50000000     //50000000 bytes maximum packet size
#define P2P_DEFAULT_PEERS_IN_HANDSHAKE                  250
#define P2P_DEFAULT_CONNECTION_TIMEOUT                  5000       //5 seconds
#define P2P_DEFAULT_PING_CONNECTION_TIMEOUT             2000       //2 seconds
#define P2P_DEFAULT_INVOKE_TIMEOUT                      60*2*1000  //2 minutes
#define P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT            5000       //5 seconds
#define P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT       70
#define P2P_DEFAULT_ANCHOR_CONNECTIONS_COUNT            2

#define P2P_FAILED_ADDR_FORGET_SECONDS                  (60*60)     //1 hour
#define P2P_IP_BLOCKTIME                                (60*60*24)  //24 hour
#define P2P_IP_FAILS_BEFORE_BLOCK                       10
#define P2P_IDLE_CONNECTION_KILL_INTERVAL               (5*60) //5 minutes

#define P2P_SUPPORT_FLAG_FLUFFY_BLOCKS                  0x01
#define P2P_SUPPORT_FLAGS                               P2P_SUPPORT_FLAG_FLUFFY_BLOCKS

#define ALLOW_DEBUG_COMMANDS

//#define CRYPTONOTE_NAME                         "monerov"
#define CRYPTONOTE_NAME                         "beldex" //sarath changed
#define CRYPTONOTE_POOLDATA_FILENAME            "poolstate.bin"
#define CRYPTONOTE_BLOCKCHAINDATA_FILENAME      "data.mdb"
#define CRYPTONOTE_BLOCKCHAINDATA_LOCK_FILENAME "lock.mdb"
#define P2P_NET_DATA_FILENAME                   "p2pstate.bin"
#define MINER_CONFIG_FILE_NAME                  "miner_conf.json"

#define THREAD_STACK_SIZE                       5 * 1024 * 1024

#define HF_VERSION_DYNAMIC_FEE                  4
#define HF_VERSION_MIN_MIXIN_4                  6
#define HF_VERSION_MIN_MIXIN_6                  7
#define HF_VERSION_ENFORCE_RCT                  6

#define PER_KB_FEE_QUANTIZATION_DECIMALS        8

#define HASH_OF_HASHES_STEP                     256

#define DEFAULT_TXPOOL_MAX_SIZE                 648000000ull // 3 days at 300000, in bytes

// New constants are intended to go here
namespace config
{
  uint64_t const DEFAULT_FEE_ATOMIC_XMR_PER_KB = 500; // Just a placeholder!  Change me!
  uint8_t const FEE_CALCULATION_MAX_RETRIES = 10;
  uint64_t const DEFAULT_DUST_THRESHOLD = ((uint64_t)200000000); // 2 * pow(10, 9)
  uint64_t const BASE_REWARD_CLAMP_THRESHOLD = ((uint64_t)10000000); // pow(10, 8)
  std::string const P2P_REMOTE_DEBUG_TRUSTED_PUB_KEY = "0000000000000000000000000000000000000000000000000000000000000000";

  //uint64_t const CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 18;
  uint64_t const CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 0xd1;
  uint64_t const CRYPTONOTE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX = 19;
  uint64_t const CRYPTONOTE_PUBLIC_SUBADDRESS_BASE58_PREFIX = 42;
  uint16_t const P2P_DEFAULT_PORT = 19090; 
  uint16_t const RPC_DEFAULT_PORT = 19091;
  uint16_t const ZMQ_RPC_DEFAULT_PORT = 19092;
  boost::uuids::uuid const NETWORK_ID = { {
      0x25 ,0x42, 0xD9, 0x83 , 0x89, 0x10 , 0x91, 0x92, 0x92, 0x21, 0x41, 0x42, 0x47, 0xA1, 0xD1, 0x29 
    } }; // Bender's nightmare
  std::string const GENESIS_TX ="013c01ff0004fb9ea90302f93907e70594d0ece3e0ae4d9521a76fb6b02b3e436da73aea5bb82e69ba18368088debe010282df371b0e1b776a41bc84300f3d530fefbbf787d806e278bc52597bda428b5780b4c4c321020e63dd8ce63e6153aac3f65cf2228fd04ad4c3fe40d24e878927862f910631f580c0fc82aa0202f3b2a7804592dcafe009d12d0e226e87202e5689e2e8a122f9cdec9670fa9d6921011953999f760f3273abcafbb489e6a94707e8d3517dcbc9b86734cdd528491db1"; 
  uint32_t const GENESIS_NONCE = 13324;

  namespace testnet
  {
    uint64_t const CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 53;
    uint64_t const CRYPTONOTE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX = 54;
    uint64_t const CRYPTONOTE_PUBLIC_SUBADDRESS_BASE58_PREFIX = 63;
    uint16_t const P2P_DEFAULT_PORT = 29090;
    uint16_t const RPC_DEFAULT_PORT = 29091;
    uint16_t const ZMQ_RPC_DEFAULT_PORT = 29092;
    boost::uuids::uuid const NETWORK_ID = { {
      0x20 ,0x43, 0xD4, 0x88 , 0x82, 0x75 , 0x01, 0x91, 0x97, 0x61, 0x60, 0xA1, 0x40, 0xA2, 0xD1, 0x57 
      } };
    std::string const GENESIS_TX = "013c01ff0004fb9ea903027c5219faf0e43e73b11bf2a306504b0f37ca4be9c828e1c6cffb695462120cc88088debe010223c1e9aa01f8d1be7f23926e1f42df99862d4a0510eef5ff5be47b1651cfd9b280b4c4c32102b089009c90b258bfb788825d115bab46e91492df50d1629675b72c2c57c81c4780c0fc82aa020267236880afe8b4e7a110c16e9bcb27dd35c3b86013e18957e7ff1f25dbbf3bb3210188f72f7ce2bc472243ef8ecb5991c65a6a6e78f81e2bd4c77c48ff6c7f521a73";
    uint32_t const GENESIS_NONCE = 21218;
  }

  namespace stagenet
  {
    uint64_t const CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 24;
    uint64_t const CRYPTONOTE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX = 25;
    uint64_t const CRYPTONOTE_PUBLIC_SUBADDRESS_BASE58_PREFIX = 36;
    uint16_t const P2P_DEFAULT_PORT = 38080;
    uint16_t const RPC_DEFAULT_PORT = 38081;
    uint16_t const ZMQ_RPC_DEFAULT_PORT = 38082;
    boost::uuids::uuid const NETWORK_ID = { {
      0x60 ,0x43, 0xD4, 0x38 , 0x82, 0x15 , 0x19, 0x29, 0x97, 0x21, 0x69, 0x42, 0x46, 0xA1, 0xD2, 0x50 
      } }; // Bender's daydream
    std::string const GENESIS_TX ="013c01ff0004fb9ea90302b15de78f28be2eed573dffd4847df5f7c761c1c6a171ec7203f0fb39b5d0377e8088debe0102ca0fb91a5b452e5f7186d8d6a2efe33bbaca2361e3c853638da09c8c8d4f410680b4c4c32102d9d8dc25608ae20d4bbad9342fdd0efee5b65149d4843155b75855f1da992d9780c0fc82aa0202c64ddf8de69afdaa2dbcfd3e27f828f97b18b5b24ba4b3ff50aef033ed4c7d932101d359f762e51b32d14bea5127a5fb0d091181a90561c30787a438b21dc546c3a4";
    uint32_t const GENESIS_NONCE = 18743;
  }
}

namespace cryptonote
{
  enum network_type : uint8_t
  {
    MAINNET = 0,
    TESTNET,
    STAGENET,
    FAKECHAIN,
    UNDEFINED = 255
  };
}
