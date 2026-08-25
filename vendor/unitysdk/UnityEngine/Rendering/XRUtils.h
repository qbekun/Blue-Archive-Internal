#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_XRUTILS_DRAWOCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0x9FDEF10)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int XRUtils_TypeDefinitionIndex = 34080;

	class XRUtils : public Il2CppObject
	{
	public:
		::System::Void DrawOcclusionMesh(::UnityEngine::Rendering::CommandBuffer* arg, ::UnityEngine::Camera* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XRUTILS_DRAWOCCLUSIONMESH_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

