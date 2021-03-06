/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface TCPBufferPool : NSObject {

	int poolSize;
	tagBufferNode* head;
	tagBufferNode* tail;
	tagBufferNode* avail;
	int poolLock;

}
-(void)dealloc;
-(id)init;
-(void)monitorBufferPool;
-(char*)getBufferFromPool:(int)arg1 ;
-(void)returnBufferToPool:(char*)arg1 ;
-(void)finalize;
@end

