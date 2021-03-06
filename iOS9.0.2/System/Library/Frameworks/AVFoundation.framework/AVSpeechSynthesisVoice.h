/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AVSpeechSynthesisVoice : NSObject <NSSecureCoding>

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) int quality; 
+(id)test_speechVoices;
+(void)test_setSpeechVoices:(id)arg1 ;
+(id)voiceWithIdentifier:(id)arg1 ;
+(id)voiceWithLanguage:(id)arg1 ;
+(id)currentLanguageCode;
+(id)speechVoices;
+(id)voiceWithIdentifier:(id)arg1 ;
+(char)supportsSecureCoding;
+(void)initialize;
+(id)voiceWithLanguage:(id)arg1 ;
+(id)currentLanguageCode;
+(id)speechVoices;
-(id)initWithLanguage:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(int)quality;
-(void)setQuality:(int)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

