#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_MESHRENDERER_DONTSTRIPMESHRENDERER_OFFSET UNITYSDK_OFFSET(0xA2071B0)
#define UNITYENGINE_MESHRENDERER_GET_ADDITIONALVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0xA2071C0)
#define UNITYENGINE_MESHRENDERER_SET_ADDITIONALVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0xA207200)
#define UNITYENGINE_MESHRENDERER_GET_ENLIGHTENVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0xA207240)
#define UNITYENGINE_MESHRENDERER_SET_ENLIGHTENVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0xA207280)
#define UNITYENGINE_MESHRENDERER_GET_SUBMESHSTARTINDEX_OFFSET UNITYSDK_OFFSET(0xA2072C0)
#define UNITYENGINE_MESHRENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA207300)

namespace UnityEngine
{
	inline static constexpr unsigned int MeshRenderer_TypeDefinitionIndex = 31061;

	class MeshRenderer : public Il2CppObject
	{
	public:
		::System::Void DontStripMeshRenderer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_DONTSTRIPMESHRENDERER_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* get_additionalVertexStreams()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GET_ADDITIONALVERTEXSTREAMS_OFFSET))(nullptr);
		}

		::System::Void set_additionalVertexStreams(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SET_ADDITIONALVERTEXSTREAMS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Mesh* get_enlightenVertexStream()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GET_ENLIGHTENVERTEXSTREAM_OFFSET))(nullptr);
		}

		::System::Void set_enlightenVertexStream(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SET_ENLIGHTENVERTEXSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_subMeshStartIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GET_SUBMESHSTARTINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_.CTOR_OFFSET))(nullptr);
		}

	};
}

