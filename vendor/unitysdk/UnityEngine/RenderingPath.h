#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class RenderingPath; }

namespace UnityEngine
{
	inline static constexpr unsigned int RenderingPath_TypeDefinitionIndex = 31023;

	class RenderingPath : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::RenderingPath* UsePlayerSettings; // 0x0
		::UnityEngine::RenderingPath* VertexLit; // 0x0
		::UnityEngine::RenderingPath* Forward; // 0x0
		::UnityEngine::RenderingPath* DeferredLighting; // 0x0
		::UnityEngine::RenderingPath* DeferredShading; // 0x0

	};
}

