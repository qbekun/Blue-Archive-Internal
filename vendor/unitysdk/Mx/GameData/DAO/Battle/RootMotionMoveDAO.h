#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class TargetEntityType; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class RootMotionMoveDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x176F6F0)
#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x176F800)
#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1770930)
#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1770F60)
#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1770940)
#define MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1771050)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int RootMotionMoveDAO_TypeDefinitionIndex = 15531;

	class RootMotionMoveDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::TargetEntityType* CheckCollisionType; // 0x158
		::System::Boolean IgnoreMovableCheckInMove; // 0x15C

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::RootMotionMoveDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::RootMotionMoveDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::RootMotionMoveDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::RootMotionMoveDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_ROOTMOTIONMOVEDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

