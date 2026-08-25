#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Bounds; }
namespace UnityEngine { class MeshTopology; }

#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xA2501C0)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_TOPOLOGY_OFFSET UNITYSDK_OFFSET(0xA2501E0)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_INDEXSTART_OFFSET UNITYSDK_OFFSET(0xA2501F0)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA250200)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_BASEVERTEX_OFFSET UNITYSDK_OFFSET(0xA250210)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_FIRSTVERTEX_OFFSET UNITYSDK_OFFSET(0xA250220)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA250230)
#define UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA250240)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SubMeshDescriptor_TypeDefinitionIndex = 31506;

	class SubMeshDescriptor : public Il2CppObject
	{
	public:
		::UnityEngine::Bounds* _bounds_k__BackingField; // 0x10
		::UnityEngine::MeshTopology* _topology_k__BackingField; // 0x28
		::System::Int32 _indexStart_k__BackingField; // 0x2C
		::System::Int32 _indexCount_k__BackingField; // 0x30
		::System::Int32 _baseVertex_k__BackingField; // 0x34
		::System::Int32 _firstVertex_k__BackingField; // 0x38
		::System::Int32 _vertexCount_k__BackingField; // 0x3C

		::UnityEngine::Bounds* get_bounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_BOUNDS_OFFSET))(nullptr);
		}

		::UnityEngine::MeshTopology* get_topology()
		{
			return (return (::UnityEngine::MeshTopology*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_TOPOLOGY_OFFSET))(nullptr);
		}

		::System::Int32 get_indexStart()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_INDEXSTART_OFFSET))(nullptr);
		}

		::System::Int32 get_indexCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_INDEXCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_baseVertex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_BASEVERTEX_OFFSET))(nullptr);
		}

		::System::Int32 get_firstVertex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_FIRSTVERTEX_OFFSET))(nullptr);
		}

		::System::Int32 get_vertexCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_GET_VERTEXCOUNT_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SUBMESHDESCRIPTOR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

