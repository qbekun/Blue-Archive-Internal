#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class CountEntityListCombinedModifier; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define <>C__DISPLAYCLASS20_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1223710)
#define <>C__DISPLAYCLASS20_0__CHECKLOGICEFFECTTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1224830)

	inline static constexpr unsigned int <>c__DisplayClass20_0_TypeDefinitionIndex = 13753;

	class <>c__DisplayClass20_0 : public Il2CppObject
	{
	public:
		::MX::Logic::Data::CountEntityListCombinedModifier* __4__this; // 0x10
		::System::Int32 count; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS20_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _CheckLogicEffectType_b__0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS20_0__CHECKLOGICEFFECTTYPE_B__0_OFFSET))(arg, nullptr);
		}

	};

