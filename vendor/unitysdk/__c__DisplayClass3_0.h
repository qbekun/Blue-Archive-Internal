#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class ActionChangedEventArgs; }
namespace MX::Logic::BattleEntities { class BattleEntity; }

#define <>C__DISPLAYCLASS3_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x13E3800)
#define <>C__DISPLAYCLASS3_0__CHARACTER_ACTIONCHANGED_B__0_OFFSET UNITYSDK_OFFSET(0x13E40A0)

	inline static constexpr unsigned int <>c__DisplayClass3_0_TypeDefinitionIndex = 14567;

	class <>c__DisplayClass3_0 : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::ActionChangedEventArgs* e; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS3_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Character_ActionChanged_b__0(::MX::Logic::BattleEntities::BattleEntity* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::BattleEntity*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS3_0__CHARACTER_ACTIONCHANGED_B__0_OFFSET))(arg, nullptr);
		}

	};

