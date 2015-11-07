/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AirPortAssistant/AirPortAssistant-Structs.h>
@class CALayer, NSMutableArray, NSArray;

@interface NetTopoMiniStaticLayout : NSObject {

	id _owningView;
	int _layoutOptions;
	CALayer* _containerLayer;
	NSMutableArray* _topoDeviceLayers;
	NSMutableArray* _connectionLayers;
	NSArray* _topoDevicesDescriptor;

}

@property (nonatomic,retain) CALayer * containerLayer;                     //@synthesize containerLayer=_containerLayer - In the implementation block
@property (nonatomic,retain) NSArray * topoDevicesDescriptor;              //@synthesize topoDevicesDescriptor=_topoDevicesDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * topoDeviceLayers;                 //@synthesize topoDeviceLayers=_topoDeviceLayers - In the implementation block
@property (assign,nonatomic) int layoutOptions;                            //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,retain) id owningView; 
-(void)dealloc;
-(id)owningView;
-(void)setOwningView:(id)arg1 ;
-(NSArray *)topoDevicesDescriptor;
-(id)initWithContainerLayer:(id)arg1 andOptions:(int)arg2 ;
-(void)setContainerLayer:(CALayer *)arg1 ;
-(void)setLayoutOptions:(int)arg1 ;
-(void)createLayoutForDevices:(id)arg1 ;
-(void)destroyDeviceLayers;
-(CALayer *)containerLayer;
-(void)setTopoDevicesDescriptor:(NSArray *)arg1 ;
-(CGImageRef)imageForDeviceSpec:(id)arg1 wantSmall:(char)arg2 forContentsScale:(float)arg3 ;
-(NSArray *)topoDeviceLayers;
-(void)performLayout;
-(int)layoutOptions;
@end
