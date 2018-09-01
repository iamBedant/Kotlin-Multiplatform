#import <Foundation/Foundation.h>

@class GreetingGitHubResponse, GreetingPlatform, GreetingTransformer, GreetingUserDetails;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
@interface GreetingMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
@interface GreetingMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_subclassing_restricted))
@interface GreetingGitHubResponse : KotlinBase
- (instancetype)initWithLogin:(NSString *)login id:(int32_t)id node_id:(NSString *)node_id avatar_url:(NSString *)avatar_url gravatar_id:(NSString *)gravatar_id url:(NSString *)url html_url:(NSString *)html_url followers_url:(NSString *)followers_url following_url:(NSString *)following_url gists_url:(NSString *)gists_url starred_url:(NSString *)starred_url subscriptions_url:(NSString *)subscriptions_url organizations_url:(NSString *)organizations_url repos_url:(NSString *)repos_url events_url:(NSString *)events_url received_events_url:(NSString *)received_events_url type:(NSString *)type site_admin:(BOOL)site_admin name:(NSString *)name company:(NSString *)company blog:(NSString *)blog location:(NSString *)location email:(id)email hireable:(BOOL)hireable bio:(NSString *)bio public_repos:(int32_t)public_repos public_gists:(int32_t)public_gists followers:(int32_t)followers following:(int32_t)following created_at:(NSString *)created_at updated_at:(NSString *)updated_at __attribute__((swift_name("init(login:id:node_id:avatar_url:gravatar_id:url:html_url:followers_url:following_url:gists_url:starred_url:subscriptions_url:organizations_url:repos_url:events_url:received_events_url:type:site_admin:name:company:blog:location:email:hireable:bio:public_repos:public_gists:followers:following:created_at:updated_at:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString *)component11 __attribute__((swift_name("component11()")));
- (NSString *)component12 __attribute__((swift_name("component12()")));
- (NSString *)component13 __attribute__((swift_name("component13()")));
- (NSString *)component14 __attribute__((swift_name("component14()")));
- (NSString *)component15 __attribute__((swift_name("component15()")));
- (NSString *)component16 __attribute__((swift_name("component16()")));
- (NSString *)component17 __attribute__((swift_name("component17()")));
- (BOOL)component18 __attribute__((swift_name("component18()")));
- (NSString *)component19 __attribute__((swift_name("component19()")));
- (NSString *)component20 __attribute__((swift_name("component20()")));
- (NSString *)component21 __attribute__((swift_name("component21()")));
- (NSString *)component22 __attribute__((swift_name("component22()")));
- (id)component23 __attribute__((swift_name("component23()")));
- (BOOL)component24 __attribute__((swift_name("component24()")));
- (NSString *)component25 __attribute__((swift_name("component25()")));
- (int32_t)component26 __attribute__((swift_name("component26()")));
- (int32_t)component27 __attribute__((swift_name("component27()")));
- (int32_t)component28 __attribute__((swift_name("component28()")));
- (int32_t)component29 __attribute__((swift_name("component29()")));
- (NSString *)component30 __attribute__((swift_name("component30()")));
- (NSString *)component31 __attribute__((swift_name("component31()")));
- (GreetingGitHubResponse *)doCopyLogin:(NSString *)login id:(int32_t)id node_id:(NSString *)node_id avatar_url:(NSString *)avatar_url gravatar_id:(NSString *)gravatar_id url:(NSString *)url html_url:(NSString *)html_url followers_url:(NSString *)followers_url following_url:(NSString *)following_url gists_url:(NSString *)gists_url starred_url:(NSString *)starred_url subscriptions_url:(NSString *)subscriptions_url organizations_url:(NSString *)organizations_url repos_url:(NSString *)repos_url events_url:(NSString *)events_url received_events_url:(NSString *)received_events_url type:(NSString *)type site_admin:(BOOL)site_admin name:(NSString *)name company:(NSString *)company blog:(NSString *)blog location:(NSString *)location email:(id)email hireable:(BOOL)hireable bio:(NSString *)bio public_repos:(int32_t)public_repos public_gists:(int32_t)public_gists followers:(int32_t)followers following:(int32_t)following created_at:(NSString *)created_at updated_at:(NSString *)updated_at __attribute__((swift_name("doCopy(login:id:node_id:avatar_url:gravatar_id:url:html_url:followers_url:following_url:gists_url:starred_url:subscriptions_url:organizations_url:repos_url:events_url:received_events_url:type:site_admin:name:company:blog:location:email:hireable:bio:public_repos:public_gists:followers:following:created_at:updated_at:)")));
@property (readonly) NSString *login;
@property (readonly) int32_t id;
@property (readonly) NSString *node_id;
@property (readonly) NSString *avatar_url;
@property (readonly) NSString *gravatar_id;
@property (readonly) NSString *url;
@property (readonly) NSString *html_url;
@property (readonly) NSString *followers_url;
@property (readonly) NSString *following_url;
@property (readonly) NSString *gists_url;
@property (readonly) NSString *starred_url;
@property (readonly) NSString *subscriptions_url;
@property (readonly) NSString *organizations_url;
@property (readonly) NSString *repos_url;
@property (readonly) NSString *events_url;
@property (readonly) NSString *received_events_url;
@property (readonly) NSString *type;
@property (readonly) BOOL site_admin;
@property (readonly) NSString *name;
@property (readonly) NSString *company;
@property (readonly) NSString *blog;
@property (readonly) NSString *location;
@property (readonly) id email;
@property (readonly) BOOL hireable;
@property (readonly) NSString *bio;
@property (readonly) int32_t public_repos;
@property (readonly) int32_t public_gists;
@property (readonly) int32_t followers;
@property (readonly) int32_t following;
@property (readonly) NSString *created_at;
@property (readonly) NSString *updated_at;
@end;

__attribute__((objc_subclassing_restricted))
@interface GreetingPlatform : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getTimestamp __attribute__((swift_name("getTimestamp()")));
@property (readonly) NSString *platform;
@end;

__attribute__((objc_subclassing_restricted))
@interface GreetingTransformer : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
- (GreetingUserDetails *)getUserDetailsFromResponseResponse:(GreetingGitHubResponse *)response __attribute__((swift_name("getUserDetailsFromResponse(response:)")));
@end;

__attribute__((objc_subclassing_restricted))
@interface GreetingUserDetails : KotlinBase
- (instancetype)initWithName:(NSString *)name repo:(int32_t)repo gist:(int32_t)gist avatar:(NSString *)avatar description:(NSString *)description lastUpdated:(NSString *)lastUpdated __attribute__((swift_name("init(name:repo:gist:avatar:description:lastUpdated:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (GreetingUserDetails *)doCopyName:(NSString *)name repo:(int32_t)repo gist:(int32_t)gist avatar:(NSString *)avatar description:(NSString *)description lastUpdated:(NSString *)lastUpdated __attribute__((swift_name("doCopy(name:repo:gist:avatar:description:lastUpdated:)")));
@property (readonly) NSString *name;
@property (readonly) int32_t repo;
@property (readonly) int32_t gist;
@property (readonly) NSString *avatar;
@property (readonly, getter=description_) NSString *description;
@property (readonly) NSString *lastUpdated;
@end;

NS_ASSUME_NONNULL_END
