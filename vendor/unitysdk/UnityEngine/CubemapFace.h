#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class CubemapFace; }

namespace UnityEngine
{
	inline static constexpr unsigned int CubemapFace_TypeDefinitionIndex = 31048;

	class CubemapFace : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::CubemapFace* Unknown; // 0x0
		::UnityEngine::CubemapFace* PositiveX; // 0x0
		::UnityEngine::CubemapFace* NegativeX; // 0x0
		::UnityEngine::CubemapFace* PositiveY; // 0x0
		::UnityEngine::CubemapFace* NegativeY; // 0x0
		::UnityEngine::CubemapFace* PositiveZ; // 0x0
		::UnityEngine::CubemapFace* NegativeZ; // 0x0

	};
}

