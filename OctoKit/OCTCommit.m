//
//  OCTCommit.m
//  codereview
//
//  Created by Jackson Harper on 8/8/13.
//  Copyright (c) 2013 Harper Semiconductors, Inc. All rights reserved.
//

#import "OCTCommit.h"

@implementation OCTCommit

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
	return [super.JSONKeyPathsByPropertyKey mtl_dictionaryByAddingEntriesFromDictionary:@{
                                                                                          @"SHA": @"sha",
                                                                                          @"URL": @"url",
                                                                                          @"authorName": @"author.name",
                                                                                          @"authorEmail": @"author.email",
                                                                                          @"authorDate": @"author.email",
                                                                                          @"committerName": @"committer.name",
                                                                                          @"committerEmail": @"committer.email",
                                                                                          @"committerDate": @"committer.email",
                                                                                          @"commentsURL": @"comments_url",
                                                                                          }];
}

+ (NSValueTransformer *)URLJSONTransformer {
	return [NSValueTransformer valueTransformerForName:MTLURLValueTransformerName];
}

@end
