/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol NCDataSource <NSObject>
@property (nonatomic,readonly) NSString * dataSourceIdentifier; 
@property (nonatomic,readonly) NSString * parentDataSourceIdentifier; 
@required
-(NSString *)parentDataSourceIdentifier;
-(NSString *)dataSourceIdentifier;

@end
