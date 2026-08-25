#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class AccumulateCheckType; }
namespace MX::Logic::Skills { class TargetSideId; }
namespace FlatData { class StatType; }
namespace MX::Logic::Data { class AccumulateExecuteCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x148B2B0)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1490490)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14904A0)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1490A40)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14942D0)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1490440)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AccumulateEffectDAO_TypeDefinitionIndex = 15186;

	class AccumulateEffectDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Data::AccumulateCheckType* AccumulateType; // 0x58
		::System::Int64 AccumulateRate; // 0x60
		::MX::Logic::Skills::TargetSideId* AccumulateCasterTargetSideFilter; // 0x68
		::FlatData::StatType* LimitSourceStat; // 0x6C
		::System::Int64 LimitSourceStatRate; // 0x70
		::System::Int64 LimitAmount; // 0x78
		::MX::Logic::Data::AccumulateExecuteCondition* ExecuteConditionType; // 0x80
		::System::Int64 ExecuteConditionAmount; // 0x88
		::System::Int64 Duration; // 0x90
		::System::String* ExecuteAccumulateLogicEffectOnly; // 0x98
		::System::String* ExecuteLogicEffectGroupId01; // 0xA0
		::System::String* ExecuteLogicEffectGroupId02; // 0xA8
		::System::String* ExecuteLogicEffectGroupId03; // 0xB0
		::System::String* ExecuteLogicEffectGroupId04; // 0xB8

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AccumulateEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AccumulateEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AccumulateEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AccumulateEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

