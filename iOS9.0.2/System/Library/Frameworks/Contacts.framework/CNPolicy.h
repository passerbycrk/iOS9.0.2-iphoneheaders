/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CNPolicy : NSObject

@property (getter=isReadonly,nonatomic,readonly) char readonly; 
-(unsigned)_cnui_maximumNumberOfValuesForProperty:(id)arg1 ;
-(char)isReadonly;
-(unsigned)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2 ;
-(char)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id*)arg4 ;
-(char)shouldRemoveContact:(id)arg1 ;
-(id)unsupportedAttributesForLableledContactProperty:(id)arg1 ;
-(char)isContactPropertySupported:(id)arg1 ;
-(char)_validateLabeledValueArrayLabels:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id*)arg3 ;
-(char)_validateLabeledValueArrayAttributeSupport:(id)arg1 forContactProperty:(id)arg2 replacementValue:(id*)arg3 ;
-(id)_replacementLabeledValue:(id)arg1 omittingKeys:(id)arg2 ;
-(id)supportedLabelsForContactProperty:(id)arg1 ;
-(unsigned)maximumCountOfValuesForContactProperty:(id)arg1 ;
-(char)shouldAddContact:(id)arg1 ;
@end

