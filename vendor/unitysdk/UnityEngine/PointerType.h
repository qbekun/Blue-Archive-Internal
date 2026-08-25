#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class PointerType; }

namespace UnityEngine
{
	inline static constexpr unsigned int PointerType_TypeDefinitionIndex = 36529;

	class PointerType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::PointerType* Mouse; // 0x0
		::UnityEngine::PointerType* Touch; // 0x0
		::UnityEngine::PointerType* Pen; // 0x0

	};
}

