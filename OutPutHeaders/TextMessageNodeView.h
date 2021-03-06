/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RichTextLayoutDelegate.h"
#import "UIAlertViewDelegate.h"
#import "ILinkEventExt.h"
#import "WCActionSheetDelegate.h"
#import "WeChat-Structs.h"
#import "BaseMessageNodeView.h"
#import "IMsgRevokeExt.h"
#import "TextFloatPreviewDelegate.h"
#import "MMTipsViewControllerDelegate.h"
#import "ITranslateMsgMgrExt.h"

@class UIImageView, InteractionLabel, MMTipsViewController, UIButton, RichTextView, NSString, TextFloatPreview, WCUIActionSheet, MMUILabel, UIView;

@interface TextMessageNodeView : BaseMessageNodeView <WCActionSheetDelegate, RichTextLayoutDelegate, ILinkEventExt, IMsgRevokeExt, TextFloatPreviewDelegate, UIAlertViewDelegate, ITranslateMsgMgrExt, MMTipsViewControllerDelegate> {
	RichTextView* m_oRichTextView;
	TextFloatPreview* m_floatPreview;
	UIView* m_oContainerTextView;
	UIImageView* m_oTranslateLineView;
	UIButton* m_oTranslateStatusButton;
	BOOL m_bTranslateAnimation;
	MMTipsViewController* m_oTranslateIntroView;
	WCUIActionSheet* _uiActionSheet;
	MMUILabel* _labelTitle;
	UIView* _labelTitleLine;
	BOOL _bShowFullText;
	float _fulltextHeight;
	float _limitHeight;
	InteractionLabel* _fullTextLabel;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)messageWrap;
-(void).cxx_destruct;
-(CGRect)previewingSourceRectForLocation:(CGPoint)location inCoordinateView:(id)coordinateView;
-(id)viewControllerToPreviewWithFromController:(id)controller forLocation:(CGPoint)location inCoordinateView:(id)coordinateView;
-(BOOL)canPeek;
-(void)onPhoneClicked:(id)clicked withRect:(CGRect)rect;
-(id)getMoreMainInfomationAccessibilityDescription;
-(void)triggerLongPressFor3DTouchAtLocation:(CGPoint)location inCoordinateView:(id)coordinateView;
-(BOOL)shouldOpenNewLineAtY:(float)y withLineHeight:(float)lineHeight richTextView:(id)view;
-(void)onLinkClicked:(id)clicked withRect:(CGRect)rect;
-(void)onTranslateMessageFailed:(id)failed errTip:(id)tip;
-(void)handleChangeForTranslateMsg;
-(void)resizeFrameForTranslate;
-(void)onTranslateMessageChanged:(id)changed;
-(void)onClickTipsBtn:(unsigned)btn;
-(id)patternText;
-(id)titleText;
-(id)bigTitleText;
-(id)getContactDisplayName:(id)name;
-(void)dealloc;
-(void)onMenuItemWillHide;
-(void)onTouchCancel;
-(void)onLongTouch;
-(void)onTouchUpInside;
-(void)onHide;
-(void)onWindowHide;
-(void)onTouchDownRepeat;
-(void)onTouchDown;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)OnMsgRevoked:(id)revoked n64MsgId:(long long)anId SysMsg:(id)msg;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)onMoreOperate:(id)operate;
-(void)addFavorite;
-(void)onFavoriteAdd:(id)add;
-(void)onCopy:(id)copy;
-(void)onForward:(id)forward;
-(void)onTranslateMsg:(id)msg;
-(void)translateMsg;
-(BOOL)isSupportingTranslation;
-(void)updateSubviewsForTranslate;
-(void)onStopTranslateAnimation;
-(void)initTranslateStatusButton;
-(void)reLayoutSubviews;
-(BOOL)canShowTranslateBottomView;
-(void)showOpearation;
-(void)onOrientationChanged;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)onLinkLongPressed:(id)pressed withRect:(CGRect)rect;
-(void)onCopyLinkText:(id)text;
-(BOOL)onlyContainsLink;
-(CGRect)getPreviewLinkFrameForLocation:(CGPoint)location inView:(id)view;
-(id)getPreviewLinkForLocation:(CGPoint)location inView:(id)view;
-(void)layoutSubviewsInternal;
-(float)calculateTranslatedRichTextWidth;
-(float)calculateOriginRichTextHeight;
-(BOOL)shouldShowTranslatedText;
-(void)setRichtextViewContent;
-(void)updateSubviews;
-(void)updateBkgImage:(BOOL)image;
-(void)updateFrameForShowFullText;
-(void)showFullText;
-(CGSize)sizeForFullTextLabel;
-(CGSize)sizeForFrame:(CGRect)frame;
-(void)initLabelTitle;
-(float)labelWidth;
-(void)updateStatus:(id)status;
-(id)getSystemFont;
-(id)initWithMessageWrap:(id)messageWrap Contact:(id)contact ChatContact:(id)contact3;
@end

