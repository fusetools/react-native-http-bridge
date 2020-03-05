#import <React/RCTBridgeModule.h>
#import "WGCDWebServer.h"

@interface RCTHttpServer : NSObject <RCTBridgeModule> {
    WGCDWebServer* _webServer;
    NSMutableDictionary* _completionBlocks;
}

@end
