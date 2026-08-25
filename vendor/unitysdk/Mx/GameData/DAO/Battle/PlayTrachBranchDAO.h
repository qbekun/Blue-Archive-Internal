#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class PlayTrachBranchDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_PLAYTRACHBRANCHDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17DADA0)
#define MX_GAMEDATA_DAO_BATTLE_PLAYTRACHBRANCHDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DADB0)
#define MX_GAMEDATA_DAO_BATTLE_PLAYTRACHBRANCHDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17DB000)
#define MX_GAMEDATA_DAO_BATTLE_PLAYTRACHBRANCHDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17DB470)
#define MX_GAMEDATA_DAO_BATTLE_PLAYTRACHBRANCHDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17DB480)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int PlayTrachBranchDAO_TypeDefinitionIndex = 15594;

	class PlayTrachBranchDAO : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* PlayTrackGroupName; // 0x10
		::Il2CppArray<::System::Object*>* MuteTrackGroupName; // 0x18
		::System::Boolean InterruptSkillAction; // 0x20
		::System::Int32 InterruptSkillActionFrame; // 0x24

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PLAYTRACHBRANCHDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::PlayTrachBranchDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::PlayTrachBranchDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PLAYTRACHBRANCHDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::PlayTrachBranchDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::PlayTrachBranchDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PLAYTRACHBRANCHDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PLAYTRACHBRANCHDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_PLAYTRACHBRANCHDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

