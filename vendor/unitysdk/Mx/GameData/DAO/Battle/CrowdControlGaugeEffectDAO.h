#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class CrowdControlGaugeApplyType; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_CROWDCONTROLGAUGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14DB7E0)
#define MX_GAMEDATA_DAO_BATTLE_CROWDCONTROLGAUGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14DB840)
#define MX_GAMEDATA_DAO_BATTLE_CROWDCONTROLGAUGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14DDBF0)
#define MX_GAMEDATA_DAO_BATTLE_CROWDCONTROLGAUGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14DDF30)
#define MX_GAMEDATA_DAO_BATTLE_CROWDCONTROLGAUGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14DDC00)
#define MX_GAMEDATA_DAO_BATTLE_CROWDCONTROLGAUGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14E14C0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CrowdControlGaugeEffectDAO_TypeDefinitionIndex = 15216;

	class CrowdControlGaugeEffectDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::CrowdControlGaugeApplyType* ApplyCrowdControlType; // 0x58
		::System::Int32 Duration; // 0x5C
		::System::Int32 MaxGaugeValue; // 0x60
		::System::String* IgnoreLogicEffectTemplateIdList; // 0x68
		::System::String* MaxGaugeLogicEffectGroupIdList; // 0x70
		::System::Int64 GaugeReduceValuePerSecond; // 0x78
		::System::Int64 GaugeReduceStartDelay; // 0x80
		::System::Int32 GaugeFillCap; // 0x88
		::System::Boolean IsCalculateOppression; // 0x8C
		::System::Boolean Dispellable; // 0x8D

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CROWDCONTROLGAUGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CrowdControlGaugeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CrowdControlGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CROWDCONTROLGAUGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CROWDCONTROLGAUGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CrowdControlGaugeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CrowdControlGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CROWDCONTROLGAUGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CROWDCONTROLGAUGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CROWDCONTROLGAUGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

