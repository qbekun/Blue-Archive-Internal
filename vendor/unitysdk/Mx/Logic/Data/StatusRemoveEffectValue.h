#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::GameData::DAO::Battle { class StatusRemoveEffectDAO; }

#define MX_LOGIC_DATA_STATUSREMOVEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1240530)
#define MX_LOGIC_DATA_STATUSREMOVEEFFECTVALUE_GET_TARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x12405B0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatusRemoveEffectValue_TypeDefinitionIndex = 13933;

	class StatusRemoveEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* _TargetStatus_k__BackingField; // 0x48

		::System::Void .ctor(::MX::GameData::DAO::Battle::StatusRemoveEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::StatusRemoveEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSREMOVEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Logic::BattleEntities::HeroStatus* get_TargetStatus()
		{
			return ((::MX::Logic::BattleEntities::HeroStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSREMOVEEFFECTVALUE_GET_TARGETSTATUS_OFFSET))(nullptr);
		}

	};
}

