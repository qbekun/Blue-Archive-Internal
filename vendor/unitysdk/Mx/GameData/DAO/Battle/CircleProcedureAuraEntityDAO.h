#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CircleProcedureAuraEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x177C3B0)
#define MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x177D600)
#define MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x177D650)
#define MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1780150)
#define MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1780160)
#define MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x17809F0)
#define MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17800A0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CircleProcedureAuraEntityDAO_TypeDefinitionIndex = 15539;

	class CircleProcedureAuraEntityDAO : public ::UnityEngine::XR::MeshVertexAttributes
	{
	public:
		Il2CppObject* BarrierTransferAbilities; // 0x178
		::System::Int64 Radius; // 0x180
		Il2CppObject* ProcedureList; // 0x188

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CircleProcedureAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CircleProcedureAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CircleProcedureAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CircleProcedureAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEPROCEDUREAURAENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

