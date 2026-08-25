#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Bindings { class CodegenOptions; }

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int CodegenOptions_TypeDefinitionIndex = 37885;

	class CodegenOptions : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Bindings::CodegenOptions* Auto; // 0x0
		::UnityEngine::Bindings::CodegenOptions* Custom; // 0x0
		::UnityEngine::Bindings::CodegenOptions* Force; // 0x0

	};
}

