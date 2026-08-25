#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }

#define MX_LOGIC_DATA_STATUSREMOVEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4500)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatusRemoveEffectData_TypeDefinitionIndex = 13642;

	class StatusRemoveEffectData : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* TargetStatus; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSREMOVEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

