#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }

#define MXTWEEN`1_LERP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXTWEEN`1_RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXTWEEN`1_SAMPLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXTWEEN`1_APPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXTWEEN`1_STOP_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXTWEEN`1_PLAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXTWEEN`1_COPLAY_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXTWEEN`1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXTWEEN`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXTWEEN`1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int MXTween`1_TypeDefinitionIndex = 3364;

	class MXTween`1 : public Il2CppObject
	{
	public:
		Il2CppObject* From; // 0x0
		Il2CppObject* To; // 0x0
		::UnityEngine::AnimationCurve* Curve; // 0x0
		::System::Single Duration; // 0x0
		::System::Boolean IgnoreTimeScale; // 0x0
		::System::Boolean PlayOnEnable; // 0x0
		::UnityEngine::Coroutine* coroutine; // 0x0

		Il2CppObject* Lerp(::System::Single arg)
		{
			return ((Il2CppObject*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTWEEN`1_LERP_OFFSET))(arg, nullptr);
		}

		::System::Void Reset(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTWEEN`1_RESET_OFFSET))(arg, nullptr);
		}

		::System::Void Sample(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXTWEEN`1_SAMPLE_OFFSET))(arg, nullptr);
		}

		::System::Void Apply(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXTWEEN`1_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTWEEN`1_STOP_OFFSET))(nullptr);
		}

		::System::Void Play(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTWEEN`1_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoPlay(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXTWEEN`1_COPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTWEEN`1_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTWEEN`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXTWEEN`1_ONDISABLE_OFFSET))(nullptr);
		}

	};

