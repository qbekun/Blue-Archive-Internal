#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14C2150)
#define MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14C21A0)
#define MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14C37F0)
#define MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14C3B60)
#define MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14C3BC0)
#define MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14C3BD0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ConfrontationGaugeRecoverOverTimeEffectDAO_TypeDefinitionIndex = 15206;

	class ConfrontationGaugeRecoverOverTimeEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::System::Int32 Duration; // 0x70
		::System::Int32 Period; // 0x74
		::System::Boolean IsDispellable; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverOverTimeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverOverTimeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ConfrontationGaugeRecoverOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CONFRONTATIONGAUGERECOVEROVERTIMEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

