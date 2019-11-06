// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class GroupAcceptJoinInfo;
@class GroupMessageRead;
@class GroupPeer;
@class GroupRealMsg;
@class GroupRecommendInfo;
@class OfflineMessage;
@class Stranger;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - MessageRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface MessageRoot : GPBRootObject
@end

#pragma mark - StrangerGetListReq

@interface StrangerGetListReq : GPBMessage

@end

#pragma mark - Stranger

typedef GPB_ENUM(Stranger_FieldNumber) {
  Stranger_FieldNumber_TokId = 1,
  Stranger_FieldNumber_NickName = 2,
  Stranger_FieldNumber_Bio = 3,
  Stranger_FieldNumber_Signature = 4,
  Stranger_FieldNumber_AvatarFileName = 5,
};

@interface Stranger : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *tokId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *nickName;

@property(nonatomic, readwrite, copy, null_resettable) NSData *bio;

@property(nonatomic, readwrite, copy, null_resettable) NSData *signature;

/** "" if not avatar set */
@property(nonatomic, readwrite, copy, null_resettable) NSData *avatarFileName;

@end

#pragma mark - StrangerGetListRes

typedef GPB_ENUM(StrangerGetListRes_FieldNumber) {
  StrangerGetListRes_FieldNumber_StrangerArray = 1,
};

@interface StrangerGetListRes : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Stranger*> *strangerArray;
/** The number of items in @c strangerArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger strangerArray_Count;

@end

#pragma mark - StrangerGetAvatartReq

typedef GPB_ENUM(StrangerGetAvatartReq_FieldNumber) {
  StrangerGetAvatartReq_FieldNumber_Pk = 1,
};

@interface StrangerGetAvatartReq : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *pk;

@end

#pragma mark - StrangerSignatureReq

typedef GPB_ENUM(StrangerSignatureReq_FieldNumber) {
  StrangerSignatureReq_FieldNumber_Pk = 1,
};

@interface StrangerSignatureReq : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *pk;

@end

#pragma mark - StrangerSignatureRes

typedef GPB_ENUM(StrangerSignatureRes_FieldNumber) {
  StrangerSignatureRes_FieldNumber_Pk = 1,
  StrangerSignatureRes_FieldNumber_Signature = 2,
};

@interface StrangerSignatureRes : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *pk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *signature;

@end

#pragma mark - QueryFriendReq

typedef GPB_ENUM(QueryFriendReq_FieldNumber) {
  QueryFriendReq_FieldNumber_Pk = 1,
};

@interface QueryFriendReq : GPBMessage

/** hex show */
@property(nonatomic, readwrite, copy, null_resettable) NSData *pk;

@end

#pragma mark - QueryFriendRes

typedef GPB_ENUM(QueryFriendRes_FieldNumber) {
  QueryFriendRes_FieldNumber_Exist = 1,
  QueryFriendRes_FieldNumber_Pk = 2,
};

@interface QueryFriendRes : GPBMessage

@property(nonatomic, readwrite) uint32_t exist;

/** hex show */
@property(nonatomic, readwrite, copy, null_resettable) NSData *pk;

@end

#pragma mark - OfflineMessageReq

typedef GPB_ENUM(OfflineMessageReq_FieldNumber) {
  OfflineMessageReq_FieldNumber_LocalMsgId = 1,
  OfflineMessageReq_FieldNumber_ToPk = 2,
  OfflineMessageReq_FieldNumber_CryptoMessage = 3,
  OfflineMessageReq_FieldNumber_MsgType = 4,
};

@interface OfflineMessageReq : GPBMessage

@property(nonatomic, readwrite) int64_t localMsgId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *toPk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *cryptoMessage;

@property(nonatomic, readwrite) uint32_t msgType;

@end

#pragma mark - OfflineMessageRes

typedef GPB_ENUM(OfflineMessageRes_FieldNumber) {
  OfflineMessageRes_FieldNumber_LocalMsgId = 1,
};

