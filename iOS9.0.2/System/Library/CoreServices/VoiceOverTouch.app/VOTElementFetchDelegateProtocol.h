/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VOTElementFetchDelegateProtocol
@required
-(void)elementFetchFoundElement:(id)arg1 needsForceCacheUpdate:(char)arg2;
-(void)elementsRetrieved:(id)arg1 finished:(char)arg2;
-(void)elementsCounted:(int)arg1;
-(void)elementFetchFoundDirectTouchElements:(id)arg1;
-(void)didSearchForOpaqueElement;

@end

