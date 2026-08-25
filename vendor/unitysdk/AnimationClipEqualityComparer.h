#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationClip; }

#define ANIMATIONCLIPEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9608780)
#define ANIMATIONCLIPEQUALITYCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96087C0)
#define ANIMATIONCLIPEQUALITYCOMPARER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96087D0)
#define ANIMATIONCLIPEQUALITYCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9608850)

	inline static constexpr unsigned int AnimationClipEqualityComparer_TypeDefinitionIndex = 35312;

	class AnimationClipEqualityComparer : public Il2CppObject
	{
	public:
		Il2CppObject* Instance; // 0x0

		::System::Boolean Equals(::UnityEngine::AnimationClip* arg, ::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::AnimationClip*, ::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONCLIPEQUALITYCOMPARER_EQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONCLIPEQUALITYCOMPARER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONCLIPEQUALITYCOMPARER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode(::UnityEngine::AnimationClip* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::AnimationClip*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMATIONCLIPEQUALITYCOMPARER_GETHASHCODE_OFFSET))(arg, nullptr);
		}

	};

