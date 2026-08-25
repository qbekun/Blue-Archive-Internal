#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class FindObjectsInactive; }

namespace UnityEngine
{
	inline static constexpr unsigned int FindObjectsInactive_TypeDefinitionIndex = 31178;

	class FindObjectsInactive : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::FindObjectsInactive* Exclude; // 0x0
		::UnityEngine::FindObjectsInactive* Include; // 0x0

	};
}

