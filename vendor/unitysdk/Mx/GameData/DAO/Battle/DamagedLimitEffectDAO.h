#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class ExtraStatType; }
namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDLIMITEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14E9300)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDLIMITEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14E9730)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDLIMITEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14ECA10)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDLIMITEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14EC9C0)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDLIMITEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14EEDA0)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDLIMITEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14EEE00)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int DamagedLimitEffectDAO_TypeDefinitionIndex = 15220;

	class DamagedLimitEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 LimitAmount; // 0x58
		::System::Int64 LimitHPRate; // 0x60
		::MX::Logic::Skills::ExtraStatType* ExtraStatType; // 0x68
		::FlatData::EndCondition* EndCondition; // 0x6C
		::System::String* EndConditionArgumentFirst; // 0x70
		::System::String* EndConditionArgumentSecond; // 0x78
		::System::Boolean Dispellable; // 0x80

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDLIMITEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DamagedLimitEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DamagedLimitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDLIMITEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DamagedLimitEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DamagedLimitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDLIMITEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDLIMITEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDLIMITEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDLIMITEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

