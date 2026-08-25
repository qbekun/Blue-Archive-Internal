#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class FieldPrecision; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FieldPrecision_TypeDefinitionIndex = 34004;

	class FieldPrecision : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::FieldPrecision* Half; // 0x0
		::UnityEngine::Rendering::FieldPrecision* Real; // 0x0
		::UnityEngine::Rendering::FieldPrecision* Default; // 0x0

	};
}

