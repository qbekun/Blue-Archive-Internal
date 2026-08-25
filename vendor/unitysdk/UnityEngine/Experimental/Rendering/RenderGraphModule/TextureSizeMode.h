#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule { class TextureSizeMode; }

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int TextureSizeMode_TypeDefinitionIndex = 33876;

	class TextureSizeMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureSizeMode* Explicit; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureSizeMode* Scale; // 0x0
		::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureSizeMode* Functor; // 0x0

	};
}

