/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface GKOOBMessage : NSObject {

	unsigned short _type;

}

@property (readonly) unsigned short type;              //@synthesize type=_type - In the implementation block
-(unsigned short)type;
-(id)data;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long)arg2 ;
-(char)_checkType:(unsigned short)arg1 ;
-(char)_checkSize:(unsigned long)arg1 ;
-(id)initWithMessageType:(unsigned short)arg1 ;
@end

