#pragma once
#include "unitysdk.h"

class SortingRule;

#define EVENTBONUSCHARGROUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2474A50)

	inline static constexpr unsigned int EventBonusCharGroup_TypeDefinitionIndex = 5653;

	class EventBonusCharGroup : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Characters; // 0x10
		SortingRule* SortingRule; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBONUSCHARGROUP_.CTOR_OFFSET))(nullptr);
		}

	};

