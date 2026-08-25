#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class BattleEntity; }

#define <>C__DISPLAYCLASS25_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1224040)
#define <>C__DISPLAYCLASS25_0__CHECKARMORTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1224C20)

	inline static constexpr unsigned int <>c__DisplayClass25_0_TypeDefinitionIndex = 13758;

	class <>c__DisplayClass25_0 : public Il2CppObject
	{
	public:
		Il2CppObject* armorTypeList; // 0x10
		::System::Int32 count; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS25_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CheckArmorType_b__0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS25_0__CHECKARMORTYPE_B__0_OFFSET))(arg, nullptr);
		}

	};

