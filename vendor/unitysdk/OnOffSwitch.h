#pragma once
#include "unitysdk.h"

#define ONOFFSWITCH_SWITCH_OFFSET UNITYSDK_OFFSET(0x2685740)
#define ONOFFSWITCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x26857E0)

	inline static constexpr unsigned int OnOffSwitch_TypeDefinitionIndex = 6760;

	class OnOffSwitch : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* onObjects; // 0x18
		::Il2CppArray<::System::Object*>* offObjects; // 0x20

		::System::Void Switch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOFFSWITCH_SWITCH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOFFSWITCH_.CTOR_OFFSET))(nullptr);
		}

	};

