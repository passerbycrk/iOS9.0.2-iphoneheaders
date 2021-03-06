/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAManagedFeedbackObject.h>
#import <Feedback Assistant iOS/FBAProjectEntity.h>

@class NSString, NSSet, NSURL, NSArray;

@interface FBAProject : FBAManagedFeedbackObject <FBAProjectEntity>

@property (retain) NSString * name; 
@property (retain) NSString * status; 
@property (assign) char is_public; 
@property (retain) NSString * buildPrefix; 
@property (retain) NSSet * bugForms; 
@property (retain) NSURL * thumbnailURL; 
@property (retain) NSSet * formResponses; 
@property (retain) NSSet * formResponsesRequiringAction; 
@property (retain) NSSet * announcements; 
@property (retain) NSArray * surveys; 
@property (retain) NSArray * activeBugForms; 
@property (retain) NSSet * issueDefinitions; 
@property (retain) NSSet * issueTypes; 
@property (retain) NSSet * issueAreas; 
@property (retain) NSSet * filePredicates; 
@property (retain) NSSet * builds; 
@property (readonly) NSSet * managedObjectIDs; 
@property (retain) NSString * primitiveThumbnailURL; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg1 ;
-(id)activeBugFormWithType:(int)arg1 ;
-(id)issueAreaWithKeywordString:(id)arg1 ;
-(char)canStartBugForms;
-(NSSet *)managedObjectIDs;
-(id)buildForName:(id)arg1 ;
-(char)usesBuildPrefix;
-(char)canStartBugFormWithType:(int)arg1 ;
-(id)issueTypeWithDisplayName:(id)arg1 ;
-(id)bugFormWithType:(int)arg1 ;
-(id)activeBugFormWithType:(int)arg1 formID:(id)arg2 ;
-(id)maxBuild;
-(id)fileRequirementsForIssueType:(id)arg1 ;
-(id)fileRequirementsForIssueArea:(id)arg1 ;
-(NSString *)description;
-(char)isActive;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailURL;
@end

