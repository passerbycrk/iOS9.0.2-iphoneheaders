/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPQuestion.h>

@protocol RAPUserDirectionRequest;
@class NSArray, RAPDirectionsTransitProblemQuestion, RAPCommentQuestion, NSString;

@interface RAPDirectionsWhichOneQuestion : RAPQuestion {

	NSArray* _selectableDirectionsRequests;
	id<RAPUserDirectionRequest> _selectedDirectionsRequest;
	RAPDirectionsTransitProblemQuestion* _transitProblemQuestion;
	RAPCommentQuestion* _commentQuestion;

}

@property (nonatomic,readonly) NSString * localizedSelectDirectionsRequestPrompt; 
@property (nonatomic,readonly) NSArray * selectableDirectionsRequests;                                    //@synthesize selectableDirectionsRequests=_selectableDirectionsRequests - In the implementation block
@property (nonatomic,retain) id<RAPUserDirectionRequest> selectedDirectionsRequest;                       //@synthesize selectedDirectionsRequest=_selectedDirectionsRequest - In the implementation block
@property (nonatomic,readonly) char shouldShowDirectionsRequests; 
@property (nonatomic,readonly) char shouldShowTransitProblemQuestion; 
@property (nonatomic,readonly) RAPDirectionsTransitProblemQuestion * transitProblemQuestion;              //@synthesize transitProblemQuestion=_transitProblemQuestion - In the implementation block
@property (nonatomic,readonly) char shouldShowCommentQuestion; 
@property (nonatomic,readonly) RAPCommentQuestion * commentQuestion;                                      //@synthesize commentQuestion=_commentQuestion - In the implementation block
+(int)mapServiceAction;
+(char)_canDisplayForContext:(id)arg1 ;
+(id)localizedTitle;
-(id)_alternateAuxiliaryControlsRecording;
-(char)shouldShowCommentQuestion;
-(char)_isRecursivelyComplete;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(RAPCommentQuestion *)commentQuestion;
-(char)_getDirectionsMapItemsForStart:(out id*)arg1 end:(out id*)arg2 ;
-(void)setSelectedDirectionsRequest:(id<RAPUserDirectionRequest>)arg1 ;
-(char)shouldShowTransitProblemQuestion;
-(void)_updateCommentQuestionTitleAndPlaceholderText;
-(id<RAPUserDirectionRequest>)selectedDirectionsRequest;
-(RAPDirectionsTransitProblemQuestion *)transitProblemQuestion;
-(NSArray *)selectableDirectionsRequests;
-(NSString *)localizedSelectDirectionsRequestPrompt;
-(char)shouldShowDirectionsRequests;
-(char)isComplete;
-(void)dealloc;
@end
