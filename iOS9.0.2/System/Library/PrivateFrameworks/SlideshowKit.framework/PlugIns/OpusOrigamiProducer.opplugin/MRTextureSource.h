/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRTexture, MRImageManager;

@interface MRTextureSource : NSObject {

	MRTexture* _texture;
	SCD_Struct_MR15 _textureOptions;
	unsigned long _pixelFormat;
	float _color[4];
	CVBufferRef _cvPixelBuffer;
	CGContextRef _cgContext;
	CGColorSpaceRef _colorspace;
	CGImageRef _cgImage;
	void** _datas[3];
	unsigned _dataSize;
	unsigned long _dataRowBytes;
	unsigned long _dataWidth;
	unsigned long _dataHeight;
	char _ownsData;
	unsigned char _orientation;
	CVBufferRef _cvTexture;
	char _isPremultiplied;
	char _isOpaque;
	char _wantsSharedTexture;
	MRImageManager* _imageManager;
	NSRange _size;

}

@property (readonly) MRImageManager * imageManager;                //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,readonly) NSRange size;                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) char wantsSharedTexture;              //@synthesize wantsSharedTexture=_wantsSharedTexture - In the implementation block
@property (readonly) SCD_Struct_MR15* textureOptions; 
@property (readonly) MRTexture * texture; 
-(void)generateMipmap;
-(SCD_Struct_MR15*)textureOptions;
-(id)initWithCGContext:(CGContextRef)arg1 imageManager:(id)arg2 ;
-(id)initWithSize:(NSRange)arg1 andColor:(const float*)arg2 imageManager:(id)arg3 ;
-(id)initWithCGContext:(CGContextRef)arg1 size:(NSRange)arg2 imageManager:(id)arg3 ;
-(id)initWithCGImage:(CGImageRef)arg1 textureSize:(NSRange)arg2 orientation:(int)arg3 imageManager:(id)arg4 monochromatic:(char)arg5 ;
-(void)setWantsSharedTexture:(char)arg1 ;
-(id)initWithCVTexture:(CVBufferRef)arg1 size:(NSRange)arg2 orientation:(int)arg3 imageManager:(id)arg4 monochromatic:(char)arg5 ;
-(char)wantsSharedTexture;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 size:(NSRange)arg2 orientation:(int)arg3 imageManager:(id)arg4 monochromatic:(char)arg5 ;
-(void)addOverlayForROI:(id)arg1 ;
-(NSRange)size;
-(void)dealloc;
-(void)cleanup;
-(MRImageManager *)imageManager;
-(MRTexture *)texture;
@end