@interface OfflineMessageRes : GPBMessage

@property(nonatomic, readwrite) int64_t localMsgId;

@end

#pragma mark - OfflineMessageReadNotice

typedef GPB_ENUM(OfflineMessageReadNotice_FieldNumber) {
  OfflineMessageReadNotice_FieldNumber_LatestMsgId = 1,
};

@interface OfflineMessageReadNotice : GPBMessage

@property(nonatomic, readwrite) uint64_t latestMsgId;

@end

#pragma mark - OfflineMessage

typedef GPB_ENUM(OfflineMessage_FieldNumber) {
  OfflineMessage_FieldNumber_LocalMsgId = 1,
  OfflineMessage_FieldNumber_MsgId = 2,
  OfflineMessage_FieldNumber_FrPk = 3,
  OfflineMessage_FieldNumber_ToPk = 4,
  OfflineMessage_FieldNumber_Content = 5,
  OfflineMessage_FieldNumber_CreateTime = 6,
  OfflineMessage_FieldNumber_MsgType = 7,
  OfflineMessage_FieldNumber_FileSize = 8,
  OfflineMessage_FieldNumber_Checksum = 9,
  OfflineMessage_FieldNumber_FileDisplayName = 10,
};

@interface OfflineMessage : GPBMessage

@property(nonatomic, readwrite) int64_t localMsgId;

@property(nonatomic, readwrite) uint64_t msgId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *frPk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *toPk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *content;

@property(nonatomic, readwrite) uint64_t createTime;

/** 0, text; 1, file */
@property(nonatomic, readwrite) uint32_t msgType;

@property(nonatomic, readwrite) uint32_t fileSize;

@property(nonatomic, readwrite, copy, null_resettable) NSData *checksum;

@property(nonatomic, readwrite, copy, null_resettable) NSData *fileDisplayName;

@end

#pragma mark - OfflineMessagePullReq

@interface OfflineMessagePullReq : GPBMessage

@end

#pragma mark - OfflineMessagePullRes

typedef GPB_ENUM(OfflineMessagePullRes_FieldNumber) {
  OfflineMessagePullRes_FieldNumber_MsgArray = 1,
  OfflineMessagePullRes_FieldNumber_LeftCount = 2,
};

@interface OfflineMessagePullRes : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<OfflineMessage*> *msgArray;
/** The number of items in @c msgArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgArray_Count;

@property(nonatomic, readwrite) uint32_t leftCount;

@end

#pragma mark - OfflineMessageDelReq

typedef GPB_ENUM(OfflineMessageDelReq_FieldNumber) {
  OfflineMessageDelReq_FieldNumber_LastMsgId = 2,
};

@interface OfflineMessageDelReq : GPBMessage

/** last of message id to be deleted */
@property(nonatomic, readwrite) uint64_t lastMsgId;

@end

#pragma mark - DeviceUpdateReq

typedef GPB_ENUM(DeviceUpdateReq_FieldNumber) {
  DeviceUpdateReq_FieldNumber_Type = 1,
  DeviceUpdateReq_FieldNumber_Identifier = 2,
};

@interface DeviceUpdateReq : GPBMessage

/** for push, 1 is ios, 2 is android */
@property(nonatomic, readwrite) uint32_t type;

@property(nonatomic, readwrite, copy, null_resettable) NSData *identifier;

@end

#pragma mark - OfflineFilePullReq

typedef GPB_ENUM(OfflineFilePullReq_FieldNumber) {
  OfflineFilePullReq_FieldNumber_MsgId = 1,
};

@interface OfflineFilePullReq : GPBMessage

@property(nonatomic, readwrite) uint64_t msgId;

@end

#pragma mark - OfflineFileCancelReq

typedef GPB_ENUM(OfflineFileCancelReq_FieldNumber) {
  OfflineFileCancelReq_FieldNumber_MsgId = 1,
};

@interface OfflineFileCancelReq : GPBMessage

@property(nonatomic, readwrite) uint64_t msgId;

@end

