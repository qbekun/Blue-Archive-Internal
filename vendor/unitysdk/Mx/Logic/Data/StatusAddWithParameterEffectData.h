#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }

#define MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F44E0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatusAddWithParameterEffectData_TypeDefinitionIndex = 13640;

	class StatusAddWithParameterEffectData : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* TargetStatus; // 0x58
		::System::Int32 Duration; // 0x5C
		::System::Boolean Dispellable; // 0x60
		::System::Int64 Parameter; // 0x68
		::System::Boolean IgnoreOppressionCheck; // 0x70

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

