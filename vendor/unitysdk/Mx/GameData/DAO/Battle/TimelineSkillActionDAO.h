#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillToTargetDistributeType; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class TimelineSkillActionDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_SHOULDSERIALIZEENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x17E58F0)
#define MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17E5940)
#define MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x17E5D40)
#define MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17E5950)
#define MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x17E5F20)
#define MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_VALIDATE_OFFSET UNITYSDK_OFFSET(0x17E5FD0)
#define MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17E60E0)
#define MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17E6130)
#define MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17E8730)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int TimelineSkillActionDAO_TypeDefinitionIndex = 15607;

	class TimelineSkillActionDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SkillToTargetDistributeType* DistributeType; // 0x180
		::System::Boolean RotateTurretOnly; // 0x184
		::System::Boolean RotateTurretDirectionTargetTracking; // 0x185
		::System::Int32 RotatingTurretFrameMin; // 0x188
		::System::Int32 RotatingTurretFrameMax; // 0x18C
		::System::Boolean RotateInvokerDirectionEveryFrame; // 0x190
		Il2CppObject* EntityTimeline; // 0x198

		::System::Boolean ShouldSerializeEntityTimeline()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_SHOULDSERIALIZEENTITYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Boolean Validate(::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_VALIDATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TimelineSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_TIMELINESKILLACTIONDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};
}

