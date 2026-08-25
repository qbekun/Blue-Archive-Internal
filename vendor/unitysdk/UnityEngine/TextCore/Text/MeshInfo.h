#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Color32; }
namespace UnityEngine { class Material; }
namespace UnityEngine::TextCore::Text { class VertexSortingOrder; }

#define UNITYENGINE_TEXTCORE_TEXT_MESHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2D6C50)
#define UNITYENGINE_TEXTCORE_TEXT_MESHINFO_RESIZEMESHINFO_OFFSET UNITYSDK_OFFSET(0xA2D7360)
#define UNITYENGINE_TEXTCORE_TEXT_MESHINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0xA2D7580)
#define UNITYENGINE_TEXTCORE_TEXT_MESHINFO_CLEARUNUSEDVERTICES_OFFSET UNITYSDK_OFFSET(0xA2D75C0)
#define UNITYENGINE_TEXTCORE_TEXT_MESHINFO_SORTGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA2D7600)
#define UNITYENGINE_TEXTCORE_TEXT_MESHINFO_SWAPVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA2D7690)
#define UNITYENGINE_TEXTCORE_TEXT_MESHINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2D7D60)

namespace UnityEngine::TextCore::Text
{
	inline static constexpr unsigned int MeshInfo_TypeDefinitionIndex = 35577;

	class MeshInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Color32* k_DefaultColor; // 0x0
		::System::Int32 vertexCount; // 0x10
		::Il2CppArray<::System::Object*>* vertices; // 0x18
		::Il2CppArray<::System::Object*>* uvs0; // 0x20
		::Il2CppArray<::System::Object*>* uvs2; // 0x28
		::Il2CppArray<::System::Object*>* colors32; // 0x30
		::Il2CppArray<::System::Object*>* triangles; // 0x38
		::UnityEngine::Material* material; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MESHINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void ResizeMeshInfo(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MESHINFO_RESIZEMESHINFO_OFFSET))(arg, nullptr);
		}

		::System::Void Clear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MESHINFO_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void ClearUnusedVertices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MESHINFO_CLEARUNUSEDVERTICES_OFFSET))(nullptr);
		}

		::System::Void SortGeometry(::UnityEngine::TextCore::Text::VertexSortingOrder* arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::VertexSortingOrder*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MESHINFO_SORTGEOMETRY_OFFSET))(arg, nullptr);
		}

		::System::Void SwapVertexData(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MESHINFO_SWAPVERTEXDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTCORE_TEXT_MESHINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

