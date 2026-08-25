#pragma once
#include "../../../../unitysdk.h"

namespace FlatData { class EquipmentOptionType; }
namespace MX::Logic::Skills::LogicEffects { class StatEvalType; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class EquipmentOptionChangeEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_EQUIPMENTOPTIONCHANGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1524BF0)
#define MX_GAMEDATA_DAO_BATTLE_EQUIPMENTOPTIONCHANGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1524C50)
#define MX_GAMEDATA_DAO_BATTLE_EQUIPMENTOPTIONCHANGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1525080)
#define MX_GAMEDATA_DAO_BATTLE_EQUIPMENTOPTIONCHANGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1525090)
#define MX_GAMEDATA_DAO_BATTLE_EQUIPMENTOPTIONCHANGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1527370)
#define MX_GAMEDATA_DAO_BATTLE_EQUIPMENTOPTIONCHANGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15273C0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int EquipmentOptionChangeEffectDAO_TypeDefinitionIndex = 15244;

	class EquipmentOptionChangeEffectDAO : public Il2CppObject
	{
	public:
		::FlatData::EquipmentOptionType* StatType; // 0x58
		::MX::Logic::Skills::LogicEffects::StatEvalType* EvalType; // 0x5C
		::System::Int64 Amount; // 0x60
		::System::Int32 Duration; // 0x68
		::System::Boolean Dispellable; // 0x6C

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EQUIPMENTOPTIONCHANGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EQUIPMENTOPTIONCHANGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EQUIPMENTOPTIONCHANGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::EquipmentOptionChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::EquipmentOptionChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EQUIPMENTOPTIONCHANGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EQUIPMENTOPTIONCHANGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::EquipmentOptionChangeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::EquipmentOptionChangeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EQUIPMENTOPTIONCHANGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

