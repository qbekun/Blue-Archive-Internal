#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::Animations::Rigging { class WeightedTransform; }

#define UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORM_EQUALS_OFFSET UNITYSDK_OFFSET(0x9E2B320)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int WeightedTransform_TypeDefinitionIndex = 37184;

	class WeightedTransform : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::System::Single weight; // 0x18

		::System::Boolean Equals(::UnityEngine::Animations::Rigging::WeightedTransform* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Animations::Rigging::WeightedTransform*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_WEIGHTEDTRANSFORM_EQUALS_OFFSET))(arg, nullptr);
		}

	};
}

