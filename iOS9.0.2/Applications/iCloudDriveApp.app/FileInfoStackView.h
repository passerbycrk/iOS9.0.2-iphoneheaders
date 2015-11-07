/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iCloudDriveApp.app/iCloudDriveApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCloudDriveApp/iCloudDriveApp-Structs.h>
#import <UIKit/UIStackView.h>

@class DRItem, FileInfoCell;

@interface FileInfoStackView : UIStackView {

	DRItem* _item;
	FileInfoCell* _modifiedDateCell;
	FileInfoCell* _creationDateCell;

}

@property (nonatomic,retain) DRItem * item;                                //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) FileInfoCell * modifiedDateCell;              //@synthesize modifiedDateCell=_modifiedDateCell - In the implementation block
@property (nonatomic,retain) FileInfoCell * creationDateCell;              //@synthesize creationDateCell=_creationDateCell - In the implementation block
-(id)addCell:(id)arg1 value:(id)arg2 maxLines:(int)arg3 ;
-(void)setCreationDateCell:(FileInfoCell *)arg1 ;
-(void)setModifiedDateCell:(FileInfoCell *)arg1 ;
-(id)buildTagsWithImagesString:(id)arg1 font:(id)arg2 ;
-(FileInfoCell *)creationDateCell;
-(FileInfoCell *)modifiedDateCell;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(DRItem *)item;
-(void)setItem:(DRItem *)arg1 ;
@end
