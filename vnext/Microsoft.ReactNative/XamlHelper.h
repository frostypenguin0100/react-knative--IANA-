// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#pragma once
#include "XamlHelper.g.h"
#include "Base/FollyIncludes.h"

namespace winrt::Microsoft::ReactNative::implementation {

struct XamlHelper : XamlHelperT<XamlHelper> {
  XamlHelper() = default;

  static xaml::Media::Brush BrushFrom(JSValueArgWriter const &valueProvider) noexcept;
  static Windows::UI::Color ColorFrom(JSValueArgWriter const &valueProvider) noexcept;

  static xaml::DependencyProperty ReactTagProperty() noexcept;
  static int64_t GetReactTag(xaml::DependencyObject const &dependencyObject) noexcept;
  static void SetReactTag(xaml::DependencyObject const &dependencyObject, int64_t tag) noexcept;

  static folly::dynamic GetFollyDynamicFromValueProvider(JSValueArgWriter const &valueProvider) noexcept;
};

} // namespace winrt::Microsoft::ReactNative::implementation

namespace winrt::Microsoft::ReactNative::factory_implementation {
struct XamlHelper : XamlHelperT<XamlHelper, implementation::XamlHelper> {};
} // namespace winrt::Microsoft::ReactNative::factory_implementation
