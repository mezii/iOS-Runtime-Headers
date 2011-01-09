/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */



@interface PLUICameraViewController : PLCameraViewController <UIImagePickerCameraViewController>
{
    NSInteger _previousStatusBarMode;
    NSInteger _newStatusBarMode;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _previewViewTransform;
}


- (id)init;
- (BOOL)_displaysFullScreen;
- (void)dealloc;
- (id)_cameraView;
- (void)loadView;
- (void)setParentViewController:(id)arg1;
- (NSInteger)_imagePickerStatusBarMode;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setWantsImageData:(BOOL)arg1;
- (void)_editabilityChanged:(id)arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (BOOL)_showsCameraControls;
- (void)_setShowsCameraControls:(BOOL)arg1;
- (id)_cameraOverlayView;
- (void)_setCameraOverlayView:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_cameraViewTransform;
- (void)_setCameraViewTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)_takePicture;
- (void)cameraViewCancelled:(id)arg1;
- (void)cameraView:(id)arg1 photoSaved:(id)arg2;
- (void)cameraView:(id)arg1 videoSavedToPath:(id)arg2 editingInfo:(id)arg3;
- (BOOL)cameraViewShouldShowPreviewAfterSelection:(id)arg1;

@end