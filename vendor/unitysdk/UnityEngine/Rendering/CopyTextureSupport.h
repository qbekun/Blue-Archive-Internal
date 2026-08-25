#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CopyTextureSupport; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CopyTextureSupport_TypeDefinitionIndex = 31516;

	class CopyTextureSupport : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::CopyTextureSupport* None; // 0x0
		::UnityEngine::Rendering::CopyTextureSupport* Basic; // 0x0
		::UnityEngine::Rendering::CopyTextureSupport* Copy3D; // 0x0
		::UnityEngine::Rendering::CopyTextureSupport* DifferentTypes; // 0x0
		::UnityEngine::Rendering::CopyTextureSupport* TextureToRT; // 0x0
		::UnityEngine::Rendering::CopyTextureSupport* RTToTexture; // 0x0

	};
}

