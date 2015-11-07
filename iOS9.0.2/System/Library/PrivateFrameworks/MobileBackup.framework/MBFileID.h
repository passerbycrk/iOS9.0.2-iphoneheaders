/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <backupd/MBCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface MBFileID : NSObject <MBCoding, NSCopying> {

	unsigned char _bytes[20];

}

@property (nonatomic,readonly) const void* bytes; 
@property (nonatomic,readonly) unsigned length; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * string; 
+(id)fileIDWithData:(id)arg1 ;
+(id)fileIDWithDomain:(id)arg1 relativePath:(id)arg2 ;
+(id)fileIDWithDomainName:(id)arg1 relativePath:(id)arg2 ;
+(id)fileIDWithString:(id)arg1 ;
-(char)isEqualToFileID:(id)arg1 ;
-(id)initWithDomain:(id)arg1 relativePath:(id)arg2 ;
-(id)initWithDecoder:(id)arg1 ;
-(void)encode:(id)arg1 ;
-(id)initWithDomainName:(id)arg1 relativePath:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)filename;
-(id)initWithBytes:(const void*)arg1 ;
@end
