#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class CursorLockMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int CursorLockMode_TypeDefinitionIndex = 31083;

	class CursorLockMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::CursorLockMode* None; // 0x0
		::UnityEngine::CursorLockMode* Locked; // 0x0
		::UnityEngine::CursorLockMode* Confined; // 0x0

	};
}