#pragma mark - VersionInfoReq

@interface VersionInfoReq : GPBMessage

@end

#pragma mark - VersionInfoRes

typedef GPB_ENUM(VersionInfoRes_FieldNumber) {
  VersionInfoRes_FieldNumber_VersionCode = 1,
  VersionInfoRes_FieldNumber_Version = 2,
  VersionInfoRes_FieldNumber_UpdateDesc = 3,
  VersionInfoRes_FieldNumber_DownloadURL = 4,
  VersionInfoRes_FieldNumber_OfficialWebsite = 5,
  VersionInfoRes_FieldNumber_Remark = 6,
};

@interface VersionInfoRes : GPBMessage

@property(nonatomic, readwrite) uint32_t versionCode;

@property(nonatomic, readwrite, copy, null_resettable) NSData *version;

@property(nonatomic, readwrite, copy, null_resettable) NSData *updateDesc;

@property(nonatomic, readwrite, copy, null_resettable) NSData *downloadURL;

/** Use a semicolon as a separator */
@property(nonatomic, readwrite, copy, null_resettable) NSData *officialWebsite;

@property(nonatomic, readwrite, copy, null_resettable) NSData *remark;

@end

#pragma mark - GroupCreateReq

typedef GPB_ENUM(GroupCreateReq_FieldNumber) {
  GroupCreateReq_FieldNumber_GroupName = 1,
  GroupCreateReq_FieldNumber_Type = 2,
};

@interface GroupCreateReq : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *groupName;

/** 0 is private, 1 is public, default value is 0. */
@property(nonatomic, readwrite) uint32_t type;

@end

#pragma mark - GroupCreateRes

typedef GPB_ENUM(GroupCreateRes_FieldNumber) {
  GroupCreateRes_FieldNumber_GroupId = 1,
  GroupCreateRes_FieldNumber_GroupName = 2,
  GroupCreateRes_FieldNumber_Code = 3,
};

@interface GroupCreateRes : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *groupName;

/** error code: 1, success; else fail */
@property(nonatomic, readwrite) uint32_t code;

@end

#pragma mark - GroupInviteReq

typedef GPB_ENUM(GroupInviteReq_FieldNumber) {
  GroupInviteReq_FieldNumber_GroupId = 1,
  GroupInviteReq_FieldNumber_InviterPk = 2,
  GroupInviteReq_FieldNumber_InviteePk = 3,
};

@interface GroupInviteReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *inviterPk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *inviteePk;

@end

#pragma mark - GroupInviteNotice

typedef GPB_ENUM(GroupInviteNotice_FieldNumber) {
  GroupInviteNotice_FieldNumber_GroupId = 1,
  GroupInviteNotice_FieldNumber_InviterPk = 2,
  GroupInviteNotice_FieldNumber_InviterName = 3,
  GroupInviteNotice_FieldNumber_InviteePk = 4,
  GroupInviteNotice_FieldNumber_InviteeName = 5,
  GroupInviteNotice_FieldNumber_Code = 6,
};

@interface GroupInviteNotice : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *inviterPk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *inviterName;

@property(nonatomic, readwrite, copy, null_resettable) NSData *inviteePk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *inviteeName;

/** error code: 1, success; else fail */
@property(nonatomic, readwrite) uint32_t code;

@end

#pragma mark - GroupPeerListReq

typedef GPB_ENUM(GroupPeerListReq_FieldNumber) {
  GroupPeerListReq_FieldNumber_GroupId = 1,
};

@interface GroupPeerListReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@end

#pragma mark - GroupPeer

typedef GPB_ENUM(GroupPeer_FieldNumber) {
  GroupPeer_FieldNumber_PeerPk = 1,
  GroupPeer_FieldNumber_PeerName = 2,
  GroupPeer_FieldNumber_ConfirmFlag = 3,
};

@interface GroupPeer : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *peerPk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *peerName;

/** 0 confirm, compatible old version; 1, unconfirm; */
@property(nonatomic, readwrite) uint32_t confirmFlag;

