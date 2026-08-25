#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }

#define MX_LOGIC_DATA_STATUSADDEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F44D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatusAddEffectData_TypeDefinitionIndex = 13639;

	class StatusAddEffectData : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* TargetStatus; // 0x58
		::System::Int32 Duration; // 0x5C
		::System::Boolean Dispellable; // 0x60
		::System::Boolean IgnoreOppressionCheck; // 0x61

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

