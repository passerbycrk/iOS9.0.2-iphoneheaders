/*
* This header is generated by classdump-dyld 0.7
* on Sunday, October 25, 2015 at 6:40:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIImage, NSString;


@protocol SearchUILabeledImage <NSObject>
@property (nonatomic,readonly) UIImage * imageItem; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,copy,readonly) NSString * align; 
@required
-(NSString *)label;
-(NSString *)align;
-(UIImage *)imageItem;

@end

