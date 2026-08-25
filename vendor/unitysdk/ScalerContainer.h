#pragma once
#include "unitysdk.h"

namespace UnityEngine::Rendering { class DynamicResScalePolicyType; }
namespace UnityEngine::Rendering { class PerformDynamicRes; }

	inline static constexpr unsigned int ScalerContainer_TypeDefinitionIndex = 33904;

	class ScalerContainer : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::DynamicResScalePolicyType* type; // 0x10
		::UnityEngine::Rendering::PerformDynamicRes* method; // 0x18

	};

