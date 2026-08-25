#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_RENDERING_UNIVERSAL_XRVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA090FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_XRVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA091070)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int XRView_TypeDefinitionIndex = 32813;

	class XRView : public Il2CppObject
	{
	public:
		::UnityEngine::Matrix4x4* projMatrix; // 0x10
		::UnityEngine::Matrix4x4* viewMatrix; // 0x50
		::UnityEngine::Rect* viewport; // 0x90
		::UnityEngine::Mesh* occlusionMesh; // 0xA0
		::System::Int32 textureArraySlice; // 0xA8

		::System::Void .ctor(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Rect* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Rect*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRVIEW_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(XRRenderPass* arg, XRRenderParameter* arg)
		{
			((::System::Void(*)(XRRenderPass*, XRRenderParameter*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_XRVIEW_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

