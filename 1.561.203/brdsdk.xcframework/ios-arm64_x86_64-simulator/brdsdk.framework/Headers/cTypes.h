//  LICENSE_CODE ZON

#ifndef cTypes_h
#define cTypes_h

#import <UIKit/UIView.h>

API_AVAILABLE(ios(13))
typedef void (*on_choice_change_callback_function)(int choice);

typedef struct {
    const char *_Nullable portraitNameOrPath;
    const char *_Nullable landscapeNameOrPath;
    UIViewContentMode scaleMode;
} _ConsentImageMeta;

typedef struct {
    const char *_Nullable backgroundNameOrPath;
    const char *_Nullable textNameOrPath;
    uint32_t backgroundColor;
    uint32_t textColor;
    uint32_t type;
} _ConsentActionMeta;

typedef struct {
    uint32_t backgroundColor;
    uint32_t titleColor;
    uint32_t consentMessageColor;
    uint32_t consentLinksColor;
    uint32_t privacyColor;
    uint32_t privacyLinksColor;
    uint32_t iconsForegroundColor;
    uint32_t iconsBackgroundColor;
    uint32_t qrForegroundColor;
    uint32_t qrBackgroundColor;
} _ConsentColors;

typedef struct {
    const char *_Nullable nameOrPath;
    float size;
} _ConsentFont;

typedef struct {
    _ConsentFont title;
    _ConsentFont main;
    _ConsentFont license;
    _ConsentFont icons;
    _ConsentFont buttons;
} _ConsentFontsInfo;


#endif /* cTypes_h */
