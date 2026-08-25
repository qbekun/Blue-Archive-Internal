#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_MESHFILTER_DONTSTRIPMESHFILTER_OFFSET UNITYSDK_OFFSET(0xA206960)
#define UNITYENGINE_MESHFILTER_GET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0xA206970)
#define UNITYENGINE_MESHFILTER_SET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0xA2069B0)
#define UNITYENGINE_MESHFILTER_GET_MESH_OFFSET UNITYSDK_OFFSET(0xA2069F0)
#define UNITYENGINE_MESHFILTER_SET_MESH_OFFSET UNITYSDK_OFFSET(0xA206A30)
#define UNITYENGINE_MESHFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA206A70)

namespace UnityEngine
{
	inline static constexpr unsigned int MeshFilter_TypeDefinitionIndex = 31022;

	class MeshFilter : public Il2CppObject
	{
	public:
		::System::Void DontStripMeshFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_DONTSTRIPMESHFILTER_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* get_sharedMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_GET_SHAREDMESH_OFFSET))(nullptr);
		}

		::System::Void set_sharedMesh(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_SET_SHAREDMESH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_GET_MESH_OFFSET))(nullptr);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_SET_MESH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHFILTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

