#pragma once
#include "../../unitysdk.h"

#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCB570)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCB6F0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_INITDEFAULTWIDGETDATA_OFFSET UNITYSDK_OFFSET(0x9CCB620)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GETDEFAULTERRORCORRECTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9CCB600)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GETDEFAULTLOGOSIZEPERCENT_OFFSET UNITYSDK_OFFSET(0x9CCB610)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GETMINLOGOSIZEPERCENT_OFFSET UNITYSDK_OFFSET(0x9CCB790)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GETMAXLOGOSIZEPERCENT_OFFSET UNITYSDK_OFFSET(0x9CCB7A0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_TEXTCONTENT_OFFSET UNITYSDK_OFFSET(0x9CCB7B0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_TEXTCONTENT_OFFSET UNITYSDK_OFFSET(0x9CCB7C0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_USELOGOIMAGE_OFFSET UNITYSDK_OFFSET(0x9CCB7D0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_USELOGOIMAGE_OFFSET UNITYSDK_OFFSET(0x9CCB7E0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_LOGOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9CCB7F0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_LOGOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9CCB800)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_ERRORCORRECTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9CCB810)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_ERRORCORRECTIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9CCB820)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_LOGOSIZEPERCENT_OFFSET UNITYSDK_OFFSET(0x9CCB830)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_LOGOSIZEPERCENT_OFFSET UNITYSDK_OFFSET(0x9CCB840)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_USEWIDGETBACKGROUNDIMAGE_OFFSET UNITYSDK_OFFSET(0x9CCB870)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_USEWIDGETBACKGROUNDIMAGE_OFFSET UNITYSDK_OFFSET(0x9CCB880)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_WIDGETBACKGROUNDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9CCB890)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_WIDGETBACKGROUNDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9CCB8A0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_USEWIDGETCUSTOMCOLOR_OFFSET UNITYSDK_OFFSET(0x9CCB8B0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_USEWIDGETCUSTOMCOLOR_OFFSET UNITYSDK_OFFSET(0x9CCB8C0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_WIDGETCUSTOMCOLOR_OFFSET UNITYSDK_OFFSET(0x9CCB8D0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_WIDGETCUSTOMCOLOR_OFFSET UNITYSDK_OFFSET(0x9CCB8E0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_WIDGETTITLE_OFFSET UNITYSDK_OFFSET(0x9CCB8F0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_WIDGETTITLE_OFFSET UNITYSDK_OFFSET(0x9CCB900)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_WIDGETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9CCB910)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_WIDGETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x9CCB920)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_WIDGETLOCALIZATIONCODE_OFFSET UNITYSDK_OFFSET(0x9CCB930)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_WIDGETLOCALIZATIONCODE_OFFSET UNITYSDK_OFFSET(0x9CCB940)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_USESHORTCUT_OFFSET UNITYSDK_OFFSET(0x9CCB9F0)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_USESHORTCUT_OFFSET UNITYSDK_OFFSET(0x9CCBA00)
#define NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CCBA10)

namespace NPA::Promotion
{
	inline static constexpr unsigned int NXPToyCustomQRCodeInfo_TypeDefinitionIndex = 27363;

	class NXPToyCustomQRCodeInfo : public Il2CppObject
	{
	public:
		::System::String* textContent; // 0x10
		::System::Boolean useLogoImage; // 0x18
		::System::String* logoImagePath; // 0x20
		::System::Int32 errorCorrectionLevel; // 0x28
		::System::Int32 logoSizePercent; // 0x2C
		::System::Boolean useWidgetBackgroundImage; // 0x30
		::System::String* widgetBackgroundImagePath; // 0x38
		::System::Boolean useWidgetCustomColor; // 0x40
		::System::String* widgetCustomColor; // 0x48
		::System::String* widgetTitle; // 0x50
		::System::String* widgetDescription; // 0x58
		::System::String* widgetLocalizationCode; // 0x60
		::System::Boolean useShortCut; // 0x68
		::System::Int32 DefaultErrorCorrectionLevel; // 0x0
		::System::Int32 DefaultLogoSizePercent; // 0x0
		::System::Int32 MinLogoSizePercent; // 0x0
		::System::Int32 MaxLogoSizePercent; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_.CTOR_OFFSET))(str, arg, str, arg, arg, nullptr);
		}

		::System::Void InitDefaultWidgetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_INITDEFAULTWIDGETDATA_OFFSET))(nullptr);
		}

		::System::Int32 GetDefaultErrorCorrectionLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GETDEFAULTERRORCORRECTIONLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 GetDefaultLogoSizePercent()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GETDEFAULTLOGOSIZEPERCENT_OFFSET))(nullptr);
		}

		::System::Int32 GetMinLogoSizePercent()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GETMINLOGOSIZEPERCENT_OFFSET))(nullptr);
		}

		::System::Int32 GetMaxLogoSizePercent()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GETMAXLOGOSIZEPERCENT_OFFSET))(nullptr);
		}

		::System::String* get_TextContent()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_TEXTCONTENT_OFFSET))(nullptr);
		}

		::System::Void set_TextContent(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_TEXTCONTENT_OFFSET))(str, nullptr);
		}

		::System::Boolean get_UseLogoImage()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_USELOGOIMAGE_OFFSET))(nullptr);
		}

		::System::Void set_UseLogoImage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_USELOGOIMAGE_OFFSET))(arg, nullptr);
		}

		::System::String* get_LogoImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_LOGOIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_LogoImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_LOGOIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Int32 get_ErrorCorrectionLevel()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_ERRORCORRECTIONLEVEL_OFFSET))(nullptr);
		}

		::System::Void set_ErrorCorrectionLevel(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_ERRORCORRECTIONLEVEL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LogoSizePercent()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_LOGOSIZEPERCENT_OFFSET))(nullptr);
		}

		::System::Void set_LogoSizePercent(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_LOGOSIZEPERCENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_UseWidgetBackgroundImage()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_USEWIDGETBACKGROUNDIMAGE_OFFSET))(nullptr);
		}

		::System::Void set_UseWidgetBackgroundImage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_USEWIDGETBACKGROUNDIMAGE_OFFSET))(arg, nullptr);
		}

		::System::String* get_WidgetBackgroundImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_WIDGETBACKGROUNDIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_WidgetBackgroundImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_WIDGETBACKGROUNDIMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::Boolean get_UseWidgetCustomColor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_USEWIDGETCUSTOMCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_UseWidgetCustomColor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_USEWIDGETCUSTOMCOLOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_WidgetCustomColor()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_WIDGETCUSTOMCOLOR_OFFSET))(nullptr);
		}

		::System::Void set_WidgetCustomColor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_WIDGETCUSTOMCOLOR_OFFSET))(str, nullptr);
		}

		::System::String* get_WidgetTitle()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_WIDGETTITLE_OFFSET))(nullptr);
		}

		::System::Void set_WidgetTitle(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_WIDGETTITLE_OFFSET))(str, nullptr);
		}

		::System::String* get_WidgetDescription()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_WIDGETDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void set_WidgetDescription(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_WIDGETDESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::String* get_WidgetLocalizationCode()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_WIDGETLOCALIZATIONCODE_OFFSET))(nullptr);
		}

		::System::Void set_WidgetLocalizationCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_WIDGETLOCALIZATIONCODE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_UseShortCut()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_GET_USESHORTCUT_OFFSET))(nullptr);
		}

		::System::Void set_UseShortCut(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_SET_USESHORTCUT_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PROMOTION_NXPTOYCUSTOMQRCODEINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

