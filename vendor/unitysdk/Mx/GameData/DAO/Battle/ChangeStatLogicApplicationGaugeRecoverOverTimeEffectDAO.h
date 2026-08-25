#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x164FC20)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1650050)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x16500B0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16500C0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1651780)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16517D0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO_TypeDefinitionIndex = 15340;

	class ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::MX::Logic::Skills::ExtraStatType* ExtraStatSource; // 0x70
		::System::Int64 ExtraStatRate; // 0x78
		::System::Int64 Duration; // 0x80
		::System::Int64 Period; // 0x88
		::System::Boolean IsDispellable; // 0x90

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEROVERTIMEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

