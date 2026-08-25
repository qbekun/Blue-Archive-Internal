#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class MeshTopology; }

namespace UnityEngine
{
	inline static constexpr unsigned int MeshTopology_TypeDefinitionIndex = 31039;

	class MeshTopology : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::MeshTopology* Triangles; // 0x0
		::UnityEngine::MeshTopology* Quads; // 0x0
		::UnityEngine::MeshTopology* Lines; // 0x0
		::UnityEngine::MeshTopology* LineStrip; // 0x0
		::UnityEngine::MeshTopology* Points; // 0x0

	};
}

