#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::Rendering { class ProbeVolumeTextureMemoryBudget; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeSceneData; }
namespace UnityEngine::Experimental::Rendering { class ProbeVolumeSHBands; }

namespace UnityEngine::Experimental::Rendering
{
	inline static constexpr unsigned int ProbeVolumeSystemParameters_TypeDefinitionIndex = 33791;

	class ProbeVolumeSystemParameters : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::Rendering::ProbeVolumeTextureMemoryBudget* memoryBudget; // 0x10
		::UnityEngine::Mesh* probeDebugMesh; // 0x18
		::UnityEngine::Shader* probeDebugShader; // 0x20
		::UnityEngine::Experimental::Rendering::ProbeVolumeSceneData* sceneData; // 0x28
		::UnityEngine::Experimental::Rendering::ProbeVolumeSHBands* shBands; // 0x30

	};
}

