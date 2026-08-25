#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::LibTessDotNet { class Vec3; }
namespace UnityEngine { class BoundingSphere; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class BoundingSphere&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_CREATESHADOWTRIANGLES_OFFSET UNITYSDK_OFFSET(0xA028EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_INTERPCUSTOMVERTEXDATA_OFFSET UNITYSDK_OFFSET(0xA0294B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_SORTEDGES_OFFSET UNITYSDK_OFFSET(0xA0294E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_ISOUTSIDEEDGE_OFFSET UNITYSDK_OFFSET(0xA029360)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_GENERATESHADOWMESH_OFFSET UNITYSDK_OFFSET(0xA029580)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_COMPUTEBOUNDINGSPHERE_OFFSET UNITYSDK_OFFSET(0xA02A490)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_CREATEEDGE_OFFSET UNITYSDK_OFFSET(0xA02A5F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_POPULATEEDGEARRAY_OFFSET UNITYSDK_OFFSET(0xA02A1E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_INITIALIZETANGENTS_OFFSET UNITYSDK_OFFSET(0xA02A0C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA02A850)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShadowUtility_TypeDefinitionIndex = 32502;

	class ShadowUtility : public Il2CppObject
	{
	public:
		::System::Void CreateShadowTriangles(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_CREATESHADOWTRIANGLES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Object* InterpCustomVertexData(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_INTERPCUSTOMVERTEXDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SortEdges(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_SORTEDGES_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOutsideEdge(::System::Int32 arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_ISOUTSIDEEDGE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::BoundingSphere* GenerateShadowMesh(::UnityEngine::Mesh* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::BoundingSphere*(*)(::UnityEngine::Mesh*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_GENERATESHADOWMESH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ComputeBoundingSphere(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::BoundingSphere&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::BoundingSphere&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_COMPUTEBOUNDINGSPHERE_OFFSET))(arg, arg, nullptr);
		}

		Edge* CreateEdge(::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Edge*(*)(::System::Int32, ::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_CREATEEDGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void PopulateEdgeArray(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_POPULATEEDGEARRAY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitializeTangents(::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_INITIALIZETANGENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SHADOWUTILITY_.CTOR_OFFSET))(nullptr);
		}

	};
}

