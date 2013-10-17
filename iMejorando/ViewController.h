//
//  ViewController.h
//  iMejorando
//
//  Created by Juan Carlos Juárez on 16/10/13.
//  Copyright (c) 2013 Juan Carlos Juárez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UICollectionViewDelegate, UICollectionViewDataSource>
@property (weak, nonatomic) IBOutlet UICollectionView *someCollectionView;
@property (strong, nonatomic) NSMutableArray *menuItems;
@end
