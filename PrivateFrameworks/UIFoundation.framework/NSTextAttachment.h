/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextAttachment : NSObject <NSCoding, NSTextAttachmentContainer> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _bounds;
    NSString * _cacheKey;
    NSData * _data;
    NSFileWrapper * _fileWrapper;
    UIImage * _image;
    NSString * _uti;
    UITextAttachmentView * _wrapperView;
}

@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (retain) UIView *contentView;
@property (nonatomic, copy) NSData *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fileType;
@property (nonatomic, retain) NSFileWrapper *fileWrapper;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImage *image;
@property (readonly) Class superclass;

// NSTextAttachment (null)

+ (id)imageCache;
+ (void)initialize;

- (id)_cacheKey;
- (id)_image;
- (void)_invalidateWrapperView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { float x1; float x2; })arg3 characterIndex:(unsigned int)arg4;
- (id)attachmentCell;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)contentView;
- (id)contents;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })drawingBounds;
- (void)encodeWithCoder:(id)arg1;
- (id)fileType;
- (id)fileWrapper;
- (id)image;
- (id)imageForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned int)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)initWithFileWrapper:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setDrawingBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFileType:(id)arg1;
- (void)setFileWrapper:(id)arg1;
- (void)setImage:(id)arg1;

@end