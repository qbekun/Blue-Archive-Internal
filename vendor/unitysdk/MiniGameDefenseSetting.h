#pragma once
#include "unitysdk.h"

#define MINIGAMEDEFENSESETTING_.CTOR_OFFSET UNITYSDK_OFFSET(0x26D2C70)

	inline static constexpr unsigned int MiniGameDefenseSetting_TypeDefinitionIndex = 7006;

	class MiniGameDefenseSetting : public Il2CppObject
	{
	public:
		::System::Boolean isFixedStatSet; // 0x10
		::System::Int32 fixedLevel; // 0x14
		::System::Int32 fixedStarGrade; // 0x18
		::System::Int32 fixedWeaponGrade; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINIGAMEDEFENSESETTING_.CTOR_OFFSET))(nullptr);
		}

	};

