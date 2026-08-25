#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ForceMoveTargetEntityDAO&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1763450)
#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17657F0)
#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1765840)
#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1765EA0)
#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1765EB0)
#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1765FC0)
#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_SHOULDSERIALIZEAREAABILITIES_OFFSET UNITYSDK_OFFSET(0x1767120)
#define MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x1767170)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int ForceMoveTargetEntityDAO_TypeDefinitionIndex = 15523;

	class ForceMoveTargetEntityDAO : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* WorldPositionToMove; // 0x158
		::System::Int32 MoveDelay; // 0x160
		::System::Boolean SpawnSameGridLayerAsInvoker; // 0x164
		Il2CppObject* Abilities; // 0x168

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ForceMoveTargetEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ForceMoveTargetEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ForceMoveTargetEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ForceMoveTargetEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeAreaAbilities()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_SHOULDSERIALIZEAREAABILITIES_OFFSET))(nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_FORCEMOVETARGETENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

	};
}

