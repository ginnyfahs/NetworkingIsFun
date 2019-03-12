//
//  ViewController.h
//  NetworkingIsFun
//
//  Created by Ginny Fahs on 1/31/19.
//  Copyright © 2019 Ginny's Games. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    UIActivityIndicatorView *_activityIndicatorView;
    NSArray *_movies;
}

@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property(nonatomic, retain) NSArray *movies;


@end

