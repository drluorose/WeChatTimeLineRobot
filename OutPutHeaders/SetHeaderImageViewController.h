/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCActionSheetDelegate.h"
#import "WeChat-Structs.h"
#import "MMImagePickerManagerDelegate.h"
#import "MessageObserverDelegate.h"
#import "MMUIViewController.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class MMLoadingView, UILabel, UIView, NSString, MMTableView, CContact, UIButton, MMHeadImageView;
@protocol SetHeaderImageViewDelegate;

@interface SetHeaderImageViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UINavigationControllerDelegate, UIImagePickerControllerDelegate, WCActionSheetDelegate, MMImagePickerManagerDelegate, MessageObserverDelegate> {
	MMTableView* m_tableView;
	MMHeadImageView* m_headView;
	UILabel* m_userNameLabel;
	UILabel* m_nickNameLabel;
	UILabel* m_remarkLabel;
	UILabel* m_dddedLabel;
	UIButton* m_opBtn;
	UIButton* m_RemarkBtn;
	UIButton* m_BlockBtn;
	UILabel* m_BlockLabel;
	UIView* m_headerView;
	UIView* m_footerView;
	CContact* m_contact;
	BOOL m_bInContactsInit;
	BOOL m_bInContactsAfter;
	id<SetHeaderImageViewDelegate> m_delegate;
	unsigned long m_uEventId;
	vector<unsigned long, std::__1::allocator<unsigned long> > m_vecMesssageIdToListen;
	MMLoadingView* m_loadingView;
	unsigned long m_uiUploadHeadEventID;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<SetHeaderImageViewDelegate> m_delegate;
@property(retain, nonatomic) CContact* m_contact;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)onDeleteContact:(id)contact;
-(void)onModifyContact:(id)contact;
-(void)MessageReturn:(unsigned long)aReturn MessageInfo:(id)info Event:(unsigned long)event;
-(void)dealloc;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)modifyContactRemark:(id)remark;
-(void)MMImagePickerManagerDidCancel:(id)mmimagePickerManager;
-(void)MMImagePickerManager:(id)manager didFinishPickingImageWithInfo:(id)info;
-(id)getViewController;
-(void)onIKnowItBtnClick:(id)click;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)onChangeImg:(id)img;
-(void)showChangeImg:(id)img;
-(void)showImagePicker:(int)picker;
-(void)handleImage:(id)image;
-(void)updateHead:(id)head;
-(void)stopLoadingAndShowOK:(id)ok;
-(void)stopLoadingAndShowError:(id)error;
-(void)stopLoading;
-(void)startLoading;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)initView;
-(void)initFooterView;
-(void)initHeaderView;
-(void)initTableView;
-(void)initData;
-(id)init;
-(void)initLoadingView;
-(void)initBlockLabel;
-(void)updateBlockLabel;
-(void)updateBlockBtn;
-(void)updateRemarkBtn;
-(void)initRemarkLabel;
-(void)updateRemarkLabel;
-(void)initUserNameLabel;
-(id)getUserNameCol;
-(void)initNickNameLabel;
-(void)updateNickNameLabel;
-(void)initHeadImage;
-(void)initMessageIdToListen;
-(void)updateHeadImage;
-(id)getSettingHeadImage;
-(void)tryGetContactUsrImg;
@end
