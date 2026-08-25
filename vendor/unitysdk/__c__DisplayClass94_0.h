#pragma once
#include "unitysdk.h"

namespace MX::Core::Physics2D::Bodies { class Body2D; }
namespace MX::Logic::BattleEntities { class EffectArea; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define <>C__DISPLAYCLASS94_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x11A6C70)
#define <>C__DISPLAYCLASS94_0__FINDCOLLIDETARGETS_B__0_OFFSET UNITYSDK_OFFSET(0x11A7040)
#define <>C__DISPLAYCLASS94_0__FINDCOLLIDETARGETS_B__1_OFFSET UNITYSDK_OFFSET(0x11A7070)

	inline static constexpr unsigned int <>c__DisplayClass94_0_TypeDefinitionIndex = 13310;

	class <>c__DisplayClass94_0 : public Il2CppObject
	{
	public:
		::MX::Core::Physics2D::Bodies::Body2D* shape; // 0x10
		::MX::Logic::BattleEntities::EffectArea* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS94_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _FindCollideTargets_b__0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS94_0__FINDCOLLIDETARGETS_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _FindCollideTargets_b__1(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS94_0__FINDCOLLIDETARGETS_B__1_OFFSET))(arg, nullptr);
		}

	};

