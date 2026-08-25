#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class VertexAttributeFormat; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VertexAttributeFormat_TypeDefinitionIndex = 31483;

	class VertexAttributeFormat : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::VertexAttributeFormat* Float32; // 0x0
		::UnityEngine::Rendering::VertexAttributeFormat* Float16; // 0x0
		::UnityEngine::Rendering::VertexAttributeFormat* UNorm8; // 0x0
		::UnityEngine::Rendering::VertexAttributeFormat* SNorm8; // 0x0
		::UnityEngine::Rendering::VertexAttributeFormat* UNorm16; // 0x0
		::UnityEngine::Rendering::VertexAttributeFormat* SNorm16; // 0x0
		::UnityEngine::Rendering::VertexAttributeFormat* UInt8; // 0x0
		::UnityEngine::Rendering::VertexAttributeFormat* SInt8; // 0x0
		::UnityEngine::Rendering::VertexAttributeFormat* UInt16; // 0x0
		::UnityEngine::Rendering::VertexAttributeFormat* SInt16; // 0x0
		::UnityEngine::Rendering::VertexAttributeFormat* UInt32; // 0x0
		::UnityEngine::Rendering::VertexAttributeFormat* SInt32; // 0x0

	};
}

