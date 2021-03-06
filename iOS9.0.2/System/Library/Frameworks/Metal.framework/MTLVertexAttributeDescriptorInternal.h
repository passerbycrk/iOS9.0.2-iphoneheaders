/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLVertexAttributeDescriptor.h>

@interface MTLVertexAttributeDescriptorInternal : MTLVertexAttributeDescriptor {

	unsigned _vertexFormat;
	unsigned _offset;
	unsigned _bufferIndex;

}
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
-(void)setBufferIndex:(unsigned)arg1 ;
-(unsigned)bufferIndex;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
@end

