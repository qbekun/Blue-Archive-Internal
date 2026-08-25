#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerNode; }
namespace Animancer { class OptionalWarning; }
namespace Animancer { class AnimancerState; }
namespace UnityEngine { class AnimationClip; }
namespace Animancer { class AnimancerPlayable; }

#define ANIMANCER_VALIDATE_ASSERTPLAYABLE_OFFSET UNITYSDK_OFFSET(0x4AC0C0)
#define ANIMANCER_VALIDATE_LOG_OFFSET UNITYSDK_OFFSET(0x4AC0D0)
#define ANIMANCER_VALIDATE_ENABLE_OFFSET UNITYSDK_OFFSET(0x4AC0E0)
#define ANIMANCER_VALIDATE_ASSERTCANREMOVECHILD_OFFSET UNITYSDK_OFFSET(0x4AC0F0)
#define ANIMANCER_VALIDATE_SETENABLED_OFFSET UNITYSDK_OFFSET(0x4AC100)
#define ANIMANCER_VALIDATE_ASSERTNOTLEGACY_OFFSET UNITYSDK_OFFSET(0x4AC110)
#define ANIMANCER_VALIDATE_DISABLE_OFFSET UNITYSDK_OFFSET(0x4AC120)
#define ANIMANCER_VALIDATE_VALUERULE_OFFSET UNITYSDK_OFFSET(0x4AC130)
#define ANIMANCER_VALIDATE_ASSERTROOT_OFFSET UNITYSDK_OFFSET(0x4AC220)

namespace Animancer
{
	inline static constexpr unsigned int Validate_TypeDefinitionIndex = 35136;

	class Validate : public Il2CppObject
	{
	public:
		::System::Void AssertPlayable(::Animancer::AnimancerNode* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_VALIDATE_ASSERTPLAYABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Log(::Animancer::OptionalWarning* arg, ::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::Animancer::OptionalWarning*, ::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_VALIDATE_LOG_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void Enable(::Animancer::OptionalWarning* arg)
		{
			((::System::Void(*)(::Animancer::OptionalWarning*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_VALIDATE_ENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void AssertCanRemoveChild(::Animancer::AnimancerState* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_VALIDATE_ASSERTCANREMOVECHILD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetEnabled(::Animancer::OptionalWarning* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Animancer::OptionalWarning*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_VALIDATE_SETENABLED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AssertNotLegacy(::UnityEngine::AnimationClip* arg)
		{
			((::System::Void(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_VALIDATE_ASSERTNOTLEGACY_OFFSET))(arg, nullptr);
		}

		::System::Void Disable(::Animancer::OptionalWarning* arg)
		{
			((::System::Void(*)(::Animancer::OptionalWarning*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_VALIDATE_DISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void ValueRule(float&* arg, Value* arg)
		{
			((::System::Void(*)(float&*, Value*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_VALIDATE_VALUERULE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AssertRoot(::Animancer::AnimancerNode* arg, ::Animancer::AnimancerPlayable* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::Animancer::AnimancerPlayable*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_VALIDATE_ASSERTROOT_OFFSET))(arg, arg, nullptr);
		}

	};
}

