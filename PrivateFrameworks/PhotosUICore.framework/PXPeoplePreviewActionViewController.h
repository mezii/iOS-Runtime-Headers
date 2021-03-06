/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeoplePreviewActionViewController : UIViewController {
    <PXPeoplePreviewActionViewControllerDelegate> * _delegate;
    UIImage * _image;
    UIImageView * _imageView;
    int  _localPersonType;
    PXPersonItem * _personItem;
    UIView * _placeholderView;
}

@property (nonatomic) <PXPeoplePreviewActionViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) int localPersonType;
@property (nonatomic, retain) PXPersonItem *personItem;
@property (nonatomic, retain) UIView *placeholderView;

- (void).cxx_destruct;
- (id)_localizedFavoriteActionTitle;
- (id)_localizedHideActionTitle;
- (void)_toggleFaceCollectionFavorited;
- (void)_toggleFaceCollectionHidden;
- (void)_toggleForDesiredType:(int)arg1;
- (void)_updateImageView;
- (id)delegate;
- (id)image;
- (id)imageView;
- (id)initWithDelegate:(id)arg1;
- (int)localPersonType;
- (id)personItem;
- (id)placeholderView;
- (id)previewActionItems;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setLocalPersonType:(int)arg1;
- (void)setPersonItem:(id)arg1;
- (void)setPersonItem:(id)arg1 withLocalType:(int)arg2;
- (void)setPlaceholderView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
