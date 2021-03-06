/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface _SCNShadableCompilationIssue : NSObject {
    NSString * _effectiveModifier;
    NSString * _entryPoint;
    NSString * _message;
    <SCNShadable> * _shadable;
    unsigned int  _type;
}

@property (nonatomic, readonly) NSString *effectiveModifier;
@property (nonatomic, readonly) NSString *entryPoint;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) <SCNShadable> *shadable;
@property (nonatomic, readonly) unsigned int type;

+ (id)issueWithShadable:(id)arg1 entryPoint:(id)arg2 effectiveModifier:(id)arg3 message:(id)arg4 type:(unsigned int)arg5;

- (void)dealloc;
- (id)effectiveModifier;
- (id)entryPoint;
- (id)message;
- (id)shadable;
- (unsigned int)type;

@end
