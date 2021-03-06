/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewElement.h>

@class UIImage, NSString, NSURL, NSAttributedString;

@interface SKUIBadgeViewElement : SKUIViewElement {

	UIImage* _fallbackImage;
	char _hasValidFallbackImage;
	NSString* _resourceName;
	CGSize _size;
	NSString* _text;
	NSURL* _url;

}

@property (nonatomic,readonly) NSAttributedString * attributedString; 
@property (nonatomic,readonly) int badgeType; 
@property (nonatomic,readonly) UIImage * fallbackImage;                            //@synthesize fallbackImage=_fallbackImage - In the implementation block
@property (nonatomic,readonly) NSString * resourceName;                            //@synthesize resourceName=_resourceName - In the implementation block
@property (nonatomic,readonly) CGSize size;                                        //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                        //@synthesize url=_url - In the implementation block
-(int)badgeType;
-(CGSize)size;
-(NSAttributedString *)attributedString;
-(NSURL *)URL;
-(NSString *)resourceName;
-(id)accessibilityText;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(UIImage *)fallbackImage;
@end

