#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class LODParameters; }
namespace UnityEngine { class Matrix4x4; }

#define UNITYENGINE_RENDERING_BATCHCULLINGCONTEXT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2567E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchCullingContext_TypeDefinitionIndex = 31533;

	class BatchCullingContext : public Il2CppObject
	{
	public:
		Il2CppObject* cullingPlanes; // 0x10
		Il2CppObject* batchVisibility; // 0x20
		Il2CppObject* visibleIndices; // 0x30
		Il2CppObject* visibleIndicesY; // 0x40
		::UnityEngine::Rendering::LODParameters* lodParameters; // 0x50
		::UnityEngine::Matrix4x4* cullingMatrix; // 0x6C
		::System::Single nearPlane; // 0xAC

		::System::Void .ctor(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::Rendering::LODParameters* arg, ::UnityEngine::Matrix4x4* arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::UnityEngine::Rendering::LODParameters*, ::UnityEngine::Matrix4x4*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHCULLINGCONTEXT_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

