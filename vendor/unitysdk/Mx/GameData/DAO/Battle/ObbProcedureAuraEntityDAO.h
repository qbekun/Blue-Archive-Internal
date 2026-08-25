#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ObbProcedureAuraEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_OBBPROCEDUREAURAENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17851C0)
#define MX_GAMEDATA_DAO_BATTLE_OBBPROCEDUREAURAENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1785A00)
#define MX_GAMEDATA_DAO_BATTLE_OBBPROCEDUREAURAENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1785B10)
#define MX_GAMEDATA_DAO_BATTLE_OBBPROCEDUREAURAENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17885B0)
#define MX_GAMEDATA_DAO_BATTLE_OBBPROCEDUREAURAENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1788660)
#define MX_GAMEDATA_DAO_BATTLE_OBBPROCEDUREAURAENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17851D0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ObbProcedureAuraEntityDAO_TypeDefinitionIndex = 15543;

	class ObbProcedureAuraEntityDAO : public ::UnityEngine::XR::MeshVertexAttributes
	{
	public:
		::System::Int64 Width; // 0x178
		::System::Int64 Height; // 0x180
		::System::Int64 AngleOffset; // 0x188
		Il2CppObject* ProcedureList; // 0x190

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBPROCEDUREAURAENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBPROCEDUREAURAENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ObbProcedureAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ObbProcedureAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBPROCEDUREAURAENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBPROCEDUREAURAENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ObbProcedureAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ObbProcedureAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBPROCEDUREAURAENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_OBBPROCEDUREAURAENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

