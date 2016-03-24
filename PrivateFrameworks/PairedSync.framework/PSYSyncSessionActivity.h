/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYSyncSessionActivity : NSObject <NSCopying, NSSecureCoding> {
    PSYActivityInfo *_activityInfo;
    double _activityProgress;
    unsigned int _activityState;
    NSError *_error;
    BOOL _finishedSending;
    int _interruptionCount;
}

@property (nonatomic, readonly) PSYActivityInfo *activityInfo;
@property (nonatomic, readonly) double activityProgress;
@property (nonatomic, readonly) unsigned int activityState;
@property (nonatomic, readonly) NSError *error;
@property (getter=isFinishedSending, nonatomic, readonly) BOOL finishedSending;
@property (nonatomic, readonly) int interruptionCount;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityInfo;
- (double)activityProgress;
- (unsigned int)activityState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned int)hash;
- (id)initWithActivityInfo:(id)arg1 progress:(double)arg2 error:(id)arg3 state:(unsigned int)arg4 finishedSending:(BOOL)arg5 interruptionCount:(int)arg6;
- (id)initWithCoder:(id)arg1;
- (int)interruptionCount;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFinishedSending;
- (id)syncSessionActivityByUpdatingProgress:(double)arg1;

@end