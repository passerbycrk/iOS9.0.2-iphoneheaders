/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {

	NSDictionary* _dictionary;

}
-(id)initWithType:(id)arg1 selector:(id)arg2 tag:(id)arg3 value:(id)arg4 ;
-(id)initWithNormalizedDictionary:(id)arg1 ;
-(char)isEqualToFeatureSetting:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)type;
-(id)value;
-(id)selector;
-(id)tag;
-(char)isEqualToDictionary:(id)arg1 ;
-(id)keyEnumerator;
@end

