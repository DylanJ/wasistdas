/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_lobby_2eproto__INCLUDED
#define PROTOBUF_C_lobby_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS

#include "client.pb-c.h"

typedef struct _NET__LobbyJoin NET__LobbyJoin;
typedef struct _NET__LobbyLeave NET__LobbyLeave;
typedef struct _NET__LobbyChat NET__LobbyChat;
typedef struct _NET__LobbyWho NET__LobbyWho;


/* --- enums --- */


/* --- messages --- */

struct  _NET__LobbyJoin
{
  ProtobufCMessage base;
  int32_t id;
};
#define NET__LOBBY_JOIN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&net__lobby_join__descriptor) \
    , 0 }


struct  _NET__LobbyLeave
{
  ProtobufCMessage base;
  int32_t id;
  char *reason;
};
#define NET__LOBBY_LEAVE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&net__lobby_leave__descriptor) \
    , 0, NULL }


struct  _NET__LobbyChat
{
  ProtobufCMessage base;
  int32_t id;
  char *message;
};
#define NET__LOBBY_CHAT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&net__lobby_chat__descriptor) \
    , 0, NULL }


struct  _NET__LobbyWho
{
  ProtobufCMessage base;
  size_t n_clients;
  NET__Client **clients;
};
#define NET__LOBBY_WHO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&net__lobby_who__descriptor) \
    , 0,NULL }


/* NET__LobbyJoin methods */
void   net__lobby_join__init
                     (NET__LobbyJoin         *message);
size_t net__lobby_join__get_packed_size
                     (const NET__LobbyJoin   *message);
size_t net__lobby_join__pack
                     (const NET__LobbyJoin   *message,
                      uint8_t             *out);
size_t net__lobby_join__pack_to_buffer
                     (const NET__LobbyJoin   *message,
                      ProtobufCBuffer     *buffer);
NET__LobbyJoin *
       net__lobby_join__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   net__lobby_join__free_unpacked
                     (NET__LobbyJoin *message,
                      ProtobufCAllocator *allocator);
/* NET__LobbyLeave methods */
void   net__lobby_leave__init
                     (NET__LobbyLeave         *message);
size_t net__lobby_leave__get_packed_size
                     (const NET__LobbyLeave   *message);
size_t net__lobby_leave__pack
                     (const NET__LobbyLeave   *message,
                      uint8_t             *out);
size_t net__lobby_leave__pack_to_buffer
                     (const NET__LobbyLeave   *message,
                      ProtobufCBuffer     *buffer);
NET__LobbyLeave *
       net__lobby_leave__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   net__lobby_leave__free_unpacked
                     (NET__LobbyLeave *message,
                      ProtobufCAllocator *allocator);
/* NET__LobbyChat methods */
void   net__lobby_chat__init
                     (NET__LobbyChat         *message);
size_t net__lobby_chat__get_packed_size
                     (const NET__LobbyChat   *message);
size_t net__lobby_chat__pack
                     (const NET__LobbyChat   *message,
                      uint8_t             *out);
size_t net__lobby_chat__pack_to_buffer
                     (const NET__LobbyChat   *message,
                      ProtobufCBuffer     *buffer);
NET__LobbyChat *
       net__lobby_chat__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   net__lobby_chat__free_unpacked
                     (NET__LobbyChat *message,
                      ProtobufCAllocator *allocator);
/* NET__LobbyWho methods */
void   net__lobby_who__init
                     (NET__LobbyWho         *message);
size_t net__lobby_who__get_packed_size
                     (const NET__LobbyWho   *message);
size_t net__lobby_who__pack
                     (const NET__LobbyWho   *message,
                      uint8_t             *out);
size_t net__lobby_who__pack_to_buffer
                     (const NET__LobbyWho   *message,
                      ProtobufCBuffer     *buffer);
NET__LobbyWho *
       net__lobby_who__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   net__lobby_who__free_unpacked
                     (NET__LobbyWho *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*NET__LobbyJoin_Closure)
                 (const NET__LobbyJoin *message,
                  void *closure_data);
typedef void (*NET__LobbyLeave_Closure)
                 (const NET__LobbyLeave *message,
                  void *closure_data);
typedef void (*NET__LobbyChat_Closure)
                 (const NET__LobbyChat *message,
                  void *closure_data);
typedef void (*NET__LobbyWho_Closure)
                 (const NET__LobbyWho *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor net__lobby_join__descriptor;
extern const ProtobufCMessageDescriptor net__lobby_leave__descriptor;
extern const ProtobufCMessageDescriptor net__lobby_chat__descriptor;
extern const ProtobufCMessageDescriptor net__lobby_who__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_lobby_2eproto__INCLUDED */
