#pragma once
#include "../../../../unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class AreaSpawnerDAO&; }
namespace MX::Logic::Data { class SkillEntityValue; }
namespace MX::Logic::Skills { class SkillSpecification; }
namespace MX::Logic::Skills { class TargetCandidateRule; }
namespace MX::Logic::Skills { class TargetSortRule; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17BE280)
#define MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_TOSKILLENTITYVALUE_OFFSET UNITYSDK_OFFSET(0x17C05B0)
#define MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_SHOULDSERIALIZEENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x17C06C0)
#define MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17C0710)
#define MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17C0720)
#define MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17C0D80)
#define MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17C0560)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int AreaSpawnerDAO_TypeDefinitionIndex = 15567;

	class AreaSpawnerDAO : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x158
		Il2CppObject* EntityTimeline; // 0x160

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AreaSpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AreaSpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::MX::Logic::Data::SkillEntityValue* ToSkillEntityValue(::MX::Logic::Skills::SkillSpecification* arg, ::System::Int32 arg, ::MX::Logic::Skills::TargetCandidateRule* arg, ::MX::Logic::Skills::TargetSortRule* arg)
		{
			return (return (::MX::Logic::Data::SkillEntityValue*(*)(::MX::Logic::Skills::SkillSpecification*, ::System::Int32, ::MX::Logic::Skills::TargetCandidateRule*, ::MX::Logic::Skills::TargetSortRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_TOSKILLENTITYVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeEntityTimeline()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_SHOULDSERIALIZEENTITYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AreaSpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AreaSpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_AREASPAWNERDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

