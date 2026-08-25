#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }

#define <>C__DISPLAYCLASS90_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x1149DD0)
#define <>C__DISPLAYCLASS90_0__REMOVEBULLETARMORDAMAGEFACTOROVERRIDETABLE_B__0_OFFSET UNITYSDK_OFFSET(0x1149DE0)

	inline static constexpr unsigned int <>c__DisplayClass90_0_TypeDefinitionIndex = 13117;

	class <>c__DisplayClass90_0 : public Il2CppObject
	{
	public:
		::System::Int32 channel; // 0x10
		::MX::Logic::BattleEntities::SkillSlot* skillSlot; // 0x14
		Il2CppObject* __9__0; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS90_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _RemoveBulletArmorDamageFactorOverrideTable_b__0(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS90_0__REMOVEBULLETARMORDAMAGEFACTOROVERRIDETABLE_B__0_OFFSET))(arg, nullptr);
		}

	};

