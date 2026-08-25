#pragma once
#include "unitysdk.h"

#define UILOCALIZE_ONLOCALIZE_OFFSET UNITYSDK_OFFSET(0x242D920)
#define UILOCALIZE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x242DD80)
#define UILOCALIZE_.CTOR_OFFSET UNITYSDK_OFFSET(0x242DD90)
#define UILOCALIZE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x242DA20)
#define UILOCALIZE_START_OFFSET UNITYSDK_OFFSET(0x242DE50)

	inline static constexpr unsigned int UILocalize_TypeDefinitionIndex = 242;

	class UILocalize : public Il2CppObject
	{
	public:
		::System::String* key; // 0x18
		::System::Boolean mStarted; // 0x20

		::System::Void OnLocalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOCALIZE_ONLOCALIZE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOCALIZE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOCALIZE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UILOCALIZE_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOCALIZE_START_OFFSET))(nullptr);
		}

	};

