#pragma once
#include "unitysdk.h"

namespace MX::Logic::BattleEntities { class DotAbility; }

#define AMPLIFYDOTUTIL_CONTAINSAMPLIFYDOTTARGET_OFFSET UNITYSDK_OFFSET(0x2185DD0)

	inline static constexpr unsigned int AmplifyDoTUtil_TypeDefinitionIndex = 4060;

	class AmplifyDoTUtil : public Il2CppObject
	{
	public:
		::System::Boolean ContainsAmplifyDoTTarget(::MX::Logic::BattleEntities::DotAbility* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::BattleEntities::DotAbility*, ::PVOID))((::PBYTE)hIl2Cpp + AMPLIFYDOTUTIL_CONTAINSAMPLIFYDOTTARGET_OFFSET))(arg, nullptr);
		}

	};

