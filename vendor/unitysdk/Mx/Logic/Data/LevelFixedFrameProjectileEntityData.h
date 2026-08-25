#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SpawnPositionTypes; }
namespace UnityEngine { class Vector2; }
namespace MX::Logic::Skills { class SpawnDirectionTypes; }
namespace MX::Logic::Skills { class ProjectileTypes; }
namespace MX::Core::Physics2D::Shapes { class ShapeType; }
namespace MX::Logic::Data { class LevelAreaEntityData; }
namespace MX::Logic::Data { class AreaSpawnerData; }
namespace MX::Logic::Data { class SkillEntitySpawnerData; }

#define MX_LOGIC_DATA_LEVELFIXEDFRAMEPROJECTILEENTITYDATA_SHOULDSERIALIZEABILITIES_OFFSET UNITYSDK_OFFSET(0x11FBD40)
#define MX_LOGIC_DATA_LEVELFIXEDFRAMEPROJECTILEENTITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FBD30)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelFixedFrameProjectileEntityData_TypeDefinitionIndex = 13696;

	class LevelFixedFrameProjectileEntityData : public Il2CppObject
	{
	public:
		::MX::Logic::Skills::SpawnPositionTypes* DestinationType; // 0x150
		::UnityEngine::Vector2* DestinationWorldPosition; // 0x154
		::UnityEngine::Vector2* DestinationPositionOffset; // 0x15C
		::System::Int32 DestinationPositionRandomOffsetRange; // 0x164
		::MX::Logic::Skills::SpawnDirectionTypes* DestinationOffsetDirectionType; // 0x168
		::System::Int64 ReduceDamageRatePerHit; // 0x170
		::System::Int64 MaxReducedDamageRate; // 0x178
		::MX::Logic::Skills::ProjectileTypes* ProjectileType; // 0x180
		::MX::Core::Physics2D::Shapes::ShapeType* ShapeType; // 0x184
		::System::Int64 Width; // 0x188
		::System::Int64 Height; // 0x190
		::System::Int64 FrameToHit; // 0x198
		::System::Int32 FireDelayFrame; // 0x1A0
		::System::Boolean IsStickToTargetAfterHit; // 0x1A4
		Il2CppObject* Abilities; // 0x1A8
		::System::Int32 SplashDelayFrame; // 0x1B0
		::MX::Logic::Data::LevelAreaEntityData* SplashAreaEntityData; // 0x1B8
		::MX::Logic::Data::AreaSpawnerData* AreaSpawnerData; // 0x1C0
		::MX::Logic::Data::SkillEntitySpawnerData* SkillEntitySpawnerData; // 0x1C8

		::System::Boolean ShouldSerializeAbilities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELFIXEDFRAMEPROJECTILEENTITYDATA_SHOULDSERIALIZEABILITIES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELFIXEDFRAMEPROJECTILEENTITYDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

