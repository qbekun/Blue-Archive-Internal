#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Skills { class ExtraStatType; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ChangeStatLogicApplicationGaugeRecoverEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x164BD50)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x164BDB0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x164C1E0)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x164E540)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x164E550)
#define MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x164E4F0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ChangeStatLogicApplicationGaugeRecoverEffectDAO_TypeDefinitionIndex = 15338;

	class ChangeStatLogicApplicationGaugeRecoverEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::MX::Logic::Skills::ExtraStatType* ExtraStatSource; // 0x70
		::System::Int64 ExtraStatRate; // 0x78

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeStatLogicApplicationGaugeRecoverEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

