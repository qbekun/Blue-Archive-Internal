#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class MeshUpdateFlags; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MeshUpdateFlags_TypeDefinitionIndex = 31482;

	class MeshUpdateFlags : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::Rendering::MeshUpdateFlags* Default; // 0x0
		::UnityEngine::Rendering::MeshUpdateFlags* DontValidateIndices; // 0x0
		::UnityEngine::Rendering::MeshUpdateFlags* DontResetBoneBounds; // 0x0
		::UnityEngine::Rendering::MeshUpdateFlags* DontNotifyMeshUsers; // 0x0
		::UnityEngine::Rendering::MeshUpdateFlags* DontRecalculateBounds; // 0x0

	};
}

