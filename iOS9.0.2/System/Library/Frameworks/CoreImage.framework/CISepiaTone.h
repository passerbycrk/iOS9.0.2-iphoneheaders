/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISepiaTone : CIFilter {

	CIImage* inputImage;
	NSNumber* inputIntensity;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputIntensity; 
+(id)customAttributes;
-(char)_isIdentity;
-(id)_kernel;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(NSNumber *)inputIntensity;
-(void)setInputImage:(CIImage *)arg1 ;
@end
