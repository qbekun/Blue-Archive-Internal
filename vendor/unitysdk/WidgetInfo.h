#pragma once
#include "unitysdk.h"

class UIWidget;
namespace UnityEngine { class Rect; }

#define WIDGETINFO_SET_SCREENRECT_OFFSET UNITYSDK_OFFSET(0x260FF00)
#define WIDGETINFO_GET_SCREENRECT_OFFSET UNITYSDK_OFFSET(0x260FF10)
#define WIDGETINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x260FF20)
#define WIDGETINFO_GET_WIDGET_OFFSET UNITYSDK_OFFSET(0x260FF30)
#define WIDGETINFO_SET_WIDGET_OFFSET UNITYSDK_OFFSET(0x260FF40)

	inline static constexpr unsigned int WidgetInfo_TypeDefinitionIndex = 6488;

	class WidgetInfo : public Il2CppObject
	{
	public:
		UIWidget* _Widget_k__BackingField; // 0x10
		::UnityEngine::Rect* _ScreenRect_k__BackingField; // 0x18

		::System::Void set_ScreenRect(::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETINFO_SET_SCREENRECT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rect* get_ScreenRect()
		{
			return ((::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETINFO_GET_SCREENRECT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETINFO_.CTOR_OFFSET))(nullptr);
		}

		UIWidget* get_Widget()
		{
			return ((UIWidget*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETINFO_GET_WIDGET_OFFSET))(nullptr);
		}

		::System::Void set_Widget(UIWidget* arg)
		{
			((::System::Void(*)(UIWidget*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETINFO_SET_WIDGET_OFFSET))(arg, nullptr);
		}

	};

