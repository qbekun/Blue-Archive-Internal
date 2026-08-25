#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Color32; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Material; }
namespace TMPro { class VertexSortingOrder; }

#define TMPRO_TMP_MESHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1716A0)
#define TMPRO_TMP_MESHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA171CD0)
#define TMPRO_TMP_MESHINFO_RESIZEMESHINFO_OFFSET UNITYSDK_OFFSET(0xA1727C0)
#define TMPRO_TMP_MESHINFO_RESIZEMESHINFO_OFFSET UNITYSDK_OFFSET(0xA172D00)
#define TMPRO_TMP_MESHINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xA173B40)
#define TMPRO_TMP_MESHINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xA173BE0)
#define TMPRO_TMP_MESHINFO_CLEARUNUSEDVERTICES_OFFSET UNITYSDK_OFFSET(0xA173D10)
#define TMPRO_TMP_MESHINFO_CLEARUNUSEDVERTICES_OFFSET UNITYSDK_OFFSET(0xA173D50)
#define TMPRO_TMP_MESHINFO_CLEARUNUSEDVERTICES_OFFSET UNITYSDK_OFFSET(0xA173D80)
#define TMPRO_TMP_MESHINFO_SORTGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA173E20)
#define TMPRO_TMP_MESHINFO_SORTGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA174590)
#define TMPRO_TMP_MESHINFO_SWAPVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA173EC0)
#define TMPRO_TMP_MESHINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA1747C0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_MeshInfo_TypeDefinitionIndex = 33707;

	class TMP_MeshInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Color32* s_DefaultColor; // 0x0
		::UnityEngine::Vector3* s_DefaultNormal; // 0x4
		::UnityEngine::Vector4* s_DefaultTangent; // 0x10
		::UnityEngine::Bounds* s_DefaultBounds; // 0x20
		::UnityEngine::Mesh* mesh; // 0x10
		::System::Int32 vertexCount; // 0x18
		::Il2CppArray<::System::Object*>* vertices; // 0x20
		::Il2CppArray<::System::Object*>* normals; // 0x28
		::Il2CppArray<::System::Object*>* tangents; // 0x30
		::Il2CppArray<::System::Object*>* uvs0; // 0x38
		::Il2CppArray<::System::Object*>* uvs2; // 0x40
		::Il2CppArray<::System::Object*>* colors32; // 0x48
		::Il2CppArray<::System::Object*>* triangles; // 0x50
		::UnityEngine::Material* material; // 0x58

		::System::Void .ctor(::UnityEngine::Mesh* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Mesh* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ResizeMeshInfo(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_RESIZEMESHINFO_OFFSET))(arg, nullptr);
		}

		::System::Void ResizeMeshInfo(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_RESIZEMESHINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Clear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void ClearUnusedVertices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_CLEARUNUSEDVERTICES_OFFSET))(nullptr);
		}

		::System::Void ClearUnusedVertices(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_CLEARUNUSEDVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Void ClearUnusedVertices(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_CLEARUNUSEDVERTICES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SortGeometry(::TMPro::VertexSortingOrder* arg)
		{
			((::System::Void(*)(::TMPro::VertexSortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_SORTGEOMETRY_OFFSET))(arg, nullptr);
		}

		::System::Void SortGeometry(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_SORTGEOMETRY_OFFSET))(arg, nullptr);
		}

		::System::Void SwapVertexData(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_SWAPVERTEXDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_MESHINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

