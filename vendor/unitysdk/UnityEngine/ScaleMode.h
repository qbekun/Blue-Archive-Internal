#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class ScaleMode; }

namespace UnityEngine
{
	inline static constexpr unsigned int ScaleMode_TypeDefinitionIndex = 36536;

	class ScaleMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::ScaleMode* StretchToFill; // 0x0
		::UnityEngine::ScaleMode* ScaleAndCrop; // 0x0
		::UnityEngine::ScaleMode* ScaleToFit; // 0x0

	};
}

