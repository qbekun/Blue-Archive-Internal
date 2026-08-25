#pragma once
#include "unitysdk.h"

class BeamMovementSystem;
namespace UnityEngine { class Transform; }
namespace MX::Logic::BattleEntities { class Beam; }

#define BEAMMOVEMENTCOMPONENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A4350)
#define BEAMMOVEMENTCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A4380)
#define BEAMMOVEMENTCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x15A4390)

	inline static constexpr unsigned int BeamMovementComponent_TypeDefinitionIndex = 1087;

	class BeamMovementComponent : public Il2CppObject
	{
	public:
		BeamMovementSystem* movementSystem; // 0x18
		::UnityEngine::Transform* Transform; // 0x20
		::UnityEngine::Transform* TransformToScale; // 0x28
		::UnityEngine::Transform* TransformHead; // 0x30
		::UnityEngine::Transform* TransformTail; // 0x38
		::UnityEngine::Transform* StartTransform; // 0x40
		::UnityEngine::Transform* TargetTransform; // 0x48
		::MX::Logic::BattleEntities::Beam* Beam; // 0x50

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAMMOVEMENTCOMPONENT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAMMOVEMENTCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAMMOVEMENTCOMPONENT_AWAKE_OFFSET))(nullptr);
		}

	};

