#pragma once
#include "unitysdk.h"

namespace MX::Visual::Battles { class BattleActorComponent; }

#define NONTARGETDESTRUCTIBLEONRAILSPROJECTILEVISUAL_CREATEENTITIES_OFFSET UNITYSDK_OFFSET(0x13BF3A0)
#define NONTARGETDESTRUCTIBLEONRAILSPROJECTILEVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x13BF890)

	inline static constexpr unsigned int NonTargetDestructibleOnRailsProjectileVisual_TypeDefinitionIndex = 1029;

	class NonTargetDestructibleOnRailsProjectileVisual : public Il2CppObject
	{
	public:
		::System::Void CreateEntities(::MX::Visual::Battles::BattleActorComponent* arg)
		{
			((::System::Void(*)(::MX::Visual::Battles::BattleActorComponent*, ::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEONRAILSPROJECTILEVISUAL_CREATEENTITIES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEONRAILSPROJECTILEVISUAL_.CTOR_OFFSET))(nullptr);
		}

	};

