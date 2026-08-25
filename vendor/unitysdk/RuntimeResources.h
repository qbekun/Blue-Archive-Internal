#pragma once
#include "unitysdk.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Texture3D; }

	inline static constexpr unsigned int RuntimeResources_TypeDefinitionIndex = 33800;

	class RuntimeResources : public Il2CppObject
	{
	public:
		::UnityEngine::ComputeBuffer* index; // 0x10
		::UnityEngine::ComputeBuffer* cellIndices; // 0x18
		::UnityEngine::Texture3D* L0_L1rx; // 0x20
		::UnityEngine::Texture3D* L1_G_ry; // 0x28
		::UnityEngine::Texture3D* L1_B_rz; // 0x30
		::UnityEngine::Texture3D* L2_0; // 0x38
		::UnityEngine::Texture3D* L2_1; // 0x40
		::UnityEngine::Texture3D* L2_2; // 0x48
		::UnityEngine::Texture3D* L2_3; // 0x50

	};

