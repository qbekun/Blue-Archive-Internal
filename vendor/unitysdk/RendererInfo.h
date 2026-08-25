#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Renderer; }

	inline static constexpr unsigned int RendererInfo_TypeDefinitionIndex = 926;

	class RendererInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Renderer* MouthRenderer; // 0x10
		::System::Int32 MaterialIndex; // 0x18

	};

