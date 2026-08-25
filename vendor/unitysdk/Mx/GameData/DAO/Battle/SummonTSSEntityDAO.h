#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SummonTSSEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_GAMEDATA_DAO_BATTLE_SUMMONTSSENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17BA820)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONTSSENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17BA870)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONTSSENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17BB980)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONTSSENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17BDB30)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONTSSENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17BDB40)
#define MX_GAMEDATA_DAO_BATTLE_SUMMONTSSENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x17BE0E0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int SummonTSSEntityDAO_TypeDefinitionIndex = 15565;

	class SummonTSSEntityDAO : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONTSSENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SummonTSSEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SummonTSSEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONTSSENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SummonTSSEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SummonTSSEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONTSSENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONTSSENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONTSSENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_SUMMONTSSENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

