/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSConcreteValue : NSValue {

	unsigned _specialFlags;
	void* typeInfo;

}
+(char)supportsSecureCoding;
+(void)initialize;
-(const void*)_value;
-(char)_matchType:(const char*)arg1 size:(unsigned)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getValue:(void*)arg1 ;
-(const char*)objCType;
-(char)isEqualToValue:(id)arg1 ;
@end
