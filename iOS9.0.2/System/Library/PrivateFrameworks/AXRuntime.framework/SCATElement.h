/*
* This header is generated by classdump-dyld 0.7
* on Sunday, October 25, 2015 at 9:09:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray, NSNumber;


@protocol SCATElement <AXGroupable>
@property (nonatomic,readonly) CGRect scatFrame; 
@property (nonatomic,readonly) CGPoint scatCenterPoint; 
@property (nonatomic,readonly) CGPathRef scatPath; 
@property (nonatomic,readonly) char scatPathIsInSceneReferenceSpace; 
@property (nonatomic,readonly) unsigned long long scatTraits; 
@property (nonatomic,readonly) char scatIsValid; 
@property (nonatomic,readonly) char scatIsAXElement; 
@property (nonatomic,readonly) char scatIndicatesOwnFocus; 
@property (nonatomic,readonly) char scatShouldActivateDirectly; 
@property (nonatomic,readonly) int scatActivateBehavior; 
@property (nonatomic,readonly) NSString * scatSpeakableDescription; 
@property (nonatomic,readonly) char scatIsKeyboardKey; 
@property (nonatomic,readonly) char scatCanShowAlternateKeys; 
@property (nonatomic,readonly) NSArray * scatAlternateKeys; 
@property (nonatomic,readonly) CGRect scatTextCursorFrame; 
@property (nonatomic,readonly) NSNumber * scatOverrideCursorTheme; 
@property (assign,nonatomic) char scatAssistiveTechFocused; 
@property (nonatomic,readonly) NSArray * scatCustomActions; 
@optional
-(void)scatDidBecomeFocused:(char)arg1;
-(id)scatSpeakableDescription:(char)arg1;

@required
-(char)scatIndicatesOwnFocus;
-(char)scatSupportsAction:(int)arg1;
-(NSString *)scatSpeakableDescription;
-(CGPathRef)scatPath;
-(char)scatPerformAction:(int)arg1;
-(NSNumber *)scatOverrideCursorTheme;
-(char)scatIsAXElement;
-(CGRect)scatFrame;
-(char)scatIsKeyboardKey;
-(NSArray *)scatAlternateKeys;
-(void)setScatAssistiveTechFocused:(char)arg1;
-(unsigned long long)scatTraits;
-(int)scatActivateBehavior;
-(id)scrollableElement;
-(NSArray *)scatCustomActions;
-(char)scatCanShowAlternateKeys;
-(id)scatSupportedGestures;
-(char)scatPerformAction:(int)arg1 withValue:(id)arg2;
-(char)scatCanScrollInAtLeastOneDirection;
-(char)scatShouldActivateDirectly;
-(char)scatIsValid;
-(CGPoint)scatCenterPoint;
-(char)scatPathIsInSceneReferenceSpace;
-(CGRect)scatTextCursorFrame;
-(char)scatAssistiveTechFocused;
-(void)scatScrollToVisible;

@end

