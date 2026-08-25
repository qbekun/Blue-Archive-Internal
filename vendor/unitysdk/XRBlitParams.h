#pragma once
#include "unitysdk.h"

namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Rect; }

	inline static constexpr unsigned int XRBlitParams_TypeDefinitionIndex = 37603;

	class XRBlitParams : public Il2CppObject
	{
	public:
		::UnityEngine::RenderTexture* srcTex; // 0x10
		::System::Int32 srcTexArraySlice; // 0x18
		::UnityEngine::Rect* srcRect; // 0x1C
		::UnityEngine::Rect* destRect; // 0x2C

	};

