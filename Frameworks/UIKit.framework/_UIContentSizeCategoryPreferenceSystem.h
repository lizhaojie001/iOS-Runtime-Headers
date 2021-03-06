/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference {
    BOOL  _applicationOverridesPreferredContentSizeCategory;
    BOOL  _didCheckForPreferredContentSizeCategoryOverride;
    BOOL  _observingNotification;
}

- (void)_beginObservingPreferredContentSizeChangedNotification;
- (void)_endObservingPreferredContentSizeChangedNotification;
- (void)_postContentSizeCategoryDidChangeNotification;
- (void)_readAndObservePreferences;
- (void)_updateContentSizeCategory:(id)arg1 postingNotification:(BOOL)arg2;
- (void)_updateContentSizeCategoryFromUserDefaultsPostingNotification:(BOOL)arg1;
- (void)checkForChanges;
- (void)dealloc;
- (id)initAsSystem;
- (void)setPreferredContentSizeCategory:(id)arg1;

@end
