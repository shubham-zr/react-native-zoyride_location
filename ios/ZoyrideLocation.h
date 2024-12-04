
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNZoyrideLocationSpec.h"

@interface ZoyrideLocation : NSObject <NativeZoyrideLocationSpec>
#else
#import <React/RCTBridgeModule.h>

@interface ZoyrideLocation : NSObject <RCTBridgeModule>
#endif

@end
