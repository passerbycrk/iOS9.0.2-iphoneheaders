/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock;

@interface MRShaderManager : NSObject {

	NSMutableDictionary* mGLShadersPerContext;
	NSMutableDictionary* mShadersPerContext;
	NSMutableDictionary* mShaderDescriptions;
	NSLock* mGLShadersPerContextLock;
	NSLock* mShadersPerContextLock;

}
+(id)shaderKeyForShaderID:(id)arg1 andArguments:(id)arg2 ;
+(id)sharedManager;
+(void)initialize;
-(void)forgetContext:(id)arg1 ;
-(void)registerVertexShaderWithVertexShaderSource:(id)arg1 forShaderID:(id)arg2 ;
-(void)registerShaderWithFragmentShaderSource:(id)arg1 andVertexShaderName:(id)arg2 forShaderID:(id)arg3 ;
-(void)releaseResources;
-(unsigned)_glShaderForID:(id)arg1 inBaseContext:(id)arg2 isFragmentShader:(char)arg3 withArguments:(id)arg4 ;
-(id)shaderForShaderID:(id)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)cleanup;
@end

