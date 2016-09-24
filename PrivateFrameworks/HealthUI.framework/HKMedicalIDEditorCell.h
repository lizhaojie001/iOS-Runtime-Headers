/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDEditorCell : UITableViewCell <UITextFieldDelegate> {
    <HKMedicalIDEditorCellEditDelegate> * _editDelegate;
    UIView * _horizontalSeparatorView;
    HKCaretOptionalTextField * _inputTextField;
    UILabel * _labelLabel;
    double  _minimumLabelWidth;
    UIView * _verticalSeparatorView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <HKMedicalIDEditorCellEditDelegate> *editDelegate;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) HKCaretOptionalTextField *inputTextField;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, readonly) UILabel *labelLabel;
@property (nonatomic) double minimumLabelWidth;
@property (readonly) Class superclass;

+ (BOOL)showsLabelAndValue;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)beginEditing;
- (void)commitEditing;
- (void)dealloc;
- (id)editDelegate;
- (id)formattedValue;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)inputTextField;
- (id)label;
- (id)labelLabel;
- (void)layoutSubviews;
- (float)minimumLabelWidth;
- (void)setEditDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMinimumLabelWidth:(float)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)updateValueLabel;
- (void)valueDidChange;

@end