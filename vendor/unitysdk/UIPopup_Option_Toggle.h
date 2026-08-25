#pragma once
#include "unitysdk.h"

#define UIPOPUP_OPTION_TOGGLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x271A110)
#define UIPOPUP_OPTION_TOGGLE_ONTOGGLE_OFFSET UNITYSDK_OFFSET(0x271A510)
#define UIPOPUP_OPTION_TOGGLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x271A640)
#define UIPOPUP_OPTION_TOGGLE_FORCEENABLE_OFFSET UNITYSDK_OFFSET(0x271A6C0)

	inline static constexpr unsigned int UIPopup_Option_Toggle_TypeDefinitionIndex = 7153;

	class UIPopup_Option_Toggle : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Toggle; // 0x28
		Il2CppObject* table; // 0x30

		::System::Void Initialize(::System::Object* arg, ::System::Object* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TOGGLE_INITIALIZE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnToggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TOGGLE_ONTOGGLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TOGGLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ForceEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TOGGLE_FORCEENABLE_OFFSET))(arg, nullptr);
		}

	};

