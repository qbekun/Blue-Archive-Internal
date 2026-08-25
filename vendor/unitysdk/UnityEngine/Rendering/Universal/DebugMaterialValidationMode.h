#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class DebugMaterialValidationMode; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DebugMaterialValidationMode_TypeDefinitionIndex = 38083;

	class DebugMaterialValidationMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::Universal::DebugMaterialValidationMode* None; // 0x0
		::UnityEngine::Rendering::Universal::DebugMaterialValidationMode* Albedo; // 0x0
		::UnityEngine::Rendering::Universal::DebugMaterialValidationMode* Metallic; // 0x0

	};
}

