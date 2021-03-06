/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface _NACVolumeRecord : NSObject <NSCoding> {
    float  _EUVolumeLimit;
    BOOL  _muted;
    BOOL  _volumeControlAvailable;
    float  _volumeValue;
    BOOL  _volumeWarningEnabled;
}

@property (nonatomic) float EUVolumeLimit;
@property (getter=isMuted, nonatomic) BOOL muted;
@property (getter=isVolumeControlAvailable, nonatomic) BOOL volumeControlAvailable;
@property (nonatomic) float volumeValue;
@property (getter=isVolumeWarningEnabled, nonatomic) BOOL volumeWarningEnabled;

- (float)EUVolumeLimit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isMuted;
- (BOOL)isVolumeControlAvailable;
- (BOOL)isVolumeWarningEnabled;
- (void)setEUVolumeLimit:(float)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setVolumeControlAvailable:(BOOL)arg1;
- (void)setVolumeValue:(float)arg1;
- (void)setVolumeWarningEnabled:(BOOL)arg1;
- (float)volumeValue;

@end
