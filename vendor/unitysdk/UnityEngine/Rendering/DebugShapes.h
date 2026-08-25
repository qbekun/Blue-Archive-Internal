#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class DebugShapes; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Mesh&; }

#define UNITYENGINE_RENDERING_DEBUGSHAPES_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9FAE680)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTBOXMESH_OFFSET UNITYSDK_OFFSET(0x9FAE730)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDCONE_OFFSET UNITYSDK_OFFSET(0x9FAE840)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FAE720)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDSPHERE_OFFSET UNITYSDK_OFFSET(0x9FAF3B0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTPYRAMIDMESH_OFFSET UNITYSDK_OFFSET(0x9FAFE10)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDBOX_OFFSET UNITYSDK_OFFSET(0x9FAFE30)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTCONEMESH_OFFSET UNITYSDK_OFFSET(0x9FB08A0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDSHAPES_OFFSET UNITYSDK_OFFSET(0x9FB08C0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REBUILDRESOURCES_OFFSET UNITYSDK_OFFSET(0x9FAE750)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTSPHEREMESH_OFFSET UNITYSDK_OFFSET(0x9FB0EA0)
#define UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDPYRAMID_OFFSET UNITYSDK_OFFSET(0x9FB0A40)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugShapes_TypeDefinitionIndex = 33941;

	class DebugShapes : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::DebugShapes* s_Instance; // 0x0
		::UnityEngine::Mesh* m_sphereMesh; // 0x10
		::UnityEngine::Mesh* m_boxMesh; // 0x18
		::UnityEngine::Mesh* m_coneMesh; // 0x20
		::UnityEngine::Mesh* m_pyramidMesh; // 0x28

		::UnityEngine::Rendering::DebugShapes* get_instance()
		{
			return (return (::UnityEngine::Rendering::DebugShapes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_GET_INSTANCE_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* RequestBoxMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTBOXMESH_OFFSET))(nullptr);
		}

		::System::Void BuildCone(::UnityEngine::Mesh&* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh&*, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDCONE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void BuildSphere(::UnityEngine::Mesh&* arg, ::System::Single arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh&*, ::System::Single, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDSPHERE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Mesh* RequestPyramidMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTPYRAMIDMESH_OFFSET))(nullptr);
		}

		::System::Void BuildBox(::UnityEngine::Mesh&* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh&*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDBOX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Mesh* RequestConeMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTCONEMESH_OFFSET))(nullptr);
		}

		::System::Void BuildShapes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDSHAPES_OFFSET))(nullptr);
		}

		::System::Void RebuildResources()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REBUILDRESOURCES_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* RequestSphereMesh()
		{
			return (return (::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_REQUESTSPHEREMESH_OFFSET))(nullptr);
		}

		::System::Void BuildPyramid(::UnityEngine::Mesh&* arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh&*, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGSHAPES_BUILDPYRAMID_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

