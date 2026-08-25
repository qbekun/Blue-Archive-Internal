#pragma once
#include "../../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class SkillEntityDAO; }
namespace MX::Logic::Skills { class EssentialCandidateRule; }
namespace MX::Logic::Skills { class OptionalCandidateRule; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class SelectExSkillActionDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_SELECTEXSKILLACTIONDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17E9AA0)
#define MX_GAMEDATA_DAO_BATTLE_SELECTEXSKILLACTIONDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17E9DC0)
#define MX_GAMEDATA_DAO_BATTLE_SELECTEXSKILLACTIONDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17E9AB0)
#define MX_GAMEDATA_DAO_BATTLE_SELECTEXSKILLACTIONDAO_SHOULDSERIALIZESELECTABLEEXSKILLLIST_OFFSET UNITYSDK_OFFSET(0x17E9E90)
#define MX_GAMEDATA_DAO_BATTLE_SELECTEXSKILLACTIONDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17E9EE0)
#define MX_GAMEDATA_DAO_BATTLE_SELECTEXSKILLACTIONDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17EB780)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SelectExSkillActionDAO_TypeDefinitionIndex = 15609;

	class SelectExSkillActionDAO : public Il2CppObject
	{
	public:
		::System::Int32 Range; // 0x20
		::MX::GameData::DAO::Battle::SkillEntityDAO* MainEntityData; // 0x28
		::MX::Logic::Skills::EssentialCandidateRule* EssentialCandidateRule; // 0x30
		::MX::Logic::Skills::OptionalCandidateRule* OptionalCandidateRule; // 0x40
		Il2CppObject* SelectableExSkillList; // 0xF0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SELECTEXSKILLACTIONDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SELECTEXSKILLACTIONDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SELECTEXSKILLACTIONDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeSelectableExSkillList()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SELECTEXSKILLACTIONDAO_SHOULDSERIALIZESELECTABLEEXSKILLLIST_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SelectExSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SelectExSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SELECTEXSKILLACTIONDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SelectExSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SelectExSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SELECTEXSKILLACTIONDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

