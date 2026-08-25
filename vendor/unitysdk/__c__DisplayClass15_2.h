#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EquipmentDB; }

#define <>C__DISPLAYCLASS15_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xF9D200)
#define <>C__DISPLAYCLASS15_2__VALIDATEANDCALCSHIFTINGCRAFTCOUNT_B__2_OFFSET UNITYSDK_OFFSET(0xF9D900)

	inline static constexpr unsigned int <>c__DisplayClass15_2_TypeDefinitionIndex = 12306;

	class <>c__DisplayClass15_2 : public Il2CppObject
	{
	public:
		Il2CppObject* pair; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS15_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ValidateAndCalcShiftingCraftCount_b__2(::MX::GameLogic::DBModel::EquipmentDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::EquipmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS15_2__VALIDATEANDCALCSHIFTINGCRAFTCOUNT_B__2_OFFSET))(arg, nullptr);
		}

	};

