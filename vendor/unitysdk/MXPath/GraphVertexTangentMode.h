#pragma once
#include "../unitysdk.h"

namespace MXPath { class GraphVertexTangentMode; }

namespace MXPath
{
	inline static constexpr unsigned int GraphVertexTangentMode_TypeDefinitionIndex = 37990;

	class GraphVertexTangentMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::MXPath::GraphVertexTangentMode* Linear; // 0x0
		::MXPath::GraphVertexTangentMode* Bezier; // 0x0

	};
}

