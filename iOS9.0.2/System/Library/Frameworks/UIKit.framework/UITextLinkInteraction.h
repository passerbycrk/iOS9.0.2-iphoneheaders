/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UITextLinkInteraction
@required
-(void)cancelInteractionWithLink;
-(char)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1;
-(char)isInteractingWithLink;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1;
-(char)willInteractWithLinkAtPoint:(CGPoint)arg1;

@end
