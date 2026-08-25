#pragma once
#include "unitysdk.h"

class UIBase;

#define UISEASONALOPENER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISEASONALOPENER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISEASONALOPENER`1_SETINITCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISEASONALOPENER`1_SETNAMINGTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISEASONALOPENER`1_SETNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISEASONALOPENER`1_OPENUI_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISEASONALOPENER`1__OPENUI_B__12_0_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISEASONALOPENER`1__OPENUI_B__12_1_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISEASONALOPENER`1__OPENUI_B__12_2_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UISeasonalOpener`1_TypeDefinitionIndex = 7839;

	class UISeasonalOpener`1 : public Il2CppObject
	{
	public:
		Il2CppObject* initCallback; // 0x0
		Il2CppObject* afterLoadingCallback; // 0x0
		Il2CppObject* opendCallback; // 0x0
		Il2CppObject* uiNamingType; // 0x0
		::System::String* uiName; // 0x0
		::System::String* uiPath; // 0x0

		::System::Void .ctor(::System::Int64 arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Int64, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALOPENER`1_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALOPENER`1_.CTOR_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void SetInitCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALOPENER`1_SETINITCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetNamingType(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALOPENER`1_SETNAMINGTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALOPENER`1_SETNAME_OFFSET))(nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISEASONALOPENER`1_OPENUI_OFFSET))(nullptr);
		}

		::System::Void _OpenUI_b__12_0(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALOPENER`1__OPENUI_B__12_0_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__12_1(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALOPENER`1__OPENUI_B__12_1_OFFSET))(arg, nullptr);
		}

		::System::Void _OpenUI_b__12_2(UIBase* arg)
		{
			((::System::Void(*)(UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UISEASONALOPENER`1__OPENUI_B__12_2_OFFSET))(arg, nullptr);
		}

	};

