#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_ADDGROGGYBYDAMAGEDRATIOEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14A7000)
#define MX_GAMEDATA_DAO_BATTLE_ADDGROGGYBYDAMAGEDRATIOEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14A7370)
#define MX_GAMEDATA_DAO_BATTLE_ADDGROGGYBYDAMAGEDRATIOEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14A73D0)
#define MX_GAMEDATA_DAO_BATTLE_ADDGROGGYBYDAMAGEDRATIOEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14A9D50)
#define MX_GAMEDATA_DAO_BATTLE_ADDGROGGYBYDAMAGEDRATIOEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14A9DA0)
#define MX_GAMEDATA_DAO_BATTLE_ADDGROGGYBYDAMAGEDRATIOEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14ABA80)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AddGroggyByDamagedRatioEffectDAO_TypeDefinitionIndex = 15194;

	class AddGroggyByDamagedRatioEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::EndCondition* EndCondition; // 0x58
		::System::String* EndConditionArgument; // 0x60
		::System::Int64 GroggyRatioByDamaged; // 0x68
		::System::Boolean Dispellable; // 0x70

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDGROGGYBYDAMAGEDRATIOEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDGROGGYBYDAMAGEDRATIOEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AddGroggyByDamagedRatioEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AddGroggyByDamagedRatioEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDGROGGYBYDAMAGEDRATIOEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDGROGGYBYDAMAGEDRATIOEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AddGroggyByDamagedRatioEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AddGroggyByDamagedRatioEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDGROGGYBYDAMAGEDRATIOEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ADDGROGGYBYDAMAGEDRATIOEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

