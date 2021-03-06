/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHVideoRequestOptions : NSObject {

	char _networkAccessAllowed;
	char _streamingAllowed;
	char _videoComplementAllowed;
	int _version;
	int _deliveryMode;
	/*^block*/id _progressHandler;

}

@property (assign,getter=isNetworkAccessAllowed,nonatomic) char networkAccessAllowed;                  //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,nonatomic) int version;                                                              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) int deliveryMode;                                                         //@synthesize deliveryMode=_deliveryMode - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                         //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,getter=isStreamingAllowed,nonatomic) char streamingAllowed;                          //@synthesize streamingAllowed=_streamingAllowed - In the implementation block
@property (assign,getter=isVideoComplementAllowed,nonatomic) char videoComplementAllowed;              //@synthesize videoComplementAllowed=_videoComplementAllowed - In the implementation block
-(int)deliveryMode;
-(char)isStreamingAllowed;
-(char)isVideoComplementAllowed;
-(void)setDeliveryMode:(int)arg1 ;
-(void)setNetworkAccessAllowed:(char)arg1 ;
-(id)progressHandler;
-(void)setVideoComplementAllowed:(char)arg1 ;
-(char)isNetworkAccessAllowed;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(void)setProgressHandler:(id)arg1 ;
-(void)setStreamingAllowed:(char)arg1 ;
@end

