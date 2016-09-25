/* Generated by RuntimeBrowser.
 */

@protocol VKCustomFeatureDataSource <NSObject>

@required

- (void)addObserver:(id <VKCustomFeatureDataSourceObserver>)arg1;
- (NSArray *)annotationsInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (GEOFeatureStyleAttributes *)clusterStyleAttributes;
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned int)arg1 text:(id*)arg2 locale:(id*)arg3;
- (BOOL)isClusteringEnabled;
- (void)removeObserver:(id <VKCustomFeatureDataSourceObserver>)arg1;
- (unsigned char)sceneID;
- (unsigned char)sceneState;

@end