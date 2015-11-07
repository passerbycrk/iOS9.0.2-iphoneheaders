/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDPCSData.h>

@class CKShareID, NSString, NSData;

@interface CKDSharePCSData : CKDPCSData {

	OpaquePCSShareProtectionRef _publicPCS;
	CKShareID* _shareID;
	NSString* _shareEtag;
	int _publicPermission;
	int _myParticipantType;
	int _myParticipantPermission;
	NSString* _publicPCSEtag;
	NSData* _publicPCSData;

}

@property (nonatomic,retain) CKShareID * shareID;                                //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) NSString * shareEtag;                               //@synthesize shareEtag=_shareEtag - In the implementation block
@property (assign,nonatomic) int publicPermission;                               //@synthesize publicPermission=_publicPermission - In the implementation block
@property (assign,nonatomic) int myParticipantType;                              //@synthesize myParticipantType=_myParticipantType - In the implementation block
@property (assign,nonatomic) int myParticipantPermission;                        //@synthesize myParticipantPermission=_myParticipantPermission - In the implementation block
@property (assign,nonatomic) OpaquePCSShareProtectionRef publicPCS; 
@property (nonatomic,copy) NSString * publicPCSEtag;                             //@synthesize publicPCSEtag=_publicPCSEtag - In the implementation block
@property (nonatomic,copy) NSData * publicPCSData;                               //@synthesize publicPCSData=_publicPCSData - In the implementation block
+(char)supportsSecureCoding;
+(id)dataWithShareID:(id)arg1 pcsData:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)CKPropertiesDescription;
-(CKShareID *)shareID;
-(int)publicPermission;
-(void)setMyParticipantPermission:(int)arg1 ;
-(void)setMyParticipantType:(int)arg1 ;
-(void)setPublicPermission:(int)arg1 ;
-(void)setShareEtag:(NSString *)arg1 ;
-(void)setPublicPCSEtag:(NSString *)arg1 ;
-(void)setPublicPCSData:(NSData *)arg1 ;
-(void)setPublicPCS:(OpaquePCSShareProtectionRef)arg1 ;
-(NSString *)shareEtag;
-(void)setShareID:(CKShareID *)arg1 ;
-(NSData *)publicPCSData;
-(OpaquePCSShareProtectionRef)publicPCS;
-(NSString *)publicPCSEtag;
-(char)decryptPCSDataWithManager:(id)arg1 error:(id*)arg2 ;
-(id)initWithShareID:(id)arg1 pcsData:(id)arg2 ;
-(int)myParticipantPermission;
-(int)myParticipantType;
@end
