#pragma once
#include "../../unitysdk.h"

namespace Unity::Jobs { class JobHandle; }
namespace UnityEngine { class Matrix4x4; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchRendererCullingOutput_TypeDefinitionIndex = 31534;

	class BatchRendererCullingOutput : public Il2CppObject
	{
	public:
		::Unity::Jobs::JobHandle* cullingJobsFence; // 0x10
		::UnityEngine::Matrix4x4* cullingMatrix; // 0x20
		::System::Object** cullingPlanes; // 0x60
		::System::Object** batchVisibility; // 0x68
		::System::Object** visibleIndices; // 0x70
		::System::Object** visibleIndicesY; // 0x78
		::System::Int32 cullingPlanesCount; // 0x80
		::System::Int32 batchVisibilityCount; // 0x84
		::System::Int32 visibleIndicesCount; // 0x88
		::System::Single nearPlane; // 0x8C

	};
}

