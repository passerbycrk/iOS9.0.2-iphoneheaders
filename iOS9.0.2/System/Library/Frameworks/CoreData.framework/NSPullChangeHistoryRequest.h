/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSArray;

@interface NSPullChangeHistoryRequest : NSPersistentStoreRequest {

	NSArray* _generationTokens;

}
-(id)initWithGenerationTokens:(id)arg1 ;
-(id)generationTokens;
-(void)setGenerationTokens:(id)arg1 ;
-(unsigned)requestType;
-(void)dealloc;
-(id)description;
@end

