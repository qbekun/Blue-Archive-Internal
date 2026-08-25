#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2Int; }
namespace UnityEngine { class Vector4; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RTHandleProperties_TypeDefinitionIndex = 34028;

	class RTHandleProperties : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2Int* previousViewportSize; // 0x10
		::UnityEngine::Vector2Int* previousRenderTargetSize; // 0x18
		::UnityEngine::Vector2Int* currentViewportSize; // 0x20
		::UnityEngine::Vector2Int* currentRenderTargetSize; // 0x28
		::UnityEngine::Vector4* rtHandleScale; // 0x30

	};
}

