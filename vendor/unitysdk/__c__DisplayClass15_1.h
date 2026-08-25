#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class FurnitureDB; }

#define <>C__DISPLAYCLASS15_1_.CTOR_OFFSET UNITYSDK_OFFSET(0xF9D1F0)
#define <>C__DISPLAYCLASS15_1__VALIDATEANDCALCSHIFTINGCRAFTCOUNT_B__1_OFFSET UNITYSDK_OFFSET(0xF9D8B0)

	inline static constexpr unsigned int <>c__DisplayClass15_1_TypeDefinitionIndex = 12305;

	class <>c__DisplayClass15_1 : public Il2CppObject
	{
	public:
		Il2CppObject* pair; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS15_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ValidateAndCalcShiftingCraftCount_b__1(::MX::GameLogic::DBModel::FurnitureDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::FurnitureDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS15_1__VALIDATEANDCALCSHIFTINGCRAFTCOUNT_B__1_OFFSET))(arg, nullptr);
		}

	};

