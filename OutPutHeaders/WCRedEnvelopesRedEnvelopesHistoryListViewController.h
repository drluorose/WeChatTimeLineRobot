/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCActionSheetDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "WCRedEnvelopesBaseViewController.h"
#import "WCPayPickerViewDelegate.h"

@class NSString, MMTableView, WCPayPickerView;
@protocol WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate;

@interface WCRedEnvelopesRedEnvelopesHistoryListViewController : WCRedEnvelopesBaseViewController <UITableViewDelegate, UITableViewDataSource, WCPayPickerViewDelegate, WCActionSheetDelegate> {
	id<WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate> m_delegate;
	BOOL m_loadingMoreOrderList;
	MMTableView* m_tableView;
	int m_enWCRedEnvelopesRedEnvelopesHistoryListViewControllerScene;
	BOOL m_bDidBack;
	WCPayPickerView* m_pickerView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnClickedHeaderImageView;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)WCPayPickerViewDidChooseRow:(int)wcpayPickerView atSession:(int)session;
-(void)OnSelectYears;
-(void)scrollViewDidScroll:(id)scrollView;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)makeCell:(id)cell cell:(id)cell2 row:(unsigned)row;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
-(void)setScene:(int)scene;
-(void)setDelegate:(id)delegate;
-(void)commentRedEnvelopes;
-(void)refreshViewWithData:(id)data;
-(id)GetHeaderView:(id)view;
-(void)initTableView;
-(id)getBottomView;
-(void)viewDidLoad;
-(void)loadMoreOrderList;
-(void)viewDidBePoped:(BOOL)view;
-(void)OnLeftBarButtonDone;
-(void)initNavigationBar;
-(BOOL)useTransparentNavibar;
-(void)dealloc;
-(id)initWithScene:(int)scene;
-(id)init;
@end
