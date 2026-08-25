#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DecalShaderPassNames_TypeDefinitionIndex = 32601;

	class DecalShaderPassNames : public Il2CppObject
	{
	public:
		::System::String* DecalPreview; // 0x0
		::System::String* DBufferProjector; // 0x0
		::System::String* DecalProjectorForwardEmissive; // 0x0
		::System::String* DecalScreenSpaceProjector; // 0x0
		::System::String* DecalGBufferProjector; // 0x0
		::System::String* DBufferMesh; // 0x0
		::System::String* DecalMeshForwardEmissive; // 0x0
		::System::String* DecalScreenSpaceMesh; // 0x0
		::System::String* DecalGBufferMesh; // 0x0

	};
}

