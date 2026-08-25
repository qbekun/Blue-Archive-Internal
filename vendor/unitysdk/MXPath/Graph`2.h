#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MXPath { class Curve; }

#define MXPATH_GRAPH`2_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_ADDEDGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_CREATEVERTEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_CREATEEDGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_REMOVEEDGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_GETEDGES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_GENERATEDISTANCEMETADATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_GETEDGESCONNECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_REMOVEVETEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_GETEDGECURVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_GETVERTEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_GRAPH`2_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXPath
{
	inline static constexpr unsigned int Graph`2_TypeDefinitionIndex = 37999;

	class Graph`2 : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* vertices; // 0x0
		::Il2CppArray<::System::Object*>* edges; // 0x0
		::Il2CppArray<::System::Object*>* distanceMetadatas; // 0x0
		Il2CppObject* verticesDic; // 0x0
		Il2CppObject* edgesDic; // 0x0
		Il2CppObject* distanceMetadataDic; // 0x0
		::System::Int32 nextVertexId; // 0x0
		::System::Int32 nextEdgeId; // 0x0

		::System::Void OnBeforeSerialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_ONBEFORESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void Serialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_SERIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnAfterDeserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_ONAFTERDESERIALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetVertices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_GETVERTICES_OFFSET))(nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void AddEdge(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_ADDEDGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateVertex(::UnityEngine::Vector3* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_CREATEVERTEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateEdge(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_CREATEEDGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Deserialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_DESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void RemoveEdge(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_REMOVEEDGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetEdges()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_GETEDGES_OFFSET))(nullptr);
		}

		::System::Void GenerateDistanceMetadata()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_GENERATEDISTANCEMETADATA_OFFSET))(nullptr);
		}

		Il2CppObject* GetEdgesConnected(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_GETEDGESCONNECTED_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveVetex(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_REMOVEVETEX_OFFSET))(arg, nullptr);
		}

		::MXPath::Curve* GetEdgeCurve(Il2CppObject* arg)
		{
			return (return (::MXPath::Curve*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_GETEDGECURVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetVertex(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_GETVERTEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_vertexCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_GET_VERTEXCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean IsConnected(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_GRAPH`2_ISCONNECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

