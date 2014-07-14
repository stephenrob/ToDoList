//
//  SJRToDoItem.h
//  ToDoList
//
//  Created by Stephen Robinson on 14/07/2014.
//
//

#import <Foundation/Foundation.h>

@interface SJRToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
