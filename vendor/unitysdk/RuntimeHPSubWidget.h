#pragma once
#include "unitysdk.h"

class ManageUIWidgets;

#define RUNTIMEHPSUBWIDGET_AWAKE_OFFSET UNITYSDK_OFFSET(0x25F1C10)
#define RUNTIMEHPSUBWIDGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x25F1C80)
#define RUNTIMEHPSUBWIDGET_REGISTERWIDGETS_OFFSET UNITYSDK_OFFSET(0x25F1C90)
#define RUNTIMEHPSUBWIDGET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x25F1CE0)

	inline static constexpr unsigned int RuntimeHPSubWidget_TypeDefinitionIndex = 6425;

	class RuntimeHPSubWidget : public Il2CppObject
	{
	public:
		Il2CppObject* widgets; // 0x18
		ManageUIWidgets* removeFromWidgetList; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEHPSUBWIDGET_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEHPSUBWIDGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterWidgets(ManageUIWidgets* arg, ManageUIWidgets* arg2)
		{
			((::System::Void(*)(ManageUIWidgets*, ManageUIWidgets*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEHPSUBWIDGET_REGISTERWIDGETS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEHPSUBWIDGET_ONDESTROY_OFFSET))(nullptr);
		}

	};

