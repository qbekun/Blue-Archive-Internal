#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class EntityId; }
namespace MX::Logic::BattleEntities { class SupportActor; }

#define <>C__DISPLAYCLASS152_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x138F200)
#define <>C__DISPLAYCLASS152_0__FINDENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x1397680)

	inline static constexpr unsigned int <>c__DisplayClass152_0_TypeDefinitionIndex = 14424;

	class <>c__DisplayClass152_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::EntityId* id; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS152_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FindEntity_b__0(::MX::Logic::BattleEntities::SupportActor* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::SupportActor*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS152_0__FINDENTITY_B__0_OFFSET))(arg, nullptr);
		}

	};

