#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class FieldPacking; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FieldPacking_TypeDefinitionIndex = 34003;

	class FieldPacking : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::FieldPacking* NoPacking; // 0x0
		::UnityEngine::Rendering::FieldPacking* R11G11B10; // 0x0
		::UnityEngine::Rendering::FieldPacking* PackedFloat; // 0x0
		::UnityEngine::Rendering::FieldPacking* PackedUint; // 0x0

	};
}

