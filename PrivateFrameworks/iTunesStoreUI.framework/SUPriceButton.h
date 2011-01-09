/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString;



@interface SUPriceButton : UIThreePartButton 
{
    id _delegate;
    float _normalWidth;
    NSUInteger _style;
    NSString *_originalTitle;
    NSString *_adjustedTitle;
    NSString *_confirmationTitle;
    struct CGSize { 
        float width; 
        float height; 
    } _adjustedTitleSize;
    unsigned int _adjustingWidth : 1;
    unsigned int _leftAligned : 1;
    unsigned int _needsLayout : 1;
    unsigned int _normalWidthIsDirty : 1;
    unsigned int _showingConfirmation : 1;
    unsigned int _ignoreNextUp : 1;
}

+ (float)widthForTitle:(id)arg1 style:(NSUInteger)arg2;
+ (NSUInteger)styleForItem:(id)arg1;
+ (float)animationDuration;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setLeftAnchored:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setStyle:(NSUInteger)arg1;
- (void)sizeToFit;
- (void)drawTitleAtPoint:(struct CGPoint { float x1; float x2; })arg1 width:(float)arg2;
- (void)drawButtonPart:(NSInteger)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)normalWidth;
- (void)setNormalWidth:(float)arg1;
- (void)cancelBuyConfirmation:(BOOL)arg1;
- (BOOL)isShowingConfirmation;
- (void)setConfirmationTitle:(id)arg1;
- (void)removeFromSuperview;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_controlMouseDown:(struct __GSEvent { }*)arg1;
- (void)_controlMouseUp:(struct __GSEvent { }*)arg1;
- (void)_controlMouseDragged:(struct __GSEvent { }*)arg1;
- (void)_setInterceptMouseEvent:(BOOL)arg1;
- (id)_interceptMouseEvent:(struct __GSEvent { }*)arg1;
- (void)_finishedShowingConfirmation:(id)arg1;
- (void)_finishedHidingConfirmation:(id)arg1;
- (void)_adjustWidthForConfirming:(BOOL)arg1 animate:(BOOL)arg2 stopSelector:(SEL)arg3;
- (id)_notPurchaseableStyle;
- (void)_press:(id)arg1;
- (void)_updateButtonImages:(BOOL)arg1;
- (void)_updateTitleAppearance;

@end