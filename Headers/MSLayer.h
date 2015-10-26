#import "_MSLayer.h"

#import "MSLayerContainment.h"
#import "MSLayerManipulation.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class GKRect, MSAbsoluteRect, NSAffineTransform;

@interface MSLayer : _MSLayer <MSLayerContainment, MSLayerManipulation, NSCoding, NSCopying>
{
    long long skipDrawingSelectionCounter;
    struct CGRect relativeRect;
    GKRect *frameAtMouseDown;
    BOOL _isHovering;
    BOOL _isAlreadyCaching;
    BOOL _isSelected;
    NSAffineTransform *_lightweightTransform;
    MSAbsoluteRect *_absoluteRect;
    id _undoRefreshTimer;
    struct CGRect _lightweightDrawableFrame;
    struct CGRect _lightweightAbsoluteRect;
    struct CGRect _cachedDirtyRectForBounds;
}

+ (void)hideSelectionDisabledInBlock:(CDUnknownBlockType)arg1;
+ (void)makeLayerNamesUnique:(id)arg1;
+ (id)layersSeparatedByGroups:(id)arg1;
+ (Class)layerSnapperObjectClass;
+ (CDUnknownBlockType)classFilter:(Class)arg1 block:(CDUnknownBlockType)arg2;
@property(nonatomic) struct CGRect cachedDirtyRectForBounds; // @synthesize cachedDirtyRectForBounds=_cachedDirtyRectForBounds;
@property(retain, nonatomic) id undoRefreshTimer; // @synthesize undoRefreshTimer=_undoRefreshTimer;
@property(retain, nonatomic) MSAbsoluteRect *absoluteRect; // @synthesize absoluteRect=_absoluteRect;
@property(nonatomic) struct CGRect lightweightAbsoluteRect; // @synthesize lightweightAbsoluteRect=_lightweightAbsoluteRect;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSAffineTransform *lightweightTransform; // @synthesize lightweightTransform=_lightweightTransform;
@property(nonatomic) struct CGRect lightweightDrawableFrame; // @synthesize lightweightDrawableFrame=_lightweightDrawableFrame;
@property(nonatomic) BOOL isAlreadyCaching; // @synthesize isAlreadyCaching=_isAlreadyCaching;
@property(nonatomic) BOOL isHovering; // @synthesize isHovering=_isHovering;
- (void).cxx_destruct;
- (void)layerDidResizeFromRect:(struct CGRect)arg1;
- (void)groupDidRemoveThisLayer:(id)arg1;
- (void)groupDidAddThisLayer:(id)arg1;
- (BOOL)canRotate;
- (BOOL)isFrameEqualForSync:(id)arg1;
- (BOOL)containsSymbols;
- (BOOL)parentOrSelfIsSymbol;
- (BOOL)isLayerExportable;
- (void)assignWithOriginalLinkedStyleIfNecessary;
- (id)layerWithId:(id)arg1;
@property(copy, nonatomic) GKRect *frameInArtboard;
- (BOOL)calculateHasBlendedLayer;
- (id)currentHandlerKey;
- (BOOL)shouldBeSelectedInLayerList;
- (BOOL)canBeSelectedOnCanvas;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
- (BOOL)canBeTransformed;
- (void)setRotation:(double)arg1;
- (void)setIsFlippedVertical:(BOOL)arg1;
- (void)setIsFlippedHorizontal:(BOOL)arg1;
- (struct CGSize)minimumSize;
- (void)layerSizeDidChangeFromCorner:(long long)arg1;
- (void)multiplyBy:(double)arg1;
- (void)clearPositionCaches;
- (void)concatAncestorTransforms;
- (id)ancestorTransforms;
- (id)transform;
- (struct CGAffineTransform)CGTransformForFrame;
- (id)transformForRect:(struct CGRect)arg1;
- (struct _CHTransformStruct)transformStruct;
- (struct CGRect)convertRectToAbsoluteCoordinates:(struct CGRect)arg1;
- (struct CGPoint)convertPointToLayerCoordinates:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromParentRoot:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToParentRoot:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToAbsoluteCoordinates:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToViewCoordinates:(struct CGPoint)arg1;
- (id)allLayersWithForcedClickThrough:(BOOL)arg1;
- (id)children;
- (id)ancestors;
- (id)parentArtboard;
- (id)parentRoot;
- (id)parentPage;
- (id)artisticStroke;
- (BOOL)isOpen;
- (BOOL)handleDoubleClick;
- (void)removeFromParent;
- (void)handleLightweightObjectChangeForKey:(id)arg1 sender:(id)arg2;
- (BOOL)isUndoingModelObjectChange;
- (void)refreshForPropertyChanged:(id)arg1;
- (void)propertyDidChange:(id)arg1;
- (void)rectDidChange;
- (void)rectSizeDidChange:(id)arg1;
- (void)rectWillChange;
- (void)moveInLayerTreeInBlock:(CDUnknownBlockType)arg1;
- (BOOL)closePath;
- (id)bezierPathWithTransforms;
- (id)bezierPath;
- (id)handlerName;
- (struct CGRect)absoluteDirtyRect;
- (struct CGRect)dirtyRectForBounds;
- (struct CGRect)dirtyRectForFrame;
- (void)refreshViewsWithMask:(unsigned long long)arg1;
- (void)refreshOfType:(unsigned long long)arg1 rect:(struct CGRect)arg2;
- (struct CGRect)translateDirtyRectFromBoundsToFrame:(struct CGRect)arg1;
- (void)markLayerDirtyOfType:(unsigned long long)arg1 margins:(struct CGSize)arg2;
- (void)markLayerDirtyOfType:(unsigned long long)arg1;
- (void)refreshOfType:(unsigned long long)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)layerDidChange;
- (struct CGRect)calculateDirtyRectForBounds;
- (id)cachedImageSetUsingBlock:(CDUnknownBlockType)arg1;
- (id)cachedImage;
- (void)clearCachedImage;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (BOOL)isTooSmallForHitTesting;
- (long long)selectedCorner:(struct CGPoint)arg1 zoom:(double)arg2;
- (void)select:(BOOL)arg1 byExpandingSelection:(BOOL)arg2 showSelection:(BOOL)arg3;
- (void)select:(BOOL)arg1 byExpandingSelection:(BOOL)arg2;
- (BOOL)containsSelectedItem;
- (void)flattenIfNecessary;
- (void)recordRelativeRect;
- (void)resetRelativeRect;
- (struct CGRect)relativeRect;
- (void)setFrameAtMouseDown:(id)arg1;
- (struct CGRect)boundsRect;
- (id)frameAtMouseDown;
- (void)setName:(id)arg1;
- (void)enableSelectionDelayedAndRelease;
- (void)hideSelectionTemporarily;
- (void)showSelectionImmediately;
- (id)valueForUndefinedKey:(id)arg1;
@property(nonatomic) double proportions;
@property(nonatomic) BOOL constrainProportions;
- (unsigned long long)selectionCornerMask;
- (BOOL)shouldDrawSelection;
- (struct CGRect)frameForTransforms;
- (void)recordFrame;
- (double)zoomValue;
- (BOOL)hasActiveBackgroundBlur;
- (BOOL)hasBitmapStylesEnabled;
- (void)prepareObjectCopy:(id)arg1;
- (Class)classToUseForNameCounter;
- (id)layersSharingStyle:(id)arg1;
- (id)rootForNameUniqueing;
- (id)namesOfAllLayersInContainer:(id)arg1;
- (id)layerNameProperties;
- (void)findUniqueNameWithNames:(id)arg1;
- (void)makeNameUnique;
- (id)defaultName;
- (void)setFrame:(id)arg1;
- (id)objectIDsForSelfAncestorsAndChildren;
- (BOOL)isLine;
- (id)usedStyle;
- (id)defaultStyle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)objectDidInit;
- (void)initEmptyObject;
- (id)CSSStringFromFloat:(double)arg1;
- (id)CSSAttributes;
- (id)CSSRotation;
- (id)CSSAttributeString;
- (BOOL)isExpandedInLayerList;
- (id)previewFillColor:(BOOL)arg1;
- (id)previewBorderColor:(BOOL)arg1;
- (void)drawPreviewInRect:(struct CGRect)arg1 honourSelected:(BOOL)arg2;
- (id)commonColors;
- (BOOL)shouldFlattenAfterRotate;
- (void)toggleClosePath;
- (id)inspectorViewControllers;
- (id)inspectorViewControllerNames;
- (BOOL)canBeHovered;
- (id)bezierPathForHover;
- (id)colorForHover;
- (void)drawHoverWithZoom:(double)arg1;
- (void)writeBitmapImageToFile:(id)arg1;
- (id)parentForInsertingLayers;
- (id)displayName;
- (void)changeColor:(id)arg1;
- (BOOL)supportsInnerOuterBorders;
- (BOOL)booleanOperationCanBeReset;
- (id)duplicate;
- (id)snapLines;
- (BOOL)hasLayerSatisfyingTest:(CDUnknownBlockType)arg1;
- (id)firstLayerSatisfyingTest:(CDUnknownBlockType)arg1;
- (void)appendToArray:(id)arg1 layersSatisfyingTest:(CDUnknownBlockType)arg2;
- (id)layersSatisfyingTest:(CDUnknownBlockType)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 classFilter:(Class)arg2 block:(CDUnknownBlockType)arg3;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (BOOL)containsLayerOfClass:(Class)arg1;
- (BOOL)containsMultipleLayers;
- (BOOL)containsASingleLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (BOOL)canBeContainedByDocument;
- (BOOL)canBeContainedByGroup;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (id)closestClippingLayer;
- (BOOL)isPartOfClippingMask;
- (BOOL)hasClippingMask;
- (id)parentRootForAbsoluteRect;
- (BOOL)isUnGroupable;
- (id)sharedObjectOfType:(unsigned long long)arg1;
- (void)removeAllLayers;
- (void)removeLayerAtIndex:(unsigned long long)arg1;
- (void)removeLayer:(id)arg1;
- (void)insertLayers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertLayers:(id)arg1 afterLayer:(id)arg2;
- (void)insertLayers:(id)arg1 beforeLayer:(id)arg2;
- (void)addLayers:(id)arg1;
- (void)replaceLayersWithLayers:(id)arg1;
- (unsigned long long)shouldDraw;
- (BOOL)transparencyLayerUseRectCondition;
- (BOOL)shouldRenderInTransparencyLayer;
- (Class)rendererClass;
- (id)renderBitmapEffects:(id)arg1;
- (void)writeSVGToElement:(id)arg1 withExporter:(id)arg2;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (id)relativeRectWithExporter:(id)arg1;
- (struct CGPoint)layerOffsetWithExporter:(id)arg1;
- (void)addSVGAttributes:(id)arg1 forExporter:(id)arg2;
- (id)svgStyle;
- (void)addGradientsToDocument:(id)arg1;
- (void)addChildrenToElement:(id)arg1 exporter:(id)arg2;
- (id)addContentToElement:(id)arg1 attributes:(id)arg2 exporter:(id)arg3 action:(unsigned long long *)arg4;
- (BOOL)shouldIncludeLayerInSlice:(id)arg1;
- (BOOL)intersectsSlice:(id)arg1;

@end
