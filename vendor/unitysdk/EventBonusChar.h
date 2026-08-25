#pragma once
#include "unitysdk.h"

class CollectionUnitObjectBase;

#define EVENTBONUSCHAR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2474A60)

	inline static constexpr unsigned int EventBonusChar_TypeDefinitionIndex = 5654;

	class EventBonusChar : public Il2CppObject
	{
	public:
		::System::Int64 EventContentId; // 0x10
		CollectionUnitObjectBase* CollectionObject; // 0x18
		::System::Boolean IsSelect; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTBONUSCHAR_.CTOR_OFFSET))(nullptr);
		}

	};