@end

#pragma mark - GroupPeerListRes

typedef GPB_ENUM(GroupPeerListRes_FieldNumber) {
  GroupPeerListRes_FieldNumber_GroupId = 1,
  GroupPeerListRes_FieldNumber_GroupName = 2,
  GroupPeerListRes_FieldNumber_OwnerPk = 3,
  GroupPeerListRes_FieldNumber_GroupPeerArray = 4,
};

@interface GroupPeerListRes : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *groupName;

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerPk;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GroupPeer*> *groupPeerArray;
/** The number of items in @c groupPeerArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger groupPeerArray_Count;

@end

#pragma mark - GroupSetTitleReq

typedef GPB_ENUM(GroupSetTitleReq_FieldNumber) {
  GroupSetTitleReq_FieldNumber_GroupId = 1,
  GroupSetTitleReq_FieldNumber_GroupName = 2,
};

@interface GroupSetTitleReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *groupName;

@end

#pragma mark - GroupSetTitleNotice

typedef GPB_ENUM(GroupSetTitleNotice_FieldNumber) {
  GroupSetTitleNotice_FieldNumber_GroupId = 1,
  GroupSetTitleNotice_FieldNumber_GroupName = 2,
};

@interface GroupSetTitleNotice : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *groupName;

@end

#pragma mark - GroupTitleReq

typedef GPB_ENUM(GroupTitleReq_FieldNumber) {
  GroupTitleReq_FieldNumber_GroupId = 1,
};

@interface GroupTitleReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@end

#pragma mark - GroupTitleRes

typedef GPB_ENUM(GroupTitleRes_FieldNumber) {
  GroupTitleRes_FieldNumber_GroupId = 1,
  GroupTitleRes_FieldNumber_GroupName = 2,
};

@interface GroupTitleRes : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *groupName;

@end

#pragma mark - GroupLeaveReq

typedef GPB_ENUM(GroupLeaveReq_FieldNumber) {
  GroupLeaveReq_FieldNumber_GroupId = 1,
};

@interface GroupLeaveReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@end

#pragma mark - GroupLeaveNotice

typedef GPB_ENUM(GroupLeaveNotice_FieldNumber) {
  GroupLeaveNotice_FieldNumber_GroupId = 1,
  GroupLeaveNotice_FieldNumber_PeerPk = 2,
  GroupLeaveNotice_FieldNumber_PeerName = 3,
};

@interface GroupLeaveNotice : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *peerPk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *peerName;

@end

#pragma mark - GroupKickoutReq

typedef GPB_ENUM(GroupKickoutReq_FieldNumber) {
  GroupKickoutReq_FieldNumber_GroupId = 1,
  GroupKickoutReq_FieldNumber_PeerPk = 2,
};

@interface GroupKickoutReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *peerPk;

@end

#pragma mark - GroupKickoutNotice

typedef GPB_ENUM(GroupKickoutNotice_FieldNumber) {
  GroupKickoutNotice_FieldNumber_GroupId = 1,
  GroupKickoutNotice_FieldNumber_PeerPk = 2,
  GroupKickoutNotice_FieldNumber_PeerName = 3,
};

@interface GroupKickoutNotice : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *peerPk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *peerName;

@end

#pragma mark - GroupDismissReq

typedef GPB_ENUM(GroupDismissReq_FieldNumber) {
  GroupDismissReq_FieldNumber_GroupId = 1,
};

@interface GroupDismissReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@end

#pragma mark - GroupDismissNotice

typedef GPB_ENUM(GroupDismissNotice_FieldNumber) {
  GroupDismissNotice_FieldNumber_GroupId = 1,
};

@interface GroupDismissNotice : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@end

#pragma mark - GroupMuteReq

typedef GPB_ENUM(GroupMuteReq_FieldNumber) {
  GroupMuteReq_FieldNumber_GroupId = 1,
  GroupMuteReq_FieldNumber_Status = 2,
};

@interface GroupMuteReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

/** 0: normal; 1: mute */
@property(nonatomic, readwrite) uint32_t status;

