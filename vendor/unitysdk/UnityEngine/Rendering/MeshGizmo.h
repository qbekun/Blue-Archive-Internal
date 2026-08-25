#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine::Rendering { class CompareFunction; }
namespace UnityEngine { class MeshTopology; }
namespace UnityEngine { class Color; }

#define UNITYENGINE_RENDERING_MESHGIZMO__ADDWIRECUBE_G__ADDEDGE|10_0_OFFSET UNITYSDK_OFFSET(0x9FDD0D0)
#define UNITYENGINE_RENDERING_MESHGIZMO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FDD400)
#define UNITYENGINE_RENDERING_MESHGIZMO_RENDERWIREFRAME_OFFSET UNITYSDK_OFFSET(0x9FDD500)
#define UNITYENGINE_RENDERING_MESHGIZMO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FDD720)
#define UNITYENGINE_RENDERING_MESHGIZMO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9FDD8A0)
#define UNITYENGINE_RENDERING_MESHGIZMO_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x9FDD560)
#define UNITYENGINE_RENDERING_MESHGIZMO_CLEAR_OFFSET UNITYSDK_OFFSET(0x9FDD8E0)
#define UNITYENGINE_RENDERING_MESHGIZMO_ADDWIRECUBE_OFFSET UNITYSDK_OFFSET(0x9FDD970)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MeshGizmo_TypeDefinitionIndex = 34073;

	class MeshGizmo : public Il2CppObject
	{
	public:
		::System::Int32 vertexCountPerCube; // 0x0
		::UnityEngine::Mesh* mesh; // 0x10
		Il2CppObject* vertices; // 0x18
		Il2CppObject* indices; // 0x20
		Il2CppObject* colors; // 0x28
		::UnityEngine::Material* wireMaterial; // 0x30
		::UnityEngine::Material* dottedWireMaterial; // 0x38
		::UnityEngine::Material* solidMaterial; // 0x40

		::System::Void _AddWireCube_g__AddEdge|10_0(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, <>c__DisplayClass10_0&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, <>c__DisplayClass10_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MESHGIZMO__ADDWIRECUBE_G__ADDEDGE|10_0_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MESHGIZMO_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void RenderWireframe(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Rendering::CompareFunction* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Rendering::CompareFunction*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MESHGIZMO_RENDERWIREFRAME_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MESHGIZMO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MESHGIZMO_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void DrawMesh(::UnityEngine::Matrix4x4* arg, ::UnityEngine::Material* arg, ::UnityEngine::MeshTopology* arg, ::UnityEngine::Rendering::CompareFunction* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::UnityEngine::Material*, ::UnityEngine::MeshTopology*, ::UnityEngine::Rendering::CompareFunction*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MESHGIZMO_DRAWMESH_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MESHGIZMO_CLEAR_OFFSET))(nullptr);
		}

		::System::Void AddWireCube(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MESHGIZMO_ADDWIRECUBE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

