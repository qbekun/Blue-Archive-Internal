#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RenderTextureReadWrite; }

namespace UnityEngine
{
	inline static constexpr unsigned int RenderTextureReadWrite_TypeDefinitionIndex = 31052;

	class RenderTextureReadWrite : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::RenderTextureReadWrite* Default; // 0x0
		::UnityEngine::RenderTextureReadWrite* Linear; // 0x0
		::UnityEngine::RenderTextureReadWrite* sRGB; // 0x0

	};
}

