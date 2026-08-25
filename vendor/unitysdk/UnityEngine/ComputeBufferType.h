#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ComputeBufferType; }

namespace UnityEngine
{
	inline static constexpr unsigned int ComputeBufferType_TypeDefinitionIndex = 31027;

	class ComputeBufferType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ComputeBufferType* Default; // 0x0
		::UnityEngine::ComputeBufferType* Raw; // 0x0
		::UnityEngine::ComputeBufferType* Append; // 0x0
		::UnityEngine::ComputeBufferType* Counter; // 0x0
		::UnityEngine::ComputeBufferType* Constant; // 0x0
		::UnityEngine::ComputeBufferType* Structured; // 0x0
		::UnityEngine::ComputeBufferType* DrawIndirect; // 0x0
		::UnityEngine::ComputeBufferType* IndirectArguments; // 0x0
		::UnityEngine::ComputeBufferType* GPUMemory; // 0x0

	};
}

