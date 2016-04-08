/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IVOIPUILogicMgrExt.h"
#import "IMsgRevokeExt.h"
#import "WeChat-Structs.h"
#import "IWXVideoPlayerViewExt.h"
#import "IMsgExt.h"
#import "SightIconViewDelegate.h"
#import "IVideoExt.h"
#import "SightPlayerViewDelegate.h"
#import "BaseMessageNodeView.h"

@class UIView, UIImageView, NSString, SightIconView, SightPlayerView, MMAVPlayerItemWrap;

@interface ShortVideoMessageNodeView : BaseMessageNodeView <IVOIPUILogicMgrExt, IWXVideoPlayerViewExt, IMsgRevokeExt, IVideoExt, IMsgExt, SightPlayerViewDelegate, SightIconViewDelegate> {
	UIImageView* m_thumbImg;
	SightPlayerView* m_playerView;
	MMAVPlayerItemWrap* m_playerWrap;
	SightIconView* m_progressView;
	UIView* m_transparentCoverView;
	UIView* m_coverMask;
	CGRect m_vedioFrame;
	int m_currMaskType;
	BOOL m_isLoading;
	BOOL m_isClickDownload;
	unsigned _sightLegalityType;
	BOOL _mayBeIllegalAD;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(void)checkLegalityWithCompletionHandler:(id)completionHandler;
-(BOOL)canAutoPlaySettingFromServer;
-(BOOL)shouldAutoDownload;
-(BOOL)shouldAutoPlay;
-(void)onWXVideoPlayerViewPlay:(id)play;
-(void)onVideoVoipViewDisappear;
-(void)onVideoVoipViewDidAppear:(id)onVideoVoipView;
-(id)getMessageDisplayView;
-(void)clearShortVideo;
-(void)stopPlayShortVideo;
-(void)playShortVideo;
-(void)onResume;
-(void)onStack;
-(void)onItemCleared;
-(void)setProgress:(unsigned long)progress;
-(void)UpdateVideoMsg:(id)msg;
-(void)OnUpdateVideoStatus:(id)status MsgWrap:(id)wrap;
-(void)OnThumbDownloadOK:(id)ok;
-(void)onProgressEnd;
-(void)OnVideoGetIntoUploadQueue:(id)queue;
-(id)thumbImage;
-(void)onClick;
-(void)onTouchUpInside;
-(void)hideCoverMaskWithAnim:(BOOL)anim;
-(void)showCoverMask:(int)mask;
-(void)initCoverMask;
-(id)makeSenderMaskLayer;
-(id)makeRecieverMaskLayer;
-(id)makeRecieverPath:(float)path;
-(id)makeSenderPath:(float)path;
-(void)OnMsgRevoked:(id)revoked n64MsgId:(long long)anId SysMsg:(id)msg;
-(void)showOpearation;
-(void)onMoreOperate:(id)operate;
-(void)onFavoriteAdd:(id)add;
-(void)onForward:(id)forward;
-(void)onLongTouch;
-(BOOL)isSendFailed;
-(void)layoutSubviewsInternal;
-(void)reLayoutSubviews;
-(void)layoutSubviews;
-(CGSize)videoSizeForThumbSize:(CGSize)thumbSize;
-(CGSize)sizeForFrame:(CGRect)frame;
-(void)willMoveToSuperview:(id)superview;
-(void)dealloc;
-(void)commonInit;
-(id)initWithMessageWrap:(id)messageWrap Contact:(id)contact ChatContact:(id)contact3;
@end
