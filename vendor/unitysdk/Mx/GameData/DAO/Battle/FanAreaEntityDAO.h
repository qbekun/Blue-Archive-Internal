#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class FanAreaEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_GAMEDATA_DAO_BATTLE_FANAREAENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17120D0)
#define MX_GAMEDATA_DAO_BATTLE_FANAREAENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1715720)
#define MX_GAMEDATA_DAO_BATTLE_FANAREAENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1715670)
#define MX_GAMEDATA_DAO_BATTLE_FANAREAENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1715EC0)
#define MX_GAMEDATA_DAO_BATTLE_FANAREAENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x17177D0)
#define MX_GAMEDATA_DAO_BATTLE_FANAREAENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1715730)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int FanAreaEntityDAO_TypeDefinitionIndex = 15489;

	class FanAreaEntityDAO : public MD5
	{
	public:
		::System::Int64 Radius; // 0x190
		::System::Int32 Degree; // 0x198
		::System::Single AngleOffset; // 0x19C

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::FanAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::FanAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FANAREAENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FANAREAENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FANAREAENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::FanAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::FanAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FANAREAENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FANAREAENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FANAREAENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

