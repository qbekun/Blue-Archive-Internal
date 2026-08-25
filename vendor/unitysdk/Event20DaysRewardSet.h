#pragma once
#include "unitysdk.h"

#define EVENT20DAYSREWARDSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x22145C0)

	inline static constexpr unsigned int Event20DaysRewardSet_TypeDefinitionIndex = 4371;

	class Event20DaysRewardSet : public Il2CppObject
	{
	public:
		Il2CppObject* Grids; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENT20DAYSREWARDSET_.CTOR_OFFSET))(nullptr);
		}

	};

