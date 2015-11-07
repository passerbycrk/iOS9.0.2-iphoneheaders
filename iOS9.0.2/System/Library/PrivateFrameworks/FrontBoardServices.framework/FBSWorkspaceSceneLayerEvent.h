/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSSceneLayer;

@interface FBSWorkspaceSceneLayerEvent : FBSWorkspaceSceneEvent {

	FBSSceneLayer* _layer;
	char _orderOut;

}

@property (nonatomic,retain) FBSSceneLayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (assign,nonatomic) char orderOut;                      //@synthesize orderOut=_orderOut - In the implementation block
-(FBSSceneLayer *)layer;
-(void)dealloc;
-(id)description;
-(void)setLayer:(FBSSceneLayer *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(char)orderOut;
-(void)setOrderOut:(char)arg1 ;
@end
