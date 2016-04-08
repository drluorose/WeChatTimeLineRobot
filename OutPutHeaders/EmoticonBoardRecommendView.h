/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "EmoticonStoreDownloadViewDelegate.h"

@class EmoticonStoreDownloadView, EmoticonTabRecommendItem, UILabel, UIView, NSString, MMWebImageView, UIButton;
@protocol EmoticonBoardRecommendViewDelegate;

@interface EmoticonBoardRecommendView : XXUnknownSuperclass <EmoticonStoreDownloadViewDelegate> {
	UIView* m_contentView;
	MMWebImageView* m_imageView;
	UILabel* m_titleLabel;
	UILabel* m_recWordLabel;
	EmoticonStoreDownloadView* m_downloadView;
	UIButton* m_showDetailButton;
	EmoticonTabRecommendItem* m_item;
	UIButton* m_closeButton;
	id<EmoticonBoardRecommendViewDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<EmoticonBoardRecommendViewDelegate> delegate;
-(void).cxx_destruct;
-(void)onDownloadBegin;
-(void)onViewTap;
-(void)updateItem:(id)item;
-(void)onClickCloseButton;
-(void)updateCloseButton;
-(void)updateShowDetailButton;
-(void)updateDownloadView;
-(void)updateRecWordLabel;
-(void)updateTitleLabel;
-(void)updateImageView;
-(void)updateContentView;
-(id)initWithFrame:(CGRect)frame;
@end
