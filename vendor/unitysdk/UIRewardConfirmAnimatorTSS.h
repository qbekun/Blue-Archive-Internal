#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define UIREWARDCONFIRMANIMATORTSS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27B3150)
#define UIREWARDCONFIRMANIMATORTSS_SETTSSOBJECT_OFFSET UNITYSDK_OFFSET(0x27B31E0)
#define UIREWARDCONFIRMANIMATORTSS__SETTSSOBJECT_B__3_0_OFFSET UNITYSDK_OFFSET(0x27B3310)
#define UIREWARDCONFIRMANIMATORTSS_.CTOR_OFFSET UNITYSDK_OFFSET(0x27B3400)

	inline static constexpr unsigned int UIRewardConfirmAnimatorTSS_TypeDefinitionIndex = 7520;

	class UIRewardConfirmAnimatorTSS : public Il2CppObject
	{
	public:
		::UnityEngine::Animator* tssAnimator; // 0x18
		::System::String* tssAnimatorName; // 0x20

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMANIMATORTSS_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetTssObject(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMANIMATORTSS_SETTSSOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void _SetTssObject_b__3_0(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMANIMATORTSS__SETTSSOBJECT_B__3_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREWARDCONFIRMANIMATORTSS_.CTOR_OFFSET))(nullptr);
		}

	};

