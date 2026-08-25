#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeDilationSettings_TypeDefinitionIndex = 33814;

	class ProbeDilationSettings : public Il2CppObject
	{
	public:
		::System::Boolean enableDilation; // 0x10
		::System::Single dilationDistance; // 0x14
		::System::Single dilationValidityThreshold; // 0x18
		::System::Int32 dilationIterations; // 0x1C
		::System::Boolean squaredDistWeighting; // 0x20

	};
}

