#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EndCondition; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class DamagedMultiplierbyChangeDamageOverTimeEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYCHANGEDAMAGEOVERTIMEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x14F49B0)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYCHANGEDAMAGEOVERTIMEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x14F4CF0)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYCHANGEDAMAGEOVERTIMEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F4D50)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYCHANGEDAMAGEOVERTIMEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x14F8030)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYCHANGEDAMAGEOVERTIMEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x14F49C0)
#define MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYCHANGEDAMAGEOVERTIMEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x14F7FE0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int DamagedMultiplierbyChangeDamageOverTimeEffectDAO_TypeDefinitionIndex = 15224;

	class DamagedMultiplierbyChangeDamageOverTimeEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 AddRate; // 0x58
		::System::String* ApplyLogicEffectTemplateId; // 0x60
		::FlatData::EndCondition* RemoveCondition; // 0x68
		::System::String* RemoveConditionArgument; // 0x70
		::System::Boolean IsDispellable; // 0x78

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYCHANGEDAMAGEOVERTIMEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYCHANGEDAMAGEOVERTIMEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DamagedMultiplierbyChangeDamageOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DamagedMultiplierbyChangeDamageOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYCHANGEDAMAGEOVERTIMEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DamagedMultiplierbyChangeDamageOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DamagedMultiplierbyChangeDamageOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYCHANGEDAMAGEOVERTIMEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYCHANGEDAMAGEOVERTIMEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DAMAGEDMULTIPLIERBYCHANGEDAMAGEOVERTIMEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

