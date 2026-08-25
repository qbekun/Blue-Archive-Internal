#pragma once
#include "../unitysdk.h"

#define ANIMANCER_MIXERPARAMETERTWEENFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BADA0)
#define ANIMANCER_MIXERPARAMETERTWEENFLOAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BADE0)
#define ANIMANCER_MIXERPARAMETERTWEENFLOAT_CALCULATECURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x4BAE30)

namespace Animancer
{
	inline static constexpr unsigned int MixerParameterTweenFloat_TypeDefinitionIndex = 35193;

	class MixerParameterTweenFloat : public Payload
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEENFLOAT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEENFLOAT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateCurrentValue()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_MIXERPARAMETERTWEENFLOAT_CALCULATECURRENTVALUE_OFFSET))(nullptr);
		}

	};
}

