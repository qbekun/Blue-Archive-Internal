#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define CAMERASHAKER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE4ADE0)
#define CAMERASHAKER__LATEUPDATE_G__APPLYSHAKE|19_0_OFFSET UNITYSDK_OFFSET(0xE4B300)
#define CAMERASHAKER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE4B550)
#define CAMERASHAKER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE4B600)
#define CAMERASHAKER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE4B830)
#define CAMERASHAKER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xE4B9A0)
#define CAMERASHAKER_HANDLESTOPCAMERASHAKEMESSAGE_OFFSET UNITYSDK_OFFSET(0xE4BA40)
#define CAMERASHAKER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xE4BAB0)
#define CAMERASHAKER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE4BB70)
#define CAMERASHAKER_GET_ISPREFABMODE_OFFSET UNITYSDK_OFFSET(0xE4B2B0)

	inline static constexpr unsigned int CameraShaker_TypeDefinitionIndex = 743;

	class CameraShaker : public Il2CppObject
	{
	public:
		::UnityEngine::Camera* target; // 0x18
		::System::Single startDelay; // 0x20
		::System::Single duration; // 0x24
		::UnityEngine::Vector3* intensity; // 0x28
		::UnityEngine::Vector3* yawPitchRoll; // 0x34
		::UnityEngine::AnimationCurve* curve; // 0x40
		::System::Boolean loop; // 0x48
		::UnityEngine::Vector3* shakeRange; // 0x0
		::UnityEngine::Vector3* yawPitchRollRange; // 0xC
		::System::Boolean isShaked; // 0x18
		::System::Single elapsedTime; // 0x4C
		::System::Int32 currentFrame; // 0x50

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKER_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void _LateUpdate_g__ApplyShake|19_0(::UnityEngine::Transform* arg, <>c__DisplayClass19_0&* arg2)
		{
			((::System::Void(*)(::UnityEngine::Transform*, <>c__DisplayClass19_0&*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKER__LATEUPDATE_G__APPLYSHAKE|19_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Single arg, ::System::Single arg2, ::UnityEngine::Vector3* arg3, ::UnityEngine::Vector3* arg4, ::UnityEngine::AnimationCurve* arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::AnimationCurve*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKER_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean HandleStopCameraShakeMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKER_HANDLESTOPCAMERASHAKEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKER_UPDATE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPrefabMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERASHAKER_GET_ISPREFABMODE_OFFSET))(nullptr);
		}

	};

