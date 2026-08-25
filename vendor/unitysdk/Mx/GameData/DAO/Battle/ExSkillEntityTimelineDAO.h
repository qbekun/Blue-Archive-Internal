#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class AbilityActivateTag; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace UnityEngine { class Vector2; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ExSkillEntityTimelineDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_EXSKILLENTITYTIMELINEDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D7750)
#define MX_GAMEDATA_DAO_BATTLE_EXSKILLENTITYTIMELINEDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17D7D20)
#define MX_GAMEDATA_DAO_BATTLE_EXSKILLENTITYTIMELINEDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17D7CD0)
#define MX_GAMEDATA_DAO_BATTLE_EXSKILLENTITYTIMELINEDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17D7EB0)
#define MX_GAMEDATA_DAO_BATTLE_EXSKILLENTITYTIMELINEDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17D7EC0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ExSkillEntityTimelineDAO_TypeDefinitionIndex = 15590;

	class ExSkillEntityTimelineDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::AbilityActivateTag* Tag; // 0x28
		::MX::Logic::Skills::SpawnDirectionTypes* InvokerDirectionOverride; // 0x2C
		::UnityEngine::Vector2* InvokerDirectionOverrideWorldPosition; // 0x30

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ExSkillEntityTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ExSkillEntityTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXSKILLENTITYTIMELINEDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ExSkillEntityTimelineDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ExSkillEntityTimelineDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXSKILLENTITYTIMELINEDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXSKILLENTITYTIMELINEDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXSKILLENTITYTIMELINEDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_EXSKILLENTITYTIMELINEDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

