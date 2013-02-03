/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VideoAttributes : NSObject <NSCopying, NSCoding> {
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    int camera;
    BOOL cameraSwitching;
    } contentsRect;
    int orientation;
    } ratio;
}

@property int camera;
@property BOOL cameraSwitching;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } contentsRect;
@property int orientation;
@property struct CGSize { float width; float height; } ratio;

+ (id)videoAttributesWithVideoAttributes:(id)arg1;

- (int)camera;
- (BOOL)cameraSwitching;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(struct CGSize { float x1; float x2; })arg2 contentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToVideoAttributes:(id)arg1;
- (int)orientation;
- (struct CGSize { float x1; float x2; })ratio;
- (void)setCamera:(int)arg1;
- (void)setCameraSwitching:(BOOL)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOrientation:(int)arg1;
- (void)setRatio:(struct CGSize { float x1; float x2; })arg1;

@end