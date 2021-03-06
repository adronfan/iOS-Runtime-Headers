/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKArtworkVariant : NSObject {
    BOOL  _alpha;
    struct CGSize { 
        float width; 
        float height; 
    }  _artworkSize;
    int  _artworkType;
    NSURL * _artworkURL;
    NSString * _artworkURLTemplate;
    NSString * _format;
    BOOL  _supportsLayeredImage;
}

@property (getter=hasAlpha, nonatomic) BOOL alpha;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } artworkSize;
@property (nonatomic, readonly) int artworkType;
@property (nonatomic, readonly, copy) NSURL *artworkURL;
@property (nonatomic, readonly, copy) NSString *format;
@property (nonatomic) BOOL supportsLayeredImage;

- (void).cxx_destruct;
- (id)_sizeDescription:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })artworkSize;
- (id)artworkSizeTemplateURL;
- (int)artworkType;
- (id)artworkURL;
- (id)artworkURLForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)artworkURLForSize:(struct CGSize { float x1; float x2; })arg1 format:(id)arg2;
- (id)description;
- (id)format;
- (BOOL)hasAlpha;
- (id)initWithDictionary:(id)arg1;
- (void)setAlpha:(BOOL)arg1;
- (void)setSupportsLayeredImage:(BOOL)arg1;
- (BOOL)supportsLayeredImage;

@end
