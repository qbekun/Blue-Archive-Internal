#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Rect; }
namespace UnityEngine::UIElements { class Vertex; }

#define UNITYENGINE_UIELEMENTS_MESHWRITEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4084D0)
#define UNITYENGINE_UIELEMENTS_MESHWRITEDATA_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA4084E0)
#define UNITYENGINE_UIELEMENTS_MESHWRITEDATA_GET_INDEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA408520)
#define UNITYENGINE_UIELEMENTS_MESHWRITEDATA_GET_UVREGION_OFFSET UNITYSDK_OFFSET(0xA408560)
#define UNITYENGINE_UIELEMENTS_MESHWRITEDATA_SETNEXTVERTEX_OFFSET UNITYSDK_OFFSET(0xA408570)
#define UNITYENGINE_UIELEMENTS_MESHWRITEDATA_SETNEXTINDEX_OFFSET UNITYSDK_OFFSET(0xA4085F0)
#define UNITYENGINE_UIELEMENTS_MESHWRITEDATA_SETALLVERTICES_OFFSET UNITYSDK_OFFSET(0xA408640)
#define UNITYENGINE_UIELEMENTS_MESHWRITEDATA_SETALLINDICES_OFFSET UNITYSDK_OFFSET(0xA408700)
#define UNITYENGINE_UIELEMENTS_MESHWRITEDATA_RESET_OFFSET UNITYSDK_OFFSET(0xA4087C0)
#define UNITYENGINE_UIELEMENTS_MESHWRITEDATA_RESET_OFFSET UNITYSDK_OFFSET(0xA408820)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MeshWriteData_TypeDefinitionIndex = 30576;

	class MeshWriteData : public Il2CppObject
	{
	public:
		Il2CppObject* m_Vertices; // 0x10
		Il2CppObject* m_Indices; // 0x20
		::UnityEngine::Rect* m_UVRegion; // 0x30
		::System::Int32 currentIndex; // 0x40
		::System::Int32 currentVertex; // 0x44

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHWRITEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_vertexCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHWRITEDATA_GET_VERTEXCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_indexCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHWRITEDATA_GET_INDEXCOUNT_OFFSET))(nullptr);
		}

		::UnityEngine::Rect* get_uvRegion()
		{
			return (return (::UnityEngine::Rect*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHWRITEDATA_GET_UVREGION_OFFSET))(nullptr);
		}

		::System::Void SetNextVertex(::UnityEngine::UIElements::Vertex* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHWRITEDATA_SETNEXTVERTEX_OFFSET))(arg, nullptr);
		}

		::System::Void SetNextIndex(::System::UInt16 arg)
		{
			((::System::Void(*)(::System::UInt16, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHWRITEDATA_SETNEXTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void SetAllVertices(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHWRITEDATA_SETALLVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Void SetAllIndices(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHWRITEDATA_SETALLINDICES_OFFSET))(arg, nullptr);
		}

		::System::Void Reset(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHWRITEDATA_RESET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Reset(Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::Rect* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::Rect*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MESHWRITEDATA_RESET_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

