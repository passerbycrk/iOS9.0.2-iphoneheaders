/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/PageLoadTestRunner.h>

@class NSMutableDictionary, NSString;

@interface PurplePageLoadTestRunner : PageLoadTestRunner {

	NSMutableDictionary* _pptResults;
	char _showLoadTime;
	char _showFirstVisualLayoutTime;
	char _showRenderTime;
	char _showRenderFps;
	NSString* _testName;

}

@property (nonatomic,copy) NSString * testName;                           //@synthesize testName=_testName - In the implementation block
@property (assign,nonatomic) char showLoadTime;                           //@synthesize showLoadTime=_showLoadTime - In the implementation block
@property (assign,nonatomic) char showFirstVisualLayoutTime;              //@synthesize showFirstVisualLayoutTime=_showFirstVisualLayoutTime - In the implementation block
@property (assign,nonatomic) char showRenderTime;                         //@synthesize showRenderTime=_showRenderTime - In the implementation block
@property (assign,nonatomic) char showRenderFps;                          //@synthesize showRenderFps=_showRenderFps - In the implementation block
-(id)initRenderTestWithName:(id)arg1 showRenderTime:(char)arg2 showFPS:(char)arg3 ;
-(void)startingTestRunner;
-(void)finishedTestRunner;
-(void)collectPPTResults;
-(void)pptResultFor:(id)arg1 measure:(id)arg2 value:(double)arg3 units:(id)arg4 ;
-(void)pptResultFor:(id)arg1 measure:(id)arg2 time:(double)arg3 ;
-(char)showLoadTime;
-(void)setShowLoadTime:(char)arg1 ;
-(char)showFirstVisualLayoutTime;
-(void)setShowFirstVisualLayoutTime:(char)arg1 ;
-(char)showRenderTime;
-(void)setShowRenderTime:(char)arg1 ;
-(char)showRenderFps;
-(void)setShowRenderFps:(char)arg1 ;
-(void)setTestName:(NSString *)arg1 ;
-(NSString *)testName;
-(id)initWithTestName:(id)arg1 ;
@end
