#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class NormalAttackBulletEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }

#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKBULLETENTITYDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x176AE60)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKBULLETENTITYDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x176B490)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKBULLETENTITYDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x176D820)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKBULLETENTITYDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x176D8D0)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKBULLETENTITYDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x176EA40)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKBULLETENTITYDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x176AE70)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int NormalAttackBulletEntityDAO_TypeDefinitionIndex = 15527;

	class NormalAttackBulletEntityDAO : public Il2CppObject
	{
	public:
		::System::Int64 Speed; // 0x160

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKBULLETENTITYDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NormalAttackBulletEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NormalAttackBulletEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKBULLETENTITYDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKBULLETENTITYDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NormalAttackBulletEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NormalAttackBulletEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKBULLETENTITYDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKBULLETENTITYDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKBULLETENTITYDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

	};
}

