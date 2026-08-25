#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class TargetAttachedEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_SHOULDSERIALIZEABILITIES_OFFSET UNITYSDK_OFFSET(0x175F800)
#define MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x175F850)
#define MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x175F8A0)
#define MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x175FED0)
#define MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_GETSKILLABILITY_OFFSET UNITYSDK_OFFSET(0x175FFF0)
#define MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x175F8B0)
#define MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1760040)
#define MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1762270)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int TargetAttachedEntityDAO_TypeDefinitionIndex = 15521;

	class TargetAttachedEntityDAO : public Il2CppObject
	{
	public:
		Il2CppObject* Abilities; // 0x158

		::System::Boolean ShouldSerializeAbilities()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_SHOULDSERIALIZEABILITIES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* GetSkillAbility()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_GETSKILLABILITY_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TargetAttachedEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TargetAttachedEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TargetAttachedEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TargetAttachedEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TARGETATTACHEDENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

