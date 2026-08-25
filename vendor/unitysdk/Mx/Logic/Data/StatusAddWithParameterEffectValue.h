#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::GameData::DAO::Battle { class StatusAddWithParameterEffectDAO; }

#define MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTVALUE_GET_TARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1240250)
#define MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x1240260)
#define MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1240270)
#define MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1240280)
#define MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTVALUE_GET_IGNOREOPPRESSIONCHECK_OFFSET UNITYSDK_OFFSET(0x1240390)
#define MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTVALUE_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x12403A0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatusAddWithParameterEffectValue_TypeDefinitionIndex = 13931;

	class StatusAddWithParameterEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* _TargetStatus_k__BackingField; // 0x48
		::System::Int32 _DurationFrame_k__BackingField; // 0x4C
		::System::Boolean _Dispellable_k__BackingField; // 0x50
		::System::Int64 _Parameter_k__BackingField; // 0x58
		::System::Boolean _IgnoreOppressionCheck_k__BackingField; // 0x60

		::MX::Logic::BattleEntities::HeroStatus* get_TargetStatus()
		{
			return ((::MX::Logic::BattleEntities::HeroStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTVALUE_GET_TARGETSTATUS_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::StatusAddWithParameterEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::StatusAddWithParameterEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreOppressionCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTVALUE_GET_IGNOREOPPRESSIONCHECK_OFFSET))(nullptr);
		}

		::System::Int64 get_Parameter()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHPARAMETEREFFECTVALUE_GET_PARAMETER_OFFSET))(nullptr);
		}

	};
}

