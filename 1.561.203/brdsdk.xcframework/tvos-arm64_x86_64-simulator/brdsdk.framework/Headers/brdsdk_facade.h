//
//  unity_facade.h
//  Defines API (methods) for unity apps
//
//  LICENSE_CODE ZON

#import <Foundation/Foundation.h>
#import <brdsdk/brdsdk-Swift.h>
#include "cTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

// MARK: - DEPRECATIONS

API_AVAILABLE(ios(13))
typedef void (*choice_callback_function)(BrightAPIChoice choice) DEPRECATED_ATTRIBUTE;

API_AVAILABLE(ios(13))
void brdsdk_set_choice_callback(choice_callback_function _Nullable callback) DEPRECATED_ATTRIBUTE;

API_AVAILABLE(ios(13))
void brdsdk_init(const char *_Nullable benefit,
                 const char *_Nullable agree_btn,
                 const char *_Nullable disagree_btn,
                 const char *_Nullable opt_out_instructions,
                 const char *_Nullable appicon,
                 const char *_Nullable language,
                 bool skip_consent,
                 _ConsentColors *_Nullable colors,
                 _ConsentImageMeta *_Nullable background_image,
                 _ConsentActionMeta *_Nullable opt_in_info,
                 _ConsentActionMeta *_Nullable opt_out_info,
                 _ConsentFontsInfo *_Nullable fonts,
                 const char *_Nullable campaign
                 ) DEPRECATED_ATTRIBUTE;

#ifdef __cplusplus
}
#endif

NS_ASSUME_NONNULL_BEGIN
API_AVAILABLE(ios(13))
@interface brdsdk_facade : NSObject
@end DEPRECATED_ATTRIBUTE;
NS_ASSUME_NONNULL_END
