// PDFView.h
//
// Copyright (c) 2015 Iwe Labs
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>

@class PDFWidgetAnnotationView;

/** The PDFView class allows for viewing a PDF file. The controller PDFViewController uses PDFView as its view and PDFDocument as its model.
 PDFView is typically not directly instantiated, but instead is used as the instance that comes with PDFViewController.
 */
@interface PDFView : UIView 

/** The array contains the PDFWidgetAnnotationView instances that are subviews of the pdfView's scrollView.
 */
@property (nonatomic, readonly) NSMutableArray *pdfWidgetAnnotationViews;

/** The view in pdfWidgetAnnotationViews has holds the input focus.
 */
@property (nonatomic, weak) PDFWidgetAnnotationView *activeWidgetAnnotationView;

/** The webview used to render the PDF.
 */
@property (nonatomic, readonly) UIWebView *pdfView;


/**---------------------------------------------------------------------------------------
 * @name Initializing a PDFView
 *  ---------------------------------------------------------------------------------------
 */
/**
 */

- (void)setupWithDocument:(PDFDocument *)document;


@end
