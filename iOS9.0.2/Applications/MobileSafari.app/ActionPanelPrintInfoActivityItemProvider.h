/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/ActionPanelPrintRendererActivityItemProvider.h>

@class UIPrintInfo, WBUPrintPageRenderer;

@interface ActionPanelPrintInfoActivityItemProvider : ActionPanelPrintRendererActivityItemProvider {

	UIPrintInfo* _printInfo;
	WBUPrintPageRenderer* _printRenderer;

}
-(id)initWithURL:(id)arg1 pageTitle:(id)arg2 printRenderer:(id)arg3 ;
-(id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 ;
-(id)item;
@end

