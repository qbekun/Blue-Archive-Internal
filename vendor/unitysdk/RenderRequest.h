#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RenderTexture; }

	inline static constexpr unsigned int RenderRequest_TypeDefinitionIndex = 30961;

	class RenderRequest : public Il2CppObject
	{
	public:
		RenderRequestMode* m_CameraRenderMode; // 0x10
		::UnityEngine::RenderTexture* m_ResultRT; // 0x18
		RenderRequestOutputSpace* m_OutputSpace; // 0x20

	};

