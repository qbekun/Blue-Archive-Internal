#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class TransferredDamageEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class LogicEffectValue; }

#define MX_GAMEDATA_DAO_BATTLE_TRANSFERREDDAMAGEEFFECTDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x163D3F0)
#define MX_GAMEDATA_DAO_BATTLE_TRANSFERREDDAMAGEEFFECTDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x163D760)
#define MX_GAMEDATA_DAO_BATTLE_TRANSFERREDDAMAGEEFFECTDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x163FAB0)
#define MX_GAMEDATA_DAO_BATTLE_TRANSFERREDDAMAGEEFFECTDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x163FAC0)
#define MX_GAMEDATA_DAO_BATTLE_TRANSFERREDDAMAGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET UNITYSDK_OFFSET(0x1641110)
#define MX_GAMEDATA_DAO_BATTLE_TRANSFERREDDAMAGEEFFECTDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x163FA60)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int TransferredDamageEffectDAO_TypeDefinitionIndex = 15332;

	class TransferredDamageEffectDAO : public Il2CppObject
	{
	public:
		::System::Boolean IgnoreShield; // 0x58
		::System::Boolean DoNotKillTarget; // 0x59
		::System::Boolean TransferHitResultType; // 0x5A
		::System::Boolean ForceFloaterHide; // 0x5B
		::MX::Logic::Skills::SkillType* OverrideSkillType; // 0x5C
		::MX::Logic::Skills::SkillType* OverrideSkillDamageType; // 0x60

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TRANSFERREDDAMAGEEFFECTDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TransferredDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TransferredDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TRANSFERREDDAMAGEEFFECTDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TRANSFERREDDAMAGEEFFECTDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TransferredDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TransferredDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TRANSFERREDDAMAGEEFFECTDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::LogicEffectValue* ToLogicEffectValue()
		{
			return (return (::MX::Logic::Data::LogicEffectValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TRANSFERREDDAMAGEEFFECTDAO_TOLOGICEFFECTVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TRANSFERREDDAMAGEEFFECTDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

