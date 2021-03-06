/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MFDeviceDriver;
@class NSObject, MFFont, OITSUColor, MFTransform, MFPen, MFBrush, MFPalette, NSMutableArray, MFPath;

@interface MFDeviceContext : NSObject <NSCopying> {

	NSObject*<MFDeviceDriver> m_driver;
	BOOL m_textUpdateCP;
	double m_miterLimit;
	int m_textHorizontalAlign;
	int m_textVerticalAlign;
	int m_textDirection;
	MFFont* m_font;
	OITSUColor* m_textColour;
	int m_textBreakExtra;
	int m_textBreakCount;
	int m_textCharExtra;
	OITSUColor* m_bkColour;
	int m_bkMode;
	CGPoint m_brushOrg;
	CGPoint m_penPos;
	int m_arcDirection;
	int m_polyFillMode;
	MFTransform* m_transform;
	MFPen* m_pen;
	MFBrush* m_brush;
	MFPalette* m_selectedPalette;
	int m_rop2;
	int m_stretchMode;
	NSMutableArray* m_clippingPaths;
	char m_clippingIsRestarted;
	MFPath* m_path;

}

@property (nonatomic,readonly) NSMutableArray * clippingPaths; 
@property (assign,nonatomic) char clippingIsRestarted; 
+(id)deviceContextWithDriver:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setPath:(id)arg1 ;
-(void)setBrush:(id)arg1 ;
-(CGPoint)getPenPosition;
-(double)getMiterLimit;
-(int)getTextHorizontalAlign;
-(int)getTextVerticalAlign;
-(int)getTextDirection;
-(id)getTextColour;
-(int)getTextBreakExtra;
-(int)getTextBreakCount;
-(int)getTextCharExtra;
-(id)getBkColour;
-(int)getBkMode;
-(CGPoint)getBrushOrg;
-(int)getArcDirection;
-(int)getPolyFillMode;
-(int)getStretchBltMode;
-(void)setCurrentTransform:(id)arg1 ;
-(void)setSelectedPalette:(id)arg1 ;
-(id)getPen;
-(void)setPen:(id)arg1 ;
-(int)getRop2;
-(id)initWithDriver:(id)arg1 ;
-(id)getFont;
-(void)setBkColour:(id)arg1 ;
-(void)setBkMode:(int)arg1 ;
-(void)setBrushOrg:(CGPoint)arg1 ;
-(void)setTextColour:(id)arg1 ;
-(void)setTextCharExtra:(int)arg1 ;
-(void)setTextUpdateCP:(BOOL)arg1 ;
-(void)setTextHorizontalAlign:(int)arg1 ;
-(void)setTextVerticalAlign:(int)arg1 ;
-(void)setTextDirection:(int)arg1 ;
-(BOOL)getTextUpdateCP;
-(void)setPenPosition:(CGPoint)arg1 ;
-(char)clippingIsRestarted;
-(id)getCurrentTransform;
-(NSMutableArray *)clippingPaths;
-(void)setClippingIsRestarted:(char)arg1 ;
-(void)setArcDirection:(int)arg1 ;
-(id)getPath;
-(void)setPolyFillMode:(int)arg1 ;
-(id)getSelectedPalette;
-(id)getBrush;
-(void)setStretchBltMode:(int)arg1 ;
-(void)setTextJustification:(int)arg1 :(int)arg2 ;
-(void)setRop2:(int)arg1 ;
@end

