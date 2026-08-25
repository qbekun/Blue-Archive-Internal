#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::XR { class MeshVertexAttributes; }

namespace UnityEngine::XR
{
	inline static constexpr unsigned int MeshVertexAttributes_TypeDefinitionIndex = 37613;

	class MeshVertexAttributes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::XR::MeshVertexAttributes* None; // 0x0
		::UnityEngine::XR::MeshVertexAttributes* Normals; // 0x0
		::UnityEngine::XR::MeshVertexAttributes* Tangents; // 0x0
		::UnityEngine::XR::MeshVertexAttributes* UVs; // 0x0
		::UnityEngine::XR::MeshVertexAttributes* Colors; // 0x0

	};
}

