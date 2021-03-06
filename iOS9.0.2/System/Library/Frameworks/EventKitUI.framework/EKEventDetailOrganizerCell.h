/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class NSString, UILabel;

@interface EKEventDetailOrganizerCell : EKEventDetailCell {

	NSString* _organizerName;
	UILabel* _organizerView;
	UILabel* _titleView;

}
-(void)layoutForWidth:(float)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(char)arg2 ;
-(char)shouldDisplayForEvent;
-(char)hasCustomLayout;
-(id)_organizerView;
-(id)_titleView;
-(char)update;
@end

