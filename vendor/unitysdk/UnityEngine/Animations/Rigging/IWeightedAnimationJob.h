#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations::Rigging { class FloatProperty; }

#define UNITYENGINE_ANIMATIONS_RIGGING_IWEIGHTEDANIMATIONJOB_SET_JOBWEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int IWeightedAnimationJob_TypeDefinitionIndex = 37151;

	class IWeightedAnimationJob : public Il2CppObject
	{
	public:
		::System::Void set_jobWeight(::UnityEngine::Animations::Rigging::FloatProperty* arg)
		{
			((::System::Void(*)(::UnityEngine::Animations::Rigging::FloatProperty*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_IWEIGHTEDANIMATIONJOB_SET_JOBWEIGHT_OFFSET))(arg, nullptr);
		}

	};
}

