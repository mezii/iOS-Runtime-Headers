/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDEditorHeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    NSNumber * _centimeterValue;
    UIPickerView * _picker;
    BOOL  _usesImperialUnits;
}

@property (nonatomic, retain) NSNumber *centimeterValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (double)defaultCentimeterValue;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_hidePicker;
- (void)_localeDidChange:(id)arg1;
- (void)_showPicker;
- (void)beginEditing;
- (id)centimeterValue;
- (void)commitEditing;
- (void)dealloc;
- (id)formattedValue;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (void)setCentimeterValue:(id)arg1;

@end