@end

#pragma mark - GroupRealMsg

typedef GPB_ENUM(GroupRealMsg_FieldNumber) {
  GroupRealMsg_FieldNumber_GroupId = 1,
  GroupRealMsg_FieldNumber_MsgId = 2,
  GroupRealMsg_FieldNumber_Msg = 3,
  GroupRealMsg_FieldNumber_FrPk = 4,
  GroupRealMsg_FieldNumber_FrName = 5,
  GroupRealMsg_FieldNumber_MsgType = 6,
  GroupRealMsg_FieldNumber_FileName = 7,
  GroupRealMsg_FieldNumber_FileDisplayName = 8,
  GroupRealMsg_FieldNumber_CreateTime = 9,
  GroupRealMsg_FieldNumber_FileSize = 10,
  GroupRealMsg_FieldNumber_Checksum = 11,
  GroupRealMsg_FieldNumber_PrevMsgId = 12,
  GroupRealMsg_FieldNumber_NextMsgId = 13,
};

@interface GroupRealMsg : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite) uint64_t msgId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *msg;

@property(nonatomic, readwrite, copy, null_resettable) NSData *frPk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *frName;

/** 0, text; 1, file */
@property(nonatomic, readwrite) uint32_t msgType;

@property(nonatomic, readwrite, copy, null_resettable) NSData *fileName;

@property(nonatomic, readwrite, copy, null_resettable) NSData *fileDisplayName;

@property(nonatomic, readwrite) uint64_t createTime;

@property(nonatomic, readwrite) uint32_t fileSize;

@property(nonatomic, readwrite, copy, null_resettable) NSData *checksum;

@property(nonatomic, readwrite) uint64_t prevMsgId;

@property(nonatomic, readwrite) uint64_t nextMsgId;

@end

#pragma mark - GroupMessageReq

typedef GPB_ENUM(GroupMessageReq_FieldNumber) {
  GroupMessageReq_FieldNumber_GroupId = 1,
  GroupMessageReq_FieldNumber_Msg = 2,
  GroupMessageReq_FieldNumber_FrPk = 3,
  GroupMessageReq_FieldNumber_LocalMsgId = 4,
};

@interface GroupMessageReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *msg;

@property(nonatomic, readwrite, copy, null_resettable) NSData *frPk;

@property(nonatomic, readwrite) uint64_t localMsgId;

@end

#pragma mark - GroupMessageRead

typedef GPB_ENUM(GroupMessageRead_FieldNumber) {
  GroupMessageRead_FieldNumber_GroupId = 1,
  GroupMessageRead_FieldNumber_LatestMsgId = 2,
  GroupMessageRead_FieldNumber_LeftCount = 3,
  GroupMessageRead_FieldNumber_LastMsg = 4,
};

@interface GroupMessageRead : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite) uint64_t latestMsgId;

@property(nonatomic, readwrite) uint32_t leftCount;

@property(nonatomic, readwrite, strong, null_resettable) GroupRealMsg *lastMsg;
/** Test to see if @c lastMsg has been set. */
@property(nonatomic, readwrite) BOOL hasLastMsg;

@end

#pragma mark - GroupMessageReadNotice

typedef GPB_ENUM(GroupMessageReadNotice_FieldNumber) {
  GroupMessageReadNotice_FieldNumber_MsgsReadArray = 1,
};

