//
//  PXPatternEditorController.h
//  Pixen
//

@class PXPattern, PXPatternEditorView;

@interface PXPatternEditorController : NSWindowController < NSCollectionViewDelegate >
{
  @private
	PXPattern *_pattern;
}

@property (nonatomic, strong) IBOutlet NSArrayController *patternsController;
@property (nonatomic, weak) IBOutlet NSScrollView *scrollView;
@property (nonatomic, weak) IBOutlet PXPatternEditorView *editorView;

+ (id)sharedController;

- (void)setPattern:(PXPattern *)pattern;

- (IBAction)newPattern:(id)sender;

- (void)reloadPatterns;

- (void)addPattern:(PXPattern *)pattern;
- (void)removePattern:(PXPattern *)pattern;

@end
