#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SkillEntityTimelineDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYTIMELINEDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D6F90)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYTIMELINEDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D70F0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYTIMELINEDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17D74A0)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYTIMELINEDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D7490)
#define MX_GAMEDATA_DAO_BATTLE_SKILLENTITYTIMELINEDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17D76A0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SkillEntityTimelineDAO_TypeDefinitionIndex = 15588;

	class SkillEntityTimelineDAO : public Il2CppObject
	{
	public:
		::System::Int32 Frame; // 0x10
		::System::Int64 DamageDistributeRate; // 0x18
		::MX::GameData::DAO::Battle::SkillEntityDAO* Entity; // 0x20

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SkillEntityTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SkillEntityTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYTIMELINEDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SkillEntityTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SkillEntityTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYTIMELINEDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYTIMELINEDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYTIMELINEDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SKILLENTITYTIMELINEDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

