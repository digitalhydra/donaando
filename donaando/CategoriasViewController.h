//
//  CategoriasViewController.h
//  donaando
//
//  Created by jairo mejia on 14/03/15.
//  Copyright (c) 2015 jairo y jhon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CategoriasViewController : UIViewController <UITableViewDataSource, UITabBarDelegate>

@property (copy, nonatomic) NSArray *categorias;

@end
