#import "TaobaoUrlFetchDelegate.h"

@interface TaobaoUrlFetch:NSObject {

	NSMutableData *receivedData;
	NSURLConnection *taobaoURLConnection;
	id<TaobaoUrlFetchDelegate> delegate;
	NSString *method;
	NSMutableDictionary *methodSelectorDictionary;

}

-(id)init;
-(void)fetchWithUrl:(NSString *)stringUrl andPayload:(NSMutableDictionary *)payload andMethod:(NSString *)theMethod andSelector:(SEL)process;

@property (nonatomic, assign) id<TaobaoUrlFetchDelegate> delegate;
@property (nonatomic, retain) NSMutableData *receivedData;
@property (nonatomic, retain) NSURLConnection *taobaoURLConnection;
@property (nonatomic, retain) NSString *method;
@property (nonatomic,retain) NSMutableDictionary *methodSelectorDictionary;

@end
