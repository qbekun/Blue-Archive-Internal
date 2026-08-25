#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills::Manual { class ManualSkillTypes; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ManualSkillDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_MANUALSKILLDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17DE140)
#define MX_GAMEDATA_DAO_BATTLE_MANUALSKILLDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17DE190)
#define MX_GAMEDATA_DAO_BATTLE_MANUALSKILLDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DE500)
#define MX_GAMEDATA_DAO_BATTLE_MANUALSKILLDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DF500)
#define MX_GAMEDATA_DAO_BATTLE_MANUALSKILLDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17E0A60)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ManualSkillDAO_TypeDefinitionIndex = 15600;

	class ManualSkillDAO : public Il2CppObject
	{
	public:
		Il2CppObject* Abilities; // 0x20
		::MX::Logic::Skills::Manual::ManualSkillTypes* ManualSkillType; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MANUALSKILLDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MANUALSKILLDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ManualSkillDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ManualSkillDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MANUALSKILLDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ManualSkillDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ManualSkillDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MANUALSKILLDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_MANUALSKILLDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

