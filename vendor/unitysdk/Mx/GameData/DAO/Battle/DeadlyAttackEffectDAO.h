#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class DeadlyAttackEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_DEADLYATTACKEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x150CC90)
#define MX_GAMEDATA_DAO_BATTLE_DEADLYATTACKEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x150ED10)
#define MX_GAMEDATA_DAO_BATTLE_DEADLYATTACKEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x150ED60)
#define MX_GAMEDATA_DAO_BATTLE_DEADLYATTACKEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x150F020)
#define MX_GAMEDATA_DAO_BATTLE_DEADLYATTACKEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1510630)
#define MX_GAMEDATA_DAO_BATTLE_DEADLYATTACKEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1510640)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int DeadlyAttackEffectDAO_TypeDefinitionIndex = 15232;

	class DeadlyAttackEffectDAO : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::System::Boolean ForceFloaterHide; // 0x60

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DeadlyAttackEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DeadlyAttackEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DEADLYATTACKEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DEADLYATTACKEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DEADLYATTACKEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DeadlyAttackEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DeadlyAttackEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DEADLYATTACKEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DEADLYATTACKEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_DEADLYATTACKEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

	};
}

