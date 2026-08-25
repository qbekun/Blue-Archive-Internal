#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14EEEB0)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14EEF10)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14EEF60)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14EF2A0)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F2530)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14EEF70)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int DamagedMultiplierbyDamageOverTimeEffectDAO_TypeDefinitionIndex = 15222;

	class DamagedMultiplierbyDamageOverTimeEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 AddRate; // 0x58
		::System::String* ApplyLogicEffectTemplateId; // 0x60
		::FlatData::EndCondition* RemoveCondition; // 0x68
		::System::String* RemoveConditionArgument; // 0x70
		::System::Boolean IsDispellable; // 0x78

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return ((::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DamagedMultiplierbyDamageOverTimeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DamagedMultiplierbyDamageOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DamagedMultiplierbyDamageOverTimeEffectDAO&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DamagedMultiplierbyDamageOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYDAMAGEOVERTIMEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

