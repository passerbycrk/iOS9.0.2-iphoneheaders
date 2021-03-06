/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TransferMailboxPickerDelegate <NSObject>
@optional
-(void)transferMailboxPickerController:(id)arg1 animateMessageToPoint:(CGPoint)arg2 inView:(id)arg3 didFinishDelegate:(id)arg4 selector:(SEL)arg5 context:(id)arg6;
-(void)transferMailboxPickerController:(id)arg1 animateMessageToThumbnailFrame:(CGRect)arg2 inView:(id)arg3 completion:(/*^block*/id)arg4;
-(id)transferMailboxPickerController:(id)arg1 viewForMessage:(id)arg2;

@required
-(void)transferMailboxPickerController:(id)arg1 didSelectMailbox:(id)arg2 withMessages:(id)arg3;
-(void)transferMailboxPickerControllerDidFinish:(id)arg1 animated:(char)arg2;

@end

