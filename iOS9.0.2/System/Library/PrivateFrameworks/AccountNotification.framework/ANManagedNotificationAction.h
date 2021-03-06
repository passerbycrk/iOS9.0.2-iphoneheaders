/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, ANManagedAccountNotification;

@interface ANManagedNotificationAction : NSManagedObject

@property (nonatomic,retain) NSString * url; 
@property (nonatomic,retain) id options; 
@property (nonatomic,retain) NSNumber * isInternal; 
@property (nonatomic,retain) ANManagedAccountNotification * notificationToActivate; 
@property (nonatomic,retain) ANManagedAccountNotification * notificationToDismiss; 
@property (nonatomic,retain) ANManagedAccountNotification * notificationToClear; 
-(void)takeValuesFromNotificationAction:(id)arg1 ;
@end

