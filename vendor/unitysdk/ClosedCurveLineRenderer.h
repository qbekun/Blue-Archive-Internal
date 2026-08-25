#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Mesh; }

#define CLOSEDCURVELINERENDERER_GETDEFAULTVERTICES_OFFSET UNITYSDK_OFFSET(0x288C3E0)
#define CLOSEDCURVELINERENDERER_BUILDMESH_OFFSET UNITYSDK_OFFSET(0x288E810)
#define CLOSEDCURVELINERENDERER_GETSPLITTEDVERTICES_OFFSET UNITYSDK_OFFSET(0x2890650)
#define CLOSEDCURVELINERENDERER_SETVERTICES_OFFSET UNITYSDK_OFFSET(0x2890740)
#define CLOSEDCURVELINERENDERER_SET_REVERSESIDEENABLED_OFFSET UNITYSDK_OFFSET(0x2890820)
#define CLOSEDCURVELINERENDERER_RESET_OFFSET UNITYSDK_OFFSET(0x2890830)
#define CLOSEDCURVELINERENDERER_GETROUNDEDVERTICES_OFFSET UNITYSDK_OFFSET(0x28908D0)
#define CLOSEDCURVELINERENDERER_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x28939D0)
#define CLOSEDCURVELINERENDERER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x28939F0)
#define CLOSEDCURVELINERENDERER_GET_REVERSESIDEENABLED_OFFSET UNITYSDK_OFFSET(0x2893A00)
#define CLOSEDCURVELINERENDERER_REBUILD_OFFSET UNITYSDK_OFFSET(0x2893A10)
#define CLOSEDCURVELINERENDERER_ROTATE_OFFSET UNITYSDK_OFFSET(0x2896420)
#define CLOSEDCURVELINERENDERER_GET_MESHBUILDMODE_OFFSET UNITYSDK_OFFSET(0x28967D0)
#define CLOSEDCURVELINERENDERER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x28967E0)
#define CLOSEDCURVELINERENDERER_REMOVEVERTEXAT_OFFSET UNITYSDK_OFFSET(0x28967F0)
#define CLOSEDCURVELINERENDERER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2896850)
#define CLOSEDCURVELINERENDERER_ADDVERTEX_OFFSET UNITYSDK_OFFSET(0x2896A20)
#define CLOSEDCURVELINERENDERER_GET_ROUNDEDANGLE_OFFSET UNITYSDK_OFFSET(0x2896AF0)
#define CLOSEDCURVELINERENDERER_ADDVERTEXTOLIST_OFFSET UNITYSDK_OFFSET(0x288E6B0)
#define CLOSEDCURVELINERENDERER_CLEARVERTICES_OFFSET UNITYSDK_OFFSET(0x2896B00)
#define CLOSEDCURVELINERENDERER_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x2896B50)
#define CLOSEDCURVELINERENDERER_INITIALIZEMESHCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x2896B60)
#define CLOSEDCURVELINERENDERER_GETMESHVERTICES_OFFSET UNITYSDK_OFFSET(0x2896C80)
#define CLOSEDCURVELINERENDERER_INSERTVERTEX_OFFSET UNITYSDK_OFFSET(0x2896CD0)
#define CLOSEDCURVELINERENDERER_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x2896D40)
#define CLOSEDCURVELINERENDERER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x2896D60)
#define CLOSEDCURVELINERENDERER_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x28907A0)
#define CLOSEDCURVELINERENDERER_UPDATECOMPONENTS_OFFSET UNITYSDK_OFFSET(0x2890840)
#define CLOSEDCURVELINERENDERER_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x2896D70)
#define CLOSEDCURVELINERENDERER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x2896D80)
#define CLOSEDCURVELINERENDERER_SET_MESHBUILDMODE_OFFSET UNITYSDK_OFFSET(0x2896D90)
#define CLOSEDCURVELINERENDERER_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x2896DA0)
#define CLOSEDCURVELINERENDERER_SET_ROUNDEDANGLE_OFFSET UNITYSDK_OFFSET(0x2896DB0)
#define CLOSEDCURVELINERENDERER_CALCULATEQDIR_OFFSET UNITYSDK_OFFSET(0x2895E60)
#define CLOSEDCURVELINERENDERER_SET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x2896DC0)

	inline static constexpr unsigned int ClosedCurveLineRenderer_TypeDefinitionIndex = 37721;

	class ClosedCurveLineRenderer : public Il2CppObject
	{
	public:
		::System::Single epsilon; // 0x0
		LineType* _type; // 0x18
		MeshBuildMode* _meshBuildMode; // 0x1C
		::System::Single _width; // 0x20
		::System::Single _radius; // 0x24
		::System::Single _roundedAngle; // 0x28
		::UnityEngine::Vector3* _normal; // 0x2C
		::System::Boolean _reverseSideEnabled; // 0x38
		::System::Boolean _isClosed; // 0x39
		Il2CppObject* vertices; // 0x40
		::UnityEngine::Mesh* mesh; // 0x48
		Il2CppObject* meshVertices; // 0x50

		Il2CppObject* getDefaultVertices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_GETDEFAULTVERTICES_OFFSET))(nullptr);
		}

		::System::Void BuildMesh(::UnityEngine::Mesh* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, Il2CppObject*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_BUILDMESH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* getSplittedVertices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_GETSPLITTEDVERTICES_OFFSET))(nullptr);
		}

		::System::Void SetVertices(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_SETVERTICES_OFFSET))(arg, nullptr);
		}

		::System::Void set_reverseSideEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_SET_REVERSESIDEENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_RESET_OFFSET))(nullptr);
		}

		Il2CppObject* getRoundedVertices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_GETROUNDEDVERTICES_OFFSET))(nullptr);
		}

		::System::Void set_normal(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_SET_NORMAL_OFFSET))(arg, nullptr);
		}

		::System::Single get_radius()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_GET_RADIUS_OFFSET))(nullptr);
		}

		::System::Boolean get_reverseSideEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_GET_REVERSESIDEENABLED_OFFSET))(nullptr);
		}

		::UnityEngine::Mesh* Rebuild(::UnityEngine::Mesh* arg)
		{
			return (return (::UnityEngine::Mesh*(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_REBUILD_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* rotate(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_ROTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		MeshBuildMode* get_meshBuildMode()
		{
			return (return (MeshBuildMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_GET_MESHBUILDMODE_OFFSET))(nullptr);
		}

		::System::Void set_type(LineType* arg)
		{
			((::System::Void(*)(LineType*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveVertexAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_REMOVEVERTEXAT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddVertex(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_ADDVERTEX_OFFSET))(arg, nullptr);
		}

		::System::Single get_roundedAngle()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_GET_ROUNDEDANGLE_OFFSET))(nullptr);
		}

		::System::Void AddVertexToList(Il2CppObject* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_ADDVERTEXTOLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearVertices()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_CLEARVERTICES_OFFSET))(nullptr);
		}

		::System::Single get_width()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Void InitializeMeshComponents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_INITIALIZEMESHCOMPONENTS_OFFSET))(nullptr);
		}

		Il2CppObject* GetMeshVertices()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_GETMESHVERTICES_OFFSET))(nullptr);
		}

		::System::Void InsertVertex(::System::Int32 arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_INSERTVERTEX_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* get_normal()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_GET_NORMAL_OFFSET))(nullptr);
		}

		::System::Void set_radius(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_SET_RADIUS_OFFSET))(arg, nullptr);
		}

		::System::Void Invalidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_INVALIDATE_OFFSET))(nullptr);
		}

		::System::Void updateComponents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_UPDATECOMPONENTS_OFFSET))(nullptr);
		}

		::System::Void set_width(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		LineType* get_type()
		{
			return (return (LineType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_meshBuildMode(MeshBuildMode* arg)
		{
			((::System::Void(*)(MeshBuildMode*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_SET_MESHBUILDMODE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isClosed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_GET_ISCLOSED_OFFSET))(nullptr);
		}

		::System::Void set_roundedAngle(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_SET_ROUNDEDANGLE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* calculateQdir(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_CALCULATEQDIR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void set_isClosed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLOSEDCURVELINERENDERER_SET_ISCLOSED_OFFSET))(arg, nullptr);
		}

	};

