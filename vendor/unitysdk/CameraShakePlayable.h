#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class AnimationCurve; }
class CameraShakeBehavior;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }

#define CAMERASHAKEPLAYABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2048DD0)
#define CAMERASHAKEPLAYABLE_SETDATA_OFFSET UNITYSDK_OFFSET(0x2048E80)
#define CAMERASHAKEPLAYABLE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x2048FA0)

	inline static constexpr unsigned int CameraShakePlayable_TypeDefinitionIndex = 3274;

	class CameraShakePlayable : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* intensity; // 0x18
		::UnityEngine::Vector3* yawPitchRoll; // 0x24
		::UnityEngine::AnimationCurve* curve; // 0x30
		::System::Single Duration; // 0x38
		CameraShakeBehavior* behavior; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEPLAYABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::UnityEngine::GameObject* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEPLAYABLE_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKEPLAYABLE_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

	};

