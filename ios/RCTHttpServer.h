#import <React/RCTBridgeModule.h>
#import "WGCDWebServer.h"

@interface HttpBridge : NSObject <RCTBridgeModule> {
    WGCDWebServer* _webServer;
    NSMutableDictionary* _completionBlocks;
}

@end
