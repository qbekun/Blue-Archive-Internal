#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class HeroStatus; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class StatusRemoveEffectDAO&; }
namespace MX::Logic::Data { class LogicEffectValue; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_STATUSREMOVEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1639940)
#define MX_GAMEDATA_DAO_BATTLE_STATUSREMOVEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1639990)
#define MX_GAMEDATA_DAO_BATTLE_STATUSREMOVEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x163B960)
#define MX_GAMEDATA_DAO_BATTLE_STATUSREMOVEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x163B9C0)
#define MX_GAMEDATA_DAO_BATTLE_STATUSREMOVEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x163CFD0)
#define MX_GAMEDATA_DAO_BATTLE_STATUSREMOVEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x163D340)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int StatusRemoveEffectDAO_TypeDefinitionIndex = 15330;

	class StatusRemoveEffectDAO : public Il2CppObject
	{
	public:
		::MX::Logic::BattleEntities::HeroStatus* TargetStatus; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSREMOVEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatusRemoveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatusRemoveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSREMOVEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSREMOVEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatusRemoveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatusRemoveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSREMOVEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSREMOVEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_STATUSREMOVEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

