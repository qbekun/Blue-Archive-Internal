#pragma once
#include "unitysdk.h"

#define CONDITIONFLAGPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2623180)
#define CONDITIONFLAGPAIR_ISSATISFIED_OFFSET UNITYSDK_OFFSET(0x2623010)

	inline static constexpr unsigned int ConditionFlagPair_TypeDefinitionIndex = 6536;

	class ConditionFlagPair : public Il2CppObject
	{
	public:
		::System::Boolean isNot; // 0x10
		::System::Int64 conditionId; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDITIONFLAGPAIR_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsSatisfied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDITIONFLAGPAIR_ISSATISFIED_OFFSET))(nullptr);
		}

	};

