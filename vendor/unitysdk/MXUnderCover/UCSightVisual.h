#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCSight; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class LayerMask; }
class ViewCastInfo;
namespace MXUnderCover { class UCEntity; }
class EdgeInfo;
namespace UnityEngine { class Vector3; }

#define MXUNDERCOVER_UCSIGHTVISUAL_GET_VIEWANGLE_OFFSET UNITYSDK_OFFSET(0xD8D3A0)
#define MXUNDERCOVER_UCSIGHTVISUAL_UPDATEMATERIALCOLOR_OFFSET UNITYSDK_OFFSET(0xD8D3C0)
#define MXUNDERCOVER_UCSIGHTVISUAL_GET_OBSTACLEMASK_OFFSET UNITYSDK_OFFSET(0xD8D470)
#define MXUNDERCOVER_UCSIGHTVISUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xD8D490)
#define MXUNDERCOVER_UCSIGHTVISUAL_UPDATESHADERPROPERTIES_OFFSET UNITYSDK_OFFSET(0xD8D5F0)
#define MXUNDERCOVER_UCSIGHTVISUAL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD8D940)
#define MXUNDERCOVER_UCSIGHTVISUAL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD8E910)
#define MXUNDERCOVER_UCSIGHTVISUAL_VIEWCAST_OFFSET UNITYSDK_OFFSET(0xD8E9F0)
#define MXUNDERCOVER_UCSIGHTVISUAL__ONENABLE_B__22_0_OFFSET UNITYSDK_OFFSET(0xD8ED20)
#define MXUNDERCOVER_UCSIGHTVISUAL_GET_VIEWRADIUS_OFFSET UNITYSDK_OFFSET(0xD8D920)
#define MXUNDERCOVER_UCSIGHTVISUAL_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xD8ED30)
#define MXUNDERCOVER_UCSIGHTVISUAL_FINDEDGE_OFFSET UNITYSDK_OFFSET(0xD8F300)
#define MXUNDERCOVER_UCSIGHTVISUAL_DRAWFIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0xD8D980)
#define MXUNDERCOVER_UCSIGHTVISUAL_AWAKE_OFFSET UNITYSDK_OFFSET(0xD8F520)
#define MXUNDERCOVER_UCSIGHTVISUAL_DIRFROMANGLE_OFFSET UNITYSDK_OFFSET(0xD8EC60)
#define MXUNDERCOVER_UCSIGHTVISUAL_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xD8F640)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCSightVisual_TypeDefinitionIndex = 9707;

	class UCSightVisual : public Il2CppObject
	{
	public:
		::System::Single meshResolution; // 0x18
		::System::Int32 edgeResolveIterations; // 0x1C
		::System::Single edgeDstThreshold; // 0x20
		::MXUnderCover::UCSight* sight; // 0x28
		::UnityEngine::MeshFilter* viewMeshFilter; // 0x30
		::UnityEngine::Mesh* viewMesh; // 0x38
		::UnityEngine::MeshRenderer* meshRenderer; // 0x40
		::UnityEngine::Material* viewMaterial; // 0x48
		::UnityEngine::Material* instMaterial; // 0x50
		Il2CppObject* viewPoints; // 0x58
		Il2CppObject* vertices; // 0x60
		Il2CppObject* uvs; // 0x68
		Il2CppObject* triangles; // 0x70
		::System::Boolean detected; // 0x78

		::System::Single get_viewAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_GET_VIEWANGLE_OFFSET))(nullptr);
		}

		::System::Void UpdateMaterialColor(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_UPDATEMATERIALCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::LayerMask* get_obstacleMask()
		{
			return ((::UnityEngine::LayerMask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_GET_OBSTACLEMASK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateShaderProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_UPDATESHADERPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_ONENABLE_OFFSET))(nullptr);
		}

		ViewCastInfo* ViewCast(::System::Single arg)
		{
			return ((ViewCastInfo*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_VIEWCAST_OFFSET))(arg, nullptr);
		}

		::System::Void _OnEnable_b__22_0(::MXUnderCover::UCEntity* arg)
		{
			((::System::Void(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL__ONENABLE_B__22_0_OFFSET))(arg, nullptr);
		}

		::System::Single get_viewRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_GET_VIEWRADIUS_OFFSET))(nullptr);
		}

		::System::Void OnDrawGizmos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_ONDRAWGIZMOS_OFFSET))(nullptr);
		}

		EdgeInfo* FindEdge(ViewCastInfo* arg, ViewCastInfo* arg2)
		{
			return ((EdgeInfo*(*)(ViewCastInfo*, ViewCastInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_FINDEDGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void DrawFieldOfView()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_DRAWFIELDOFVIEW_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_AWAKE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* DirFromAngle(::System::Single arg, ::System::Boolean arg2)
		{
			return ((::UnityEngine::Vector3*(*)(::System::Single, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_DIRFROMANGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCSIGHTVISUAL_ONVALIDATE_OFFSET))(nullptr);
		}

	};
}

