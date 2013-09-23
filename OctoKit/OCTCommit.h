//
//  OCTCommit.h
//  codereview
//
//  Created by Jackson Harper on 8/8/13.
//  Copyright (c) 2013 Harper Semiconductors, Inc. All rights reserved.
//

#import "OCTObject.h"

@interface OCTCommit : OCTObject

// The SHA for this commit.
@property (nonatomic, copy, readonly) NSString *SHA;

// The URL for this commit.
@property (nonatomic, copy, readonly) NSURL *URL;

// A readable name for the author.
@property (nonatomic, copy, readonly) NSString *authorName;

// The email of the author.
@property (nonatomic, copy, readonly) NSString *authorEmail;

// The date/time this commit was authored.
@property (nonatomic, copy, readonly) NSDate *authorDate;

// A readable name for the committer.
@property (nonatomic, copy, readonly) NSString *committerName;

// The email of the committer.
@property (nonatomic, copy, readonly) NSString *committerEmail;

// The date/time this commit was committed.
@property (nonatomic, copy, readonly) NSDate *committerDate;

// The commit message.
@property (nonatomic, copy, readonly) NSString *message;

@end
