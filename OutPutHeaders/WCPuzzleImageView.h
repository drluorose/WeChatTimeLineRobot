/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCFacadeExt.h"
#import "MMUIView.h"

@class UIImageView, WCDataItem, UILabel, NSMutableArray, NSArray, NSString;
@protocol WCPuzzleImageViewDelegate;

@interface WCPuzzleImageView : MMUIView <WCFacadeExt> {
	WCDataItem* m_dataItem;
	NSArray* m_arrMediaData;
	NSMutableArray* m_arrView;
	int m_visableCount;
	vector<bool, std::__1::allocator<bool> > m_imageReady;
	UIImageView* m_lockStausView;
	UIImageView* m_sharedStausView;
	UILabel* m_nickLabel;
	id<WCPuzzleImageViewDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) WCDataItem* m_dataItem;
@property(assign, nonatomic) __weak id<WCPuzzleImageViewDelegate> m_delegate;
@property(readonly, assign, nonatomic) NSArray* m_arrMediaData;
+(id)getImageForMedia:(id)media;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)showOwnerNickname:(BOOL)nickname username:(id)username;
-(void)showSharedStatus:(BOOL)status;
-(void)showLockStatus:(BOOL)status;
-(void)onDownloadFinish:(id)finish downloadType:(int)type;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)setFrame:(CGRect)frame;
-(void)resetImages;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithMediaData:(id)mediaData;
@end

