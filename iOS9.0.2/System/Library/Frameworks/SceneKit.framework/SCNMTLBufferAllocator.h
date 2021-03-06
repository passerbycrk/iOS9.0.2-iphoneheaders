/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTLDevice, OS_dispatch_semaphore;
@class NSMutableArray, SCNFixedSizePage, NSObject;

@interface SCNMTLBufferAllocator : NSObject {

	id<MTLDevice> _device;
	unsigned _bufferSize;
	unsigned _elementSize;
	NSMutableArray* _pages;
	SCNFixedSizePage* _currentAllocatorPage;
	NSObject*<OS_dispatch_semaphore> _allocatorLock;

}

@property (nonatomic,readonly) unsigned bufferSize;               //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,readonly) unsigned elementSize;              //@synthesize elementSize=_elementSize - In the implementation block
-(id)initWithDevice:(id)arg1 fixedSizeElement:(unsigned)arg2 buffersize:(unsigned)arg3 ;
-(id)newSubBuffer;
-(unsigned)elementSize;
-(void)dealloc;
-(unsigned)bufferSize;
@end

