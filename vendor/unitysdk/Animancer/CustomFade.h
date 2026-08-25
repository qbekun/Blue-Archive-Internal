#pragma once
#include "../unitysdk.h"

namespace Animancer { class AnimancerLayer; }
namespace Animancer { class AnimancerState; }
namespace Animancer { class AnimancerNode; }
namespace Animancer { class AnimancerComponent; }
namespace UnityEngine { class AnimationCurve; }
namespace Animancer { class AnimancerPlayable; }

#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B4850)
#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B4AB0)
#define ANIMANCER_CUSTOMFADE_CALCULATEWEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_CUSTOMFADE_RELEASE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ANIMANCER_CUSTOMFADE_ANIMANCER.IUPDATABLE.UPDATE_OFFSET UNITYSDK_OFFSET(0x4B4BF0)
#define ANIMANCER_CUSTOMFADE_FORCEFINISHFADE_OFFSET UNITYSDK_OFFSET(0x4B5010)
#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B5080)
#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B5150)
#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B50C0)
#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B5220)
#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B52B0)
#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B5380)
#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B52F0)
#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B5450)
#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B54E0)
#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B55C0)
#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B5520)
#define ANIMANCER_CUSTOMFADE_APPLY_OFFSET UNITYSDK_OFFSET(0x4B5D60)
#define ANIMANCER_CUSTOMFADE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4B5E00)

namespace Animancer
{
	inline static constexpr unsigned int CustomFade_TypeDefinitionIndex = 35178;

	class CustomFade : public Il2CppObject
	{
	public:
		::System::Single _Time; // 0x18
		::System::Single _FadeSpeed; // 0x1C
		NodeWeight* _Target; // 0x20
		::Animancer::AnimancerLayer* _Layer; // 0x30
		::System::Int32 _CommandCount; // 0x38
		Il2CppObject* FadeOutNodes; // 0x40

		::System::Void Apply(::Animancer::AnimancerState* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerNode* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateWeight(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_CALCULATEWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void Release()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_RELEASE_OFFSET))(nullptr);
		}

		::System::Void Animancer.IUpdatable.Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_ANIMANCER.IUPDATABLE.UPDATE_OFFSET))(nullptr);
		}

		::System::Void ForceFinishFade(::Animancer::AnimancerNode* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_FORCEFINISHFADE_OFFSET))(arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerComponent* arg, ::UnityEngine::AnimationCurve* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerComponent*, ::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerPlayable* arg, ::UnityEngine::AnimationCurve* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, ::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerState* arg, ::UnityEngine::AnimationCurve* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, ::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerNode* arg, ::UnityEngine::AnimationCurve* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, ::UnityEngine::AnimationCurve*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerComponent* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerComponent*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerPlayable* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerState* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerNode* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerComponent* arg, Function* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerComponent*, Function*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerPlayable* arg, Function* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerPlayable*, Function*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerState* arg, Function* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerState*, Function*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Apply(::Animancer::AnimancerNode* arg, Function* arg)
		{
			((::System::Void(*)(::Animancer::AnimancerNode*, Function*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_APPLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_CUSTOMFADE_.CTOR_OFFSET))(nullptr);
		}

	};
}

