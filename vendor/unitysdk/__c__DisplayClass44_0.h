#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::Battles { class CarrierSkillCard; }

#define <>C__DISPLAYCLASS44_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x139CF90)
#define <>C__DISPLAYCLASS44_0__FINDCARRIERENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x139D280)

	inline static constexpr unsigned int <>c__DisplayClass44_0_TypeDefinitionIndex = 14445;

	class <>c__DisplayClass44_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* entityId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS44_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FindCarrierEntity_b__0(::MX::Logic::Battles::CarrierSkillCard* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Battles::CarrierSkillCard*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS44_0__FINDCARRIERENTITY_B__0_OFFSET))(arg, nullptr);
		}

	};