@interface GroupMessageReadNotice : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GroupMessageRead*> *msgsReadArray;
/** The number of items in @c msgsReadArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgsReadArray_Count;

@end

#pragma mark - GroupMessagePullReq

typedef GPB_ENUM(GroupMessagePullReq_FieldNumber) {
  GroupMessagePullReq_FieldNumber_GroupId = 1,
};

@interface GroupMessagePullReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@end

#pragma mark - GroupMessagePullRes

typedef GPB_ENUM(GroupMessagePullRes_FieldNumber) {
  GroupMessagePullRes_FieldNumber_MsgArray = 1,
  GroupMessagePullRes_FieldNumber_GroupId = 2,
  GroupMessagePullRes_FieldNumber_LeftCount = 3,
};

@interface GroupMessagePullRes : GPBMessage

/** array of group message */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GroupRealMsg*> *msgArray;
/** The number of items in @c msgArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgArray_Count;

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite) uint32_t leftCount;

@end

#pragma mark - GroupMessageDelReq

typedef GPB_ENUM(GroupMessageDelReq_FieldNumber) {
  GroupMessageDelReq_FieldNumber_GroupId = 1,
  GroupMessageDelReq_FieldNumber_LastMsgId = 2,
};

@interface GroupMessageDelReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite) uint64_t lastMsgId;

@end

#pragma mark - GroupErrorNotice

typedef GPB_ENUM(GroupErrorNotice_FieldNumber) {
  GroupErrorNotice_FieldNumber_GroupId = 1,
  GroupErrorNotice_FieldNumber_Code = 2,
};

@interface GroupErrorNotice : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

/** 1: not group member; 2: not group owner; 3: group is not exist; 4: is group member already */
@property(nonatomic, readwrite) uint32_t code;

@end

#pragma mark - FileTransfer

typedef GPB_ENUM(FileTransfer_FieldNumber) {
  FileTransfer_FieldNumber_GroupId = 1,
  FileTransfer_FieldNumber_ToPk = 2,
  FileTransfer_FieldNumber_RealName = 3,
  FileTransfer_FieldNumber_CreateTime = 4,
  FileTransfer_FieldNumber_FrPk = 5,
  FileTransfer_FieldNumber_UniqueFileName = 6,
  FileTransfer_FieldNumber_Content = 7,
  FileTransfer_FieldNumber_MsgId = 8,
  FileTransfer_FieldNumber_Code = 9,
  FileTransfer_FieldNumber_UpdateTime = 10,
};

@interface FileTransfer : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *toPk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *realName;

@property(nonatomic, readwrite) uint64_t createTime;

@property(nonatomic, readwrite, copy, null_resettable) NSData *frPk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *uniqueFileName;

@property(nonatomic, readwrite, copy, null_resettable) NSData *content;

@property(nonatomic, readwrite) uint64_t msgId;

@property(nonatomic, readwrite) uint32_t code;

@property(nonatomic, readwrite) uint64_t updateTime;

@end

#pragma mark - GroupFilePullReq

typedef GPB_ENUM(GroupFilePullReq_FieldNumber) {
  GroupFilePullReq_FieldNumber_MsgId = 1,
  GroupFilePullReq_FieldNumber_GroupId = 2,
};

@interface GroupFilePullReq : GPBMessage

@property(nonatomic, readwrite) uint64_t msgId;

@property(nonatomic, readwrite) uint64_t groupId;

@end

#pragma mark - GroupFileCancelReq

typedef GPB_ENUM(GroupFileCancelReq_FieldNumber) {
  GroupFileCancelReq_FieldNumber_MsgId = 1,
  GroupFileCancelReq_FieldNumber_GroupId = 2,
};

@interface GroupFileCancelReq : GPBMessage

@property(nonatomic, readwrite) uint64_t msgId;

@property(nonatomic, readwrite) uint64_t groupId;

@end

#pragma mark - GroupInfoReq

typedef GPB_ENUM(GroupInfoReq_FieldNumber) {
  GroupInfoReq_FieldNumber_GroupId = 1,
};

@interface GroupInfoReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@end

#pragma mark - GroupInfoRes

typedef GPB_ENUM(GroupInfoRes_FieldNumber) {
  GroupInfoRes_FieldNumber_GroupId = 1,
  GroupInfoRes_FieldNumber_GroupName = 2,
  GroupInfoRes_FieldNumber_Type = 3,
  GroupInfoRes_FieldNumber_OwnerPk = 4,
  GroupInfoRes_FieldNumber_MembersNum = 5,
  GroupInfoRes_FieldNumber_Remark = 6,
  GroupInfoRes_FieldNumber_ShareId = 7,
  GroupInfoRes_FieldNumber_Status = 8,
};

