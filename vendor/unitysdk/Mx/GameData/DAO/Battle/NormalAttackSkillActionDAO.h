#pragma once
#include "../../../../unitysdk.h"

namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SkillToTargetDistributeType; }
namespace MX::GameData::DAO::Battle { class NormalAttackPhaseDAO; }
namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class NormalAttackSkillActionDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17E1690)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x17E3EF0)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x17E3F00)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_SHOULDSERIALIZEANIMATIONFRAMES_OFFSET UNITYSDK_OFFSET(0x17E44A0)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x17E44F0)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_SHOULDSERIALIZESHOTFRAMES_OFFSET UNITYSDK_OFFSET(0x17E4500)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17E4550)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_SHOULDSERIALIZEFIXEDNORMALATTACKFRAMEVALUES_OFFSET UNITYSDK_OFFSET(0x17E5800)
#define MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_.CTOR_OFFSET UNITYSDK_OFFSET(0x17E3EA0)

namespace MX::GameData::DAO::Battle
{
	inline static constexpr unsigned int NormalAttackSkillActionDAO_TypeDefinitionIndex = 15604;

	class NormalAttackSkillActionDAO : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SpawnDirectionTypes* ExclusiveIngInvokerDirectionOverride; // 0x180
		::UnityEngine::Vector2* ExclusiveIngInvokerDirectionOverrideWorldPosition; // 0x184
		::MX::Logic::Skills::SkillToTargetDistributeType* DistributeType; // 0x18C
		::System::Boolean UseFixedNormalAttackFrameRate; // 0x190
		Il2CppObject* FixedNormalAttackFrameRateValues; // 0x198
		Il2CppObject* AnimationFrames; // 0x1A0
		Il2CppObject* ShotFrames; // 0x1A8
		::MX::GameData::DAO::Battle::NormalAttackPhaseDAO* PhaseData; // 0x1B0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NormalAttackSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NormalAttackSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Duration()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeAnimationFrames()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_SHOULDSERIALIZEANIMATIONFRAMES_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeShotFrames()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_SHOULDSERIALIZESHOTFRAMES_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NormalAttackSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NormalAttackSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSerializeFixedNormalAttackFrameValues()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_SHOULDSERIALIZEFIXEDNORMALATTACKFRAMEVALUES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_DAO_BATTLE_NORMALATTACKSKILLACTIONDAO_.CTOR_OFFSET))(nullptr);
		}

	};
}

