#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class CircleAuraEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1777E00)
#define MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1777F10)
#define MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1777FC0)
#define MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17791D0)
#define MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x177BAE0)
#define MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x177C280)
#define MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x177BAF0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int CircleAuraEntityDAO_TypeDefinitionIndex = 15537;

	class CircleAuraEntityDAO : public ::UnityEngine::XR::MeshVertexAttributes
	{
	public:
		Il2CppObject* BarrierTransferAbilities; // 0x178
		::System::Int64 Radius; // 0x180

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CircleAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CircleAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CircleAuraEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CircleAuraEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_CIRCLEAURAENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

