#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles { class Battle; }
namespace MX::Logic::BattleEntities { class DotAbility; }
namespace MX::Logic::BattleEntities { class DotProcessor; }

#define IAMPLIFYDOTEFFECT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define IAMPLIFYDOTEFFECT_APPLYDOTAMPLIFYTO_OFFSET UNITYSDK_OFFSET(0x000000)
#define IAMPLIFYDOTEFFECT_ISTARGETTEMPLATE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IAmplifyDoTEffect_TypeDefinitionIndex = 4059;

	class IAmplifyDoTEffect : public Il2CppObject
	{
	public:
		::System::Void Activate(::MX::Logic::Battles::Battle* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Logic::Battles::Battle*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + IAMPLIFYDOTEFFECT_ACTIVATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void ApplyDotAmplifyTo(::MX::Logic::BattleEntities::DotAbility* arg, ::MX::Logic::BattleEntities::DotProcessor* arg2)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::DotAbility*, ::MX::Logic::BattleEntities::DotProcessor*, ::PVOID))((::PBYTE)hIl2Cpp + IAMPLIFYDOTEFFECT_APPLYDOTAMPLIFYTO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean IsTargetTemplate(::MX::Logic::BattleEntities::DotAbility* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::DotAbility*, ::PVOID))((::PBYTE)hIl2Cpp + IAMPLIFYDOTEFFECT_ISTARGETTEMPLATE_OFFSET))(arg, nullptr);
		}

	};

