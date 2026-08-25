#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ObbAuraEntityDAO&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_OBBAURAENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1780BA0)
#define MX_GAMEDATA_DAO_BATTLE_OBBAURAENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1781DA0)
#define MX_GAMEDATA_DAO_BATTLE_OBBAURAENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1781E50)
#define MX_GAMEDATA_DAO_BATTLE_OBBAURAENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1781F60)
#define MX_GAMEDATA_DAO_BATTLE_OBBAURAENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1784940)
#define MX_GAMEDATA_DAO_BATTLE_OBBAURAENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1784950)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ObbAuraEntityDAO_TypeDefinitionIndex = 15541;

	class ObbAuraEntityDAO : public ::UnityEngine::XR::MeshVertexAttributes
	{
	public:
		::System::Int64 Width; // 0x178
		::System::Int64 Height; // 0x180
		::System::Int64 AngleOffset; // 0x188

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ObbAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ObbAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBAURAENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBAURAENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBAURAENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ObbAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ObbAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBAURAENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBAURAENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBAURAENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

