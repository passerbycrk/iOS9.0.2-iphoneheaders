/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.vimeo.xpc/com.apple.vimeo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VimeoPostDelegate <NSObject>
@optional
-(void)vimeoPost:(id)arg1 uploadProgressDidChange:(float)arg2;

@required
-(void)vimeoPostUploadSucceeded:(id)arg1;
-(void)vimeoPost:(id)arg1 warningDuringUpload:(int)arg2;
-(void)vimeoPost:(id)arg1 uploadFailedWithError:(id)arg2;

@end

