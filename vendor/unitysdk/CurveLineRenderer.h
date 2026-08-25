#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshCollider; }

#define CURVELINERENDERER_RESET_OFFSET UNITYSDK_OFFSET(0x2896DD0)
#define CURVELINERENDERER_REMOVEVERTEXAT_OFFSET UNITYSDK_OFFSET(0x2896EA0)
#define CURVELINERENDERER_ADDVERTEXTOLIST_OFFSET UNITYSDK_OFFSET(0x2896F90)
#define CURVELINERENDERER_GETDEFAULTVERTICES_OFFSET UNITYSDK_OFFSET(0x28970F0)
#define CURVELINERENDERER_GETSPLITTEDVERTICES_OFFSET UNITYSDK_OFFSET(0x28988F0)
#define CURVELINERENDERER_ROTATE_OFFSET UNITYSDK_OFFSET(0x28989E0)
#define CURVELINERENDERER_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x2896F00)
#define CURVELINERENDERER_SETVERTICES_OFFSET UNITYSDK_OFFSET(0x289BB70)
#define CURVELINERENDERER_BUILDMESH_OFFSET UNITYSDK_OFFSET(0x289BBD0)
#define CURVELINERENDERER_CALCULATEQDIR_OFFSET UNITYSDK_OFFSET(0x2898570)
#define CURVELINERENDERER_REBUILD_OFFSET UNITYSDK_OFFSET(0x2899060)
#define CURVELINERENDERER_CLEARVERTICES_OFFSET UNITYSDK_OFFSET(0x289EA80)
#define CURVELINERENDERER_GETROUNDEDVERTICES_OFFSET UNITYSDK_OFFSET(0x289D280)
#define CURVELINERENDERER_START_OFFSET UNITYSDK_OFFSET(0x2898D90)
#define CURVELINERENDERER_UPDATECOMPONENTS_OFFSET UNITYSDK_OFFSET(0x2896DE0)
#define CURVELINERENDERER_INSERTVERTEX_OFFSET UNITYSDK_OFFSET(0x289EAD0)
#define CURVELINERENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0x289EB40)
#define CURVELINERENDERER_ADDVERTEX_OFFSET UNITYSDK_OFFSET(0x289ED10)

	inline static constexpr unsigned int CurveLineRenderer_TypeDefinitionIndex = 37724;

	class CurveLineRenderer : public Il2CppObject
	{
	public:
		::System::Single epsilon; // 0x0
		LineType* type; // 0x18
		MeshBuildMode* meshBuildMode; // 0x1C
		::System::Single width; // 0x20
		::System::Single radius; // 0x24
		::System::Single roundedAngle; // 0x28
		::UnityEngine::Vector3* normal; // 0x2C
		::System::Boolean reverseSideEnabled; // 0x38
		Il2CppObject* vertices; // 0x40
		CurveLineRenderer* nextCurve; // 0x48
		::System::Boolean isCurveConnetionProcessed; // 0x50
		CurveLineRenderer* prevCurve; // 0x58
		CurveLineRenderer* currentCurve; // 0x60
		::System::Single previousLen; // 0x68
		::UnityEngine::Mesh* mesh; // 0x70
		::UnityEngine::MeshCollider* meshCollider; // 0x78

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_RESET_OFFSET))(nullptr);
		}

		::System::Void RemoveVertexAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_REMOVEVERTEXAT_OFFSET))(arg, nullptr);
		}

		::System::Void AddVertexToList(Il2CppObject* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_ADDVERTEXTOLIST_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* getDefaultVertices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_GETDEFAULTVERTICES_OFFSET))(nullptr);
		}

		Il2CppObject* getSplittedVertices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_GETSPLITTEDVERTICES_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* rotate(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_ROTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Invalidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_INVALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetVertices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_SETVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Void BuildMesh(::UnityEngine::Mesh* arg, ::UnityEngine::MeshCollider* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::MeshCollider*, Il2CppObject*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_BUILDMESH_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* calculateQdir(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_CALCULATEQDIR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Mesh* Rebuild(::UnityEngine::Mesh* arg, ::UnityEngine::MeshCollider* arg)
		{
			return (return (::UnityEngine::Mesh*(*)(::UnityEngine::Mesh*, ::UnityEngine::MeshCollider*, ::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_REBUILD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearVertices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_CLEARVERTICES_OFFSET))(nullptr);
		}

		Il2CppObject* getRoundedVertices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_GETROUNDEDVERTICES_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_START_OFFSET))(nullptr);
		}

		::System::Void updateComponents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_UPDATECOMPONENTS_OFFSET))(nullptr);
		}

		::System::Void InsertVertex(::System::Int32 arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_INSERTVERTEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddVertex(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CURVELINERENDERER_ADDVERTEX_OFFSET))(arg, nullptr);
		}

	};

