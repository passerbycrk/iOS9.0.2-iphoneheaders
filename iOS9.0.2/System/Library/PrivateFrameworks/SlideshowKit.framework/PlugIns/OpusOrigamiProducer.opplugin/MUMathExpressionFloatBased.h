/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MUMathExpressionBase.h>

@interface MUMathExpressionFloatBased : MUMathExpressionBase {

	FunctionInterpreter<float>* mInterpreter;

}
+(float)evaluateString:(id)arg1 error:(id*)arg2 ;
+(float)invalidResult;
-(void)replaceVariable:(id)arg1 withValue:(float)arg2 ;
-(char)isValueIllegal:(float)arg1 ;
-(id)initWithString:(id)arg1 error:(id*)arg2 ;
-(void)resetAllVariables;
-(void)setVariableValues:(id)arg1 ;
-(void)_resetVariableIndicies;
-(void)setValue:(float)arg1 forVariable:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(float)valueForVariable:(id)arg1 ;
-(id)stringValue;
-(void)cleanup;
-(char)isConstant;
-(float)evaluate;
@end

