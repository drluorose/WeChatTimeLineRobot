/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinString_t;

@interface GetChatRoomMsgRequest : WXPBGeneratedMessage {
}
@property(assign, nonatomic) unsigned upDownFlag;
@property(assign, nonatomic) unsigned needCount;
@property(assign, nonatomic) unsigned msgSeq;
@property(retain, nonatomic) SKBuiltinString_t* chatroomId;
+(void)initialize;
@end
