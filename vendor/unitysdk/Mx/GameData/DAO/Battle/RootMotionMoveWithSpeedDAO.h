#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class RootMotionMoveWithSpeedDAO&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEWITHSPEEDDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1773410)
#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEWITHSPEEDDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1775800)
#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEWITHSPEEDDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1775810)
#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEWITHSPEEDDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x1775E70)
#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEWITHSPEEDDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17756F0)
#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEWITHSPEEDDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1775F80)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int RootMotionMoveWithSpeedDAO_TypeDefinitionIndex = 15533;

	class RootMotionMoveWithSpeedDAO : public Il2CppObject
	{
	public:
		::System::Int64 MoveSpeed; // 0x160

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::RootMotionMoveWithSpeedDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::RootMotionMoveWithSpeedDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEWITHSPEEDDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEWITHSPEEDDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEWITHSPEEDDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEWITHSPEEDDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEWITHSPEEDDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::RootMotionMoveWithSpeedDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::RootMotionMoveWithSpeedDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEWITHSPEEDDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

