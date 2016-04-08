/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "PBMessageObserverDelegate.h"

@class MMUILabel, MMTimer, UIButton, NSString, UIImageView;
@protocol ExtraDeviceLoginViewControllerDelegate;

@interface ExtraDeviceLoginViewController : MMUIViewController <PBMessageObserverDelegate> {
	BOOL _isFromScan;
	BOOL _isFromReScanBtn;
	id<ExtraDeviceLoginViewControllerDelegate> _delegate;
	UIImageView* _deviceImgView;
	MMUILabel* _tipsLabel;
	UIButton* _confirmBtn;
	UIButton* _cancelBtn;
	NSString* _tipsContent;
	unsigned _iconType;
	NSString* _confirmBtnTitle;
	NSString* _cancelBtnTitle;
	unsigned _sessionListLimit;
	unsigned _confirmTimeout;
	NSString* _warningTips;
	int _respType;
	NSString* _loginUrl;
	MMTimer* _timer;
	long _startTime;
	NSString* _titleStr;
	NSString* _loggedInDeviceTips;
}
@property(retain, nonatomic) NSString* loggedInDeviceTips;
@property(retain, nonatomic) NSString* titleStr;
@property(assign, nonatomic) BOOL isFromReScanBtn;
@property(assign, nonatomic) long startTime;
@property(retain, nonatomic) MMTimer* timer;
@property(assign, nonatomic) BOOL isFromScan;
@property(retain, nonatomic) NSString* loginUrl;
@property(assign, nonatomic) int respType;
@property(retain, nonatomic) NSString* warningTips;
@property(assign, nonatomic) unsigned confirmTimeout;
@property(assign, nonatomic) unsigned sessionListLimit;
@property(retain, nonatomic) NSString* cancelBtnTitle;
@property(retain, nonatomic) NSString* confirmBtnTitle;
@property(assign, nonatomic) unsigned iconType;
@property(retain, nonatomic) NSString* tipsContent;
@property(retain, nonatomic) UIButton* cancelBtn;
@property(retain, nonatomic) UIButton* confirmBtn;
@property(retain, nonatomic) MMUILabel* tipsLabel;
@property(retain, nonatomic) UIImageView* deviceImgView;
@property(assign, nonatomic) id<ExtraDeviceLoginViewControllerDelegate> delegate;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)onGetLoginCancelResponse:(id)response eventID:(unsigned long)anId;
-(void)onGetLoginConfirmRespnse:(id)respnse eventID:(unsigned long)anId;
-(void)sendLoginCancelRequest;
-(void)sendLoginConfirmRequest;
-(void)onConfirmTimeout;
-(void)onTimerCheck;
-(void)onCancelBtnPress:(id)press;
-(void)onConfirmBtnPress:(id)press;
-(void)updateUIWhenSomethingWrong;
-(id)getConfirmBtnTitle;
-(id)getTipsContent;
-(BOOL)isPairLogin;
-(id)getDeviceImg;
-(void)dismissMySelf;
-(void)onLeftBarButtonPress:(id)press;
-(BOOL)isConfirmGetRequestError;
-(void)setupView;
-(void)startLoadingBlocked;
-(BOOL)useTransparentNavibar;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)dealloc;
-(id)initWithTipsContent:(id)tipsContent andIconType:(unsigned)type andConfirmBtnTitle:(id)title andCancelBtnTitle:(id)title4 andSessionListLimit:(unsigned)limit andConfirmTimeout:(unsigned)timeout andRespType:(int)type7 andLoginUrl:(id)url andIsFromScan:(BOOL)scan titleStr:(id)str loggedInDeviceTips:(id)deviceTips warningTips:(id)tips;
@end
