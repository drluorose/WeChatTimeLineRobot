/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface TenpayBindCardInfo : XXUnknownSuperclass {
	BOOL m_bSameCardExist;
	NSString* m_nsBankType;
	NSString* m_nsBankName;
	NSString* m_nsTelphone;
	NSString* m_nsCardType;
	NSString* m_nsBindCardNumber;
	NSString* m_nsBindSerial;
	NSString* m_nsToken;
}
@property(retain, nonatomic) NSString* m_nsToken;
@property(retain, nonatomic) NSString* m_nsBindSerial;
@property(retain, nonatomic) NSString* m_nsBindCardNumber;
@property(retain, nonatomic) NSString* m_nsCardType;
@property(retain, nonatomic) NSString* m_nsTelphone;
@property(retain, nonatomic) NSString* m_nsBankName;
@property(retain, nonatomic) NSString* m_nsBankType;
@property(assign, nonatomic) BOOL m_bSameCardExist;
-(void).cxx_destruct;
-(void)dealloc;
@end
