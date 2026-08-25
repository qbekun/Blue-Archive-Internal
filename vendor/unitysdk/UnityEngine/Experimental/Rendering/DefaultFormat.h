#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class DefaultFormat; }

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int DefaultFormat_TypeDefinitionIndex = 31653;

	class DefaultFormat : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Experimental::Rendering::DefaultFormat* LDR; // 0x0
		::UnityEngine::Experimental::Rendering::DefaultFormat* HDR; // 0x0
		::UnityEngine::Experimental::Rendering::DefaultFormat* DepthStencil; // 0x0
		::UnityEngine::Experimental::Rendering::DefaultFormat* Shadow; // 0x0
		::UnityEngine::Experimental::Rendering::DefaultFormat* Video; // 0x0

	};
}

