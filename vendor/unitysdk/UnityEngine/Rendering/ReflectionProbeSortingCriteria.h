#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class ReflectionProbeSortingCriteria; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReflectionProbeSortingCriteria_TypeDefinitionIndex = 31559;

	class ReflectionProbeSortingCriteria : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::ReflectionProbeSortingCriteria* None; // 0x0
		::UnityEngine::Rendering::ReflectionProbeSortingCriteria* Importance; // 0x0
		::UnityEngine::Rendering::ReflectionProbeSortingCriteria* Size; // 0x0
		::UnityEngine::Rendering::ReflectionProbeSortingCriteria* ImportanceThenSize; // 0x0

	};
}

