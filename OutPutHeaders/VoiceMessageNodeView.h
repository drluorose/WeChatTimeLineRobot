/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IMsgRevokeExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "WeChat-Structs.h"
#import "VoiceTransFloatViewDelegate.h"
#import "ChatBackgroundExt.h"
#import "BaseMessageNodeView.h"

@class UILabel, UIImageView, NSString, MMTipsViewController, VoiceTransFloatPreview;

@interface VoiceMessageNodeView : BaseMessageNodeView <ChatBackgroundExt, MMTipsViewControllerDelegate, VoiceTransFloatViewDelegate, IMsgRevokeExt> {
	UILabel* m_oSecLabel;
	UIImageView* m_oPlayingImageView;
	UIImageView* m_oBackImageView;
	UIImageView* m_oUnreadImageView;
	UILabel* m_oFwdHintLabel;
	UIImageView* m_oFwdHintBkgImageView;
	BOOL m_bIsPlaying;
	BOOL m_bVoiceOverFoucused;
	MMTipsViewController* m_voiceTransIntro;
	VoiceTransFloatPreview* m_voiceTransFloatPreview;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UILabel* m_oSecLabel;
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(void)onWindowHide;
-(void)onTransComplete;
-(void)onClickTipsBtn:(unsigned)btn;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityElementDidBecomeFocused;
-(void)onChatBackgroundChanged:(id)changed;
-(void)OnMsgRevoked:(id)revoked n64MsgId:(long long)anId SysMsg:(id)msg;
-(void)restartNodeViewAnimation;
-(void)stopNodeViewAnimation;
-(void)startNodeViewAnimation;
-(BOOL)isTouchInView:(id)view;
-(void)onMenuItemWillHide;
-(void)onTouchCancel;
-(void)onLongTouch;
-(void)onTouchUpInside;
-(void)onClick;
-(void)onTouchDownRepeat;
-(void)onTouchDown;
-(void)onMoreOperate:(id)operate;
-(void)onForward:(id)forward;
-(void)showVoiceTransView;
-(void)onVoiceTrans:(id)trans;
-(void)onFavorite:(id)favorite;
-(void)onSwitch:(id)aSwitch;
-(void)showOpearation;
-(BOOL)canShowVoiceTransMenu;
-(CGSize)forwardMsgSize;
-(BOOL)isForwardMsg;
-(void)initForwardHintLabel;
-(void)onClearResource;
-(void)onDisappear;
-(void)updateStatus:(id)status;
-(void)updateVoiceLength:(id)length;
-(CGPoint)getSendOKViewOrgin;
-(void)initUnreadView;
-(void)initBackImageView;
-(void)layoutSubviewsInternal;
-(void)updateSecLabelColor;
-(void)updateBkgImage:(BOOL)image;
-(CGSize)sizeForFrame:(CGRect)frame;
-(void)dealloc;
-(id)initWithMessageWrap:(id)messageWrap Contact:(id)contact ChatContact:(id)contact3;
-(float)calculateVoiceTimeLength:(unsigned long)length;
@end
