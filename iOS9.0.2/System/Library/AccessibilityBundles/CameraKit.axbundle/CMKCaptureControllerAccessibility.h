/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:29:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/CameraKit.axbundle/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/__CMKCaptureControllerAccessibility_super.h>

@interface CMKCaptureControllerAccessibility : __CMKCaptureControllerAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)cameraControllerVideoCaptureDidStart:(id)arg1 ;
-(void)_setCameraMode:(int)arg1 cameraDevice:(int)arg2 ;
-(void)_sessionStopped:(id)arg1 ;
-(char)capturePhotoUsingHDR:(char)arg1 ;
-(void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2 HDRUsed:(char)arg3 ;
-(void)_sessionStarted:(id)arg1 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
@end
