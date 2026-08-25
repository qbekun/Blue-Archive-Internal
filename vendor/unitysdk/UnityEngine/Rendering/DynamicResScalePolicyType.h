#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class DynamicResScalePolicyType; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicResScalePolicyType_TypeDefinitionIndex = 33902;

	class DynamicResScalePolicyType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::DynamicResScalePolicyType* ReturnsPercentage; // 0x0
		::UnityEngine::Rendering::DynamicResScalePolicyType* ReturnsMinMaxLerpFactor; // 0x0

	};
}