@interface GroupInfoRes : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *groupName;

@property(nonatomic, readwrite) uint32_t type;

@property(nonatomic, readwrite, copy, null_resettable) NSData *ownerPk;

@property(nonatomic, readwrite) uint32_t membersNum;

@property(nonatomic, readwrite, copy, null_resettable) NSData *remark;

@property(nonatomic, readwrite, copy, null_resettable) NSData *shareId;

/** 0: normal; 1: mute */
@property(nonatomic, readwrite) uint32_t status;

@end

#pragma mark - GroupPeerListNewReq

typedef GPB_ENUM(GroupPeerListNewReq_FieldNumber) {
  GroupPeerListNewReq_FieldNumber_GroupId = 1,
  GroupPeerListNewReq_FieldNumber_Page = 2,
};

@interface GroupPeerListNewReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

/** from 0 to max */
@property(nonatomic, readwrite) uint32_t page;

@end

#pragma mark - GroupPeerListNewRes

typedef GPB_ENUM(GroupPeerListNewRes_FieldNumber) {
  GroupPeerListNewRes_FieldNumber_GroupId = 1,
  GroupPeerListNewRes_FieldNumber_GroupPeerArray = 2,
  GroupPeerListNewRes_FieldNumber_End = 3,
};

@interface GroupPeerListNewRes : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GroupPeer*> *groupPeerArray;
/** The number of items in @c groupPeerArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger groupPeerArray_Count;

@property(nonatomic, readwrite) uint32_t end;

@end

#pragma mark - GroupRemarkReq

typedef GPB_ENUM(GroupRemarkReq_FieldNumber) {
  GroupRemarkReq_FieldNumber_GroupId = 1,
  GroupRemarkReq_FieldNumber_Remark = 2,
};

@interface GroupRemarkReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *remark;

@end

#pragma mark - GroupAcceptJoinInfo

typedef GPB_ENUM(GroupAcceptJoinInfo_FieldNumber) {
  GroupAcceptJoinInfo_FieldNumber_GroupId = 1,
  GroupAcceptJoinInfo_FieldNumber_InviterPk = 2,
  GroupAcceptJoinInfo_FieldNumber_GroupTitle = 3,
  GroupAcceptJoinInfo_FieldNumber_GroupRemark = 4,
};

@interface GroupAcceptJoinInfo : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *inviterPk;

@property(nonatomic, readwrite, copy, null_resettable) NSData *groupTitle;

@property(nonatomic, readwrite, copy, null_resettable) NSData *groupRemark;

@end

#pragma mark - GroupAcceptJoinRequest

typedef GPB_ENUM(GroupAcceptJoinRequest_FieldNumber) {
  GroupAcceptJoinRequest_FieldNumber_InfoArray = 1,
};

@interface GroupAcceptJoinRequest : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GroupAcceptJoinInfo*> *infoArray;
/** The number of items in @c infoArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger infoArray_Count;

@end

#pragma mark - GroupAcceptJoinResponse

typedef GPB_ENUM(GroupAcceptJoinResponse_FieldNumber) {
  GroupAcceptJoinResponse_FieldNumber_GroupId = 1,
  GroupAcceptJoinResponse_FieldNumber_Result = 2,
};

@interface GroupAcceptJoinResponse : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

/** 0 is agree, 1 is refuse */
@property(nonatomic, readwrite) uint32_t result;

@end

#pragma mark - GroupRecommendInfo

typedef GPB_ENUM(GroupRecommendInfo_FieldNumber) {
  GroupRecommendInfo_FieldNumber_GroupId = 1,
  GroupRecommendInfo_FieldNumber_GroupName = 2,
  GroupRecommendInfo_FieldNumber_MembersNum = 3,
  GroupRecommendInfo_FieldNumber_Remark = 4,
  GroupRecommendInfo_FieldNumber_ShareId = 5,
};

