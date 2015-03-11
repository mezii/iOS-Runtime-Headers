/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSString;

@interface FBSContext : NSObject <BSXPCCoding> {
    unsigned int _identifier;
    double _level;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned int identifier;
@property(readonly) double level;
@property(readonly) Class superclass;

+ (id)contextWithSceneContext:(id)arg1;

- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)level;

@end