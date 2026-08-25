#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CompareFunction; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CompareFunction_TypeDefinitionIndex = 31491;

	class CompareFunction : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::CompareFunction* Disabled; // 0x0
		::UnityEngine::Rendering::CompareFunction* Never; // 0x0
		::UnityEngine::Rendering::CompareFunction* Less; // 0x0
		::UnityEngine::Rendering::CompareFunction* Equal; // 0x0
		::UnityEngine::Rendering::CompareFunction* LessEqual; // 0x0
		::UnityEngine::Rendering::CompareFunction* Greater; // 0x0
		::UnityEngine::Rendering::CompareFunction* NotEqual; // 0x0
		::UnityEngine::Rendering::CompareFunction* GreaterEqual; // 0x0
		::UnityEngine::Rendering::CompareFunction* Always; // 0x0

	};
}

