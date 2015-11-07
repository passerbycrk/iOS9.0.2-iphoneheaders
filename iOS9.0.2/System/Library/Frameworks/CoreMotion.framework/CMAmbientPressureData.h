/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMAmbientPressureData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM10 ambientPressure; 
+(char)supportsSecureCoding;
-(id)initWithPressure:(SCD_Struct_CM9)arg1 andTimestamp:(double)arg2 ;
-(SCD_Struct_CM10)ambientPressure;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
