#pragma once
#include "unitysdk.h"

class TSSVisual;
class CharacterVisual;
namespace UnityEngine { class Transform; }

#define TSSMOVEMENTCOMPONENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x13D1DC0)
#define TSSMOVEMENTCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x13D1DD0)

	inline static constexpr unsigned int TSSMovementComponent_TypeDefinitionIndex = 1073;

	class TSSMovementComponent : public Il2CppObject
	{
	public:
		TSSVisual* TSSVisual; // 0x50
		CharacterVisual* CharacterToInteract; // 0x58
		::UnityEngine::Transform* TurretHorizontalTransform; // 0x60
		::UnityEngine::Transform* TurretVerticalTransform; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSMOVEMENTCOMPONENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TSSMOVEMENTCOMPONENT_AWAKE_OFFSET))(nullptr);
		}

	};

