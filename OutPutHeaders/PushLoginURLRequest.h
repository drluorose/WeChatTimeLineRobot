/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, NSString, BaseRequest;

@interface PushLoginURLRequest : WXPBGeneratedMessage {
}
@property(retain, nonatomic) SKBuiltinBuffer_t* autoAuthKey;
@property(retain, nonatomic) NSString* deviceName;
@property(assign, nonatomic) unsigned opcode;
@property(retain, nonatomic) SKBuiltinBuffer_t* randomEncryKey;
@property(retain, nonatomic) NSString* clientId;
@property(retain, nonatomic) NSString* autoAuthTicket;
@property(retain, nonatomic) NSString* userName;
@property(retain, nonatomic) BaseRequest* baseRequest;
+(void)initialize;
@end

