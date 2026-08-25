#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Yoga { class YogaSize; }

#define UNITYENGINE_YOGA_MEASUREOUTPUT_MAKE_OFFSET UNITYSDK_OFFSET(0xA44C320)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int MeasureOutput_TypeDefinitionIndex = 37346;

	class MeasureOutput : public Il2CppObject
	{
	public:
		::UnityEngine::Yoga::YogaSize* Make(::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Yoga::YogaSize*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_MEASUREOUTPUT_MAKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

