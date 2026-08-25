#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugDisplaySettingsRendering; }

#define WIDGETFACTORY_CREATEPIXELVALUERANGEMAX_OFFSET UNITYSDK_OFFSET(0xA0349D0)
#define WIDGETFACTORY_CREATEOVERDRAW_OFFSET UNITYSDK_OFFSET(0xA030CC0)
#define WIDGETFACTORY_CREATEPIXELVALUERANGEMIN_OFFSET UNITYSDK_OFFSET(0xA034BA0)
#define WIDGETFACTORY_CREATEPOSTPROCESSING_OFFSET UNITYSDK_OFFSET(0xA0304F0)
#define WIDGETFACTORY_CREATEPIXELVALIDATIONMODE_OFFSET UNITYSDK_OFFSET(0xA034D70)
#define WIDGETFACTORY_CREATEPIXELVALIDATIONCHANNELS_OFFSET UNITYSDK_OFFSET(0xA035180)
#define WIDGETFACTORY_CREATEMAPOVERLAYS_OFFSET UNITYSDK_OFFSET(0xA0354B0)
#define WIDGETFACTORY_CREATEMSAA_OFFSET UNITYSDK_OFFSET(0xA030350)
#define WIDGETFACTORY_CREATEADDITIONALWIREFRAMESHADERVIEWS_OFFSET UNITYSDK_OFFSET(0xA030780)
#define WIDGETFACTORY_CREATEHDR_OFFSET UNITYSDK_OFFSET(0xA0301B0)
#define WIDGETFACTORY_CREATEWIREFRAMENOTSUPPORTEDWARNING_OFFSET UNITYSDK_OFFSET(0xA030B80)
#define WIDGETFACTORY_CREATEMAPOVERLAYSIZE_OFFSET UNITYSDK_OFFSET(0xA035820)

	inline static constexpr unsigned int WidgetFactory_TypeDefinitionIndex = 32577;

	class WidgetFactory : public Il2CppObject
	{
	public:
		Widget* CreatePixelValueRangeMax(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			return (return (Widget*(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETFACTORY_CREATEPIXELVALUERANGEMAX_OFFSET))(arg, nullptr);
		}

		Widget* CreateOverdraw(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			return (return (Widget*(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETFACTORY_CREATEOVERDRAW_OFFSET))(arg, nullptr);
		}

		Widget* CreatePixelValueRangeMin(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			return (return (Widget*(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETFACTORY_CREATEPIXELVALUERANGEMIN_OFFSET))(arg, nullptr);
		}

		Widget* CreatePostProcessing(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			return (return (Widget*(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETFACTORY_CREATEPOSTPROCESSING_OFFSET))(arg, nullptr);
		}

		Widget* CreatePixelValidationMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			return (return (Widget*(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETFACTORY_CREATEPIXELVALIDATIONMODE_OFFSET))(arg, nullptr);
		}

		Widget* CreatePixelValidationChannels(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			return (return (Widget*(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETFACTORY_CREATEPIXELVALIDATIONCHANNELS_OFFSET))(arg, nullptr);
		}

		Widget* CreateMapOverlays(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			return (return (Widget*(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETFACTORY_CREATEMAPOVERLAYS_OFFSET))(arg, nullptr);
		}

		Widget* CreateMSAA(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			return (return (Widget*(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETFACTORY_CREATEMSAA_OFFSET))(arg, nullptr);
		}

		Widget* CreateAdditionalWireframeShaderViews(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			return (return (Widget*(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETFACTORY_CREATEADDITIONALWIREFRAMESHADERVIEWS_OFFSET))(arg, nullptr);
		}

		Widget* CreateHDR(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			return (return (Widget*(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETFACTORY_CREATEHDR_OFFSET))(arg, nullptr);
		}

		Widget* CreateWireframeNotSupportedWarning(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			return (return (Widget*(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETFACTORY_CREATEWIREFRAMENOTSUPPORTEDWARNING_OFFSET))(arg, nullptr);
		}

		Widget* CreateMapOverlaySize(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* arg)
		{
			return (return (Widget*(*)(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETFACTORY_CREATEMAPOVERLAYSIZE_OFFSET))(arg, nullptr);
		}

	};

