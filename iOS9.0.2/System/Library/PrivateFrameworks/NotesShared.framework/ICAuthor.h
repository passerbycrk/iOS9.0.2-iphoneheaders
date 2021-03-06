/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, UIImage, NSNumber, ICPerson, ICGroup;

@interface ICAuthor : NSManagedObject

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) UIImage * icon; 
@property (assign,nonatomic) unsigned authorStatus; 
@property (nonatomic,retain) NSNumber * status; 
@property (nonatomic,retain) ICPerson * person; 
@property (nonatomic,retain) ICGroup * group; 
-(NSString *)name;
-(UIImage *)icon;
-(void)setAuthorStatus:(unsigned)arg1 ;
-(unsigned)authorStatus;
@end

