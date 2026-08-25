#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define ANIMANCER_MIXERPARAMETERTWEENVECTOR2_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BAEB0)
#define ANIMANCER_MIXERPARAMETERTWEENVECTOR2_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BAEF0)
#define ANIMANCER_MIXERPARAMETERTWEENVECTOR2_CALCULATECURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x4BAF40)

namespace Animancer
{
	inline static constexpr unsigned int MixerParameterTweenVector2_TypeDefinitionIndex = 35194;

	class MixerParameterTweenVector2 : public Tracer
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEENVECTOR2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEENVECTOR2_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* CalculateCurrentValue()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEENVECTOR2_CALCULATECURRENTVALUE_OFFSET))(nullptr);
		}

	};
}

