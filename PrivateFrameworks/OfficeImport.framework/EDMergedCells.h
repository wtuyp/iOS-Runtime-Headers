/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, EDWorksheet;

@interface EDMergedCells : NSObject {
    NSMutableArray *mMergedCells;
    EDWorksheet *mWorksheet;
}

- (void)addMergedCell:(id)arg1;
- (NSUInteger)count;
- (void)dealloc;
- (id)initWithWorksheet:(id)arg1;
- (void)insertMergedCell:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)mergedCellAtIndex:(NSUInteger)arg1;
- (id)worksheet;

@end