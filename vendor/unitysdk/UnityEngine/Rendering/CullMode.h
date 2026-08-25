#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CullMode; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CullMode_TypeDefinitionIndex = 31492;

	class CullMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::CullMode* Off; // 0x0
		::UnityEngine::Rendering::CullMode* Front; // 0x0
		::UnityEngine::Rendering::CullMode* Back; // 0x0

	};
}

