#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ObbAreaEntityDAO&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_OBBAREAENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x170C7E0)
#define MX_GAMEDATA_DAO_BATTLE_OBBAREAENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x170C890)
#define MX_GAMEDATA_DAO_BATTLE_OBBAREAENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x170E1A0)
#define MX_GAMEDATA_DAO_BATTLE_OBBAREAENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x170E2B0)
#define MX_GAMEDATA_DAO_BATTLE_OBBAREAENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x170EA80)
#define MX_GAMEDATA_DAO_BATTLE_OBBAREAENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1712020)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ObbAreaEntityDAO_TypeDefinitionIndex = 15487;

	class ObbAreaEntityDAO : public MD5
	{
	public:
		::System::Int64 Width; // 0x190
		::System::Int64 Height; // 0x198
		::System::Single AngleOffset; // 0x1A0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBAREAENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ObbAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ObbAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBAREAENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBAREAENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBAREAENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ObbAreaEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ObbAreaEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBAREAENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBAREAENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