@interface GroupRecommendInfo : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite, copy, null_resettable) NSData *groupName;

@property(nonatomic, readwrite) uint32_t membersNum;

@property(nonatomic, readwrite, copy, null_resettable) NSData *remark;

@property(nonatomic, readwrite, copy, null_resettable) NSData *shareId;

@end

#pragma mark - GroupRecommendRequest

typedef GPB_ENUM(GroupRecommendRequest_FieldNumber) {
  GroupRecommendRequest_FieldNumber_Page = 1,
};

@interface GroupRecommendRequest : GPBMessage

/** from 0 to max */
@property(nonatomic, readwrite) uint32_t page;

@end

#pragma mark - GroupRecommendResponse

typedef GPB_ENUM(GroupRecommendResponse_FieldNumber) {
  GroupRecommendResponse_FieldNumber_InfoArray = 1,
  GroupRecommendResponse_FieldNumber_End = 2,
};

@interface GroupRecommendResponse : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GroupRecommendInfo*> *infoArray;
/** The number of items in @c infoArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger infoArray_Count;

@property(nonatomic, readwrite) uint32_t end;

@end

#pragma mark - GroupMessagePullNewReq

typedef GPB_ENUM(GroupMessagePullNewReq_FieldNumber) {
  GroupMessagePullNewReq_FieldNumber_GroupId = 1,
  GroupMessagePullNewReq_FieldNumber_Direction = 2,
  GroupMessagePullNewReq_FieldNumber_StartMsgId = 3,
  GroupMessagePullNewReq_FieldNumber_EndMsgId = 4,
  GroupMessagePullNewReq_FieldNumber_Count = 5,
  GroupMessagePullNewReq_FieldNumber_Tail = 6,
};

@interface GroupMessagePullNewReq : GPBMessage

@property(nonatomic, readwrite) uint64_t groupId;

/** 0, down; 1, up */
@property(nonatomic, readwrite) uint32_t direction;

@property(nonatomic, readwrite) uint64_t startMsgId;

@property(nonatomic, readwrite) uint64_t endMsgId;

@property(nonatomic, readwrite) uint32_t count;

@property(nonatomic, readwrite) uint32_t tail;

@end

#pragma mark - GroupMessagePullNewRes

typedef GPB_ENUM(GroupMessagePullNewRes_FieldNumber) {
  GroupMessagePullNewRes_FieldNumber_MsgArray = 1,
  GroupMessagePullNewRes_FieldNumber_GroupId = 2,
  GroupMessagePullNewRes_FieldNumber_LeftCount = 3,
  GroupMessagePullNewRes_FieldNumber_End = 4,
  GroupMessagePullNewRes_FieldNumber_Direction = 5,
  GroupMessagePullNewRes_FieldNumber_Tail = 6,
  GroupMessagePullNewRes_FieldNumber_StartMsgId = 7,
  GroupMessagePullNewRes_FieldNumber_EndMsgId = 8,
};

@interface GroupMessagePullNewRes : GPBMessage

/** array of group message */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GroupRealMsg*> *msgArray;
/** The number of items in @c msgArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger msgArray_Count;

@property(nonatomic, readwrite) uint64_t groupId;

@property(nonatomic, readwrite) uint32_t leftCount;

@property(nonatomic, readwrite) uint32_t end;

@property(nonatomic, readwrite) uint32_t direction;

@property(nonatomic, readwrite) uint32_t tail;

@property(nonatomic, readwrite) uint64_t startMsgId;

@property(nonatomic, readwrite) uint64_t endMsgId;

@end

#pragma mark - NodesFileRequest

typedef GPB_ENUM(NodesFileRequest_FieldNumber) {
  NodesFileRequest_FieldNumber_Hash_p = 1,
};

@interface NodesFileRequest : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *hash_p;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
