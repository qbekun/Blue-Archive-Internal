#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MX::GameData::DAO::Battle { class StatusAddWithStringParameterEffectDAO; }

#define MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x12403B0)
#define MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x12403C0)
#define MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_GET_TARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x12403D0)
#define MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x12403E0)
#define MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_GET_IGNOREOPPRESSIONCHECK_OFFSET UNITYSDK_OFFSET(0x1240500)
#define MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_GET_PARAMETERSECOND_OFFSET UNITYSDK_OFFSET(0x1240510)
#define MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_GET_DISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1240520)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int StatusAddWithStringParameterEffectValue_TypeDefinitionIndex = 13932;

	class StatusAddWithStringParameterEffectValue : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* _TargetStatus_k__BackingField; // 0x48
		::System::Int32 _DurationFrame_k__BackingField; // 0x4C
		::System::Boolean _Dispellable_k__BackingField; // 0x50
		::System::String* _Parameter_k__BackingField; // 0x58
		::System::String* _ParameterSecond_k__BackingField; // 0x60
		::System::Boolean _IgnoreOppressionCheck_k__BackingField; // 0x68

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::String* get_Parameter()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_GET_PARAMETER_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::HeroStatus* get_TargetStatus()
		{
			return ((::MX::Logic::BattleEntities::HeroStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_GET_TARGETSTATUS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::StatusAddWithStringParameterEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::StatusAddWithStringParameterEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreOppressionCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_GET_IGNOREOPPRESSIONCHECK_OFFSET))(nullptr);
		}

		::System::String* get_ParameterSecond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_GET_PARAMETERSECOND_OFFSET))(nullptr);
		}

		::System::Boolean get_Dispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_STATUSADDWITHSTRINGPARAMETEREFFECTVALUE_GET_DISPELLABLE_OFFSET))(nullptr);
		}

	};
}

