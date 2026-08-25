#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEHEALEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x149FA20)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEHEALEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x149FA30)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEHEALEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x149FCF0)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEHEALEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x149FD40)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEHEALEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14A1EB0)
#define MX_GAMEDATA_DAO_BATTLE_ACCUMULATEHEALEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14A1F10)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AccumulateHealEffectDAO_TypeDefinitionIndex = 15190;

	class AccumulateHealEffectDAO : public Il2CppObject
	{
	public:
		::System::Boolean ForceFloaterHide; // 0x58
		::System::Boolean ApplyHealRate; // 0x59
		::System::Boolean ApplyHealRateByArmorType; // 0x5A
		::System::Boolean ApplyHealRateByBulletType; // 0x5B

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEHEALEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEHEALEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEHEALEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AccumulateHealEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AccumulateHealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEHEALEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEHEALEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AccumulateHealEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AccumulateHealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ACCUMULATEHEALEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

