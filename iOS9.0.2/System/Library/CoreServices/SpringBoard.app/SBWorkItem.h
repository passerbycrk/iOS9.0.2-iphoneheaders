/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface SBWorkItem : NSObject {

	/*^block*/id _workBlock;
	NSDate* _creationDate;

}

@property (nonatomic,copy,readonly) id work;                              //@synthesize workBlock=_workBlock - In the implementation block
@property (nonatomic,retain,readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
-(id)initWithWork:(/*^block*/id)arg1 ;
-(NSDate *)creationDate;
-(void)dealloc;
-(id)work;
@end

