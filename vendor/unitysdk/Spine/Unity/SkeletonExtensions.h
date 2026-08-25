#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Color; }
namespace Spine { class Skeleton; }
namespace Spine { class RegionAttachment; }
namespace Spine { class MeshAttachment; }
namespace Spine { class Slot; }
namespace UnityEngine { class Color32; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Matrix4x4; }
namespace Spine { class Bone; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Material; }
namespace Spine { class Attachment; }
namespace Spine { class VertexAttachment; }
namespace Spine { class PointAttachment; }

#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x961ED90)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x961EDB0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x961EDD0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x961EDF0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLORTINTBLACK_OFFSET UNITYSDK_OFFSET(0x961EE10)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x961EE50)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x961EE90)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x961EED0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x961EF10)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x961EF50)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x961EF90)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x961EFD0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x961F010)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x961F050)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETMATRIX4X4_OFFSET UNITYSDK_OFFSET(0x961F080)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x961F100)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x961F130)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x961F160)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_OFFSET UNITYSDK_OFFSET(0x961F180)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_OFFSET UNITYSDK_OFFSET(0x961F1B0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x961F200)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x961F260)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x961F2C0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETQUATERNION_OFFSET UNITYSDK_OFFSET(0x961F320)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALQUATERNION_OFFSET UNITYSDK_OFFSET(0x961F390)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x961F400)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x961F430)
#define SPINE_UNITY_SKELETONEXTENSIONS_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x961F4B0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETPOSITIONSKELETONSPACE_OFFSET UNITYSDK_OFFSET(0x961F500)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x961F580)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALVERTICES_OFFSET UNITYSDK_OFFSET(0x961F6D0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDVERTICES_OFFSET UNITYSDK_OFFSET(0x961F9B0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x961FB60)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x961FBF0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonExtensions_TypeDefinitionIndex = 35378;

	class SkeletonExtensions : public Il2CppObject
	{
	public:
		::System::Single ByteToFloat; // 0x0

		::UnityEngine::Color* GetColor(::Spine::Skeleton* arg)
		{
			return (return (::UnityEngine::Color*(*)(::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* GetColor(::Spine::RegionAttachment* arg)
		{
			return (return (::UnityEngine::Color*(*)(::Spine::RegionAttachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* GetColor(::Spine::MeshAttachment* arg)
		{
			return (return (::UnityEngine::Color*(*)(::Spine::MeshAttachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* GetColor(::Spine::Slot* arg)
		{
			return (return (::UnityEngine::Color*(*)(::Spine::Slot*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* GetColorTintBlack(::Spine::Slot* arg)
		{
			return (return (::UnityEngine::Color*(*)(::Spine::Slot*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLORTINTBLACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetColor(::Spine::Skeleton* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColor(::Spine::Skeleton* arg, ::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColor(::Spine::Slot* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::Spine::Slot*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColor(::Spine::Slot* arg, ::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::Spine::Slot*, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColor(::Spine::RegionAttachment* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColor(::Spine::RegionAttachment* arg, ::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColor(::Spine::MeshAttachment* arg, ::UnityEngine::Color* arg)
		{
			((::System::Void(*)(::Spine::MeshAttachment*, ::UnityEngine::Color*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetColor(::Spine::MeshAttachment* arg, ::UnityEngine::Color32* arg)
		{
			((::System::Void(*)(::Spine::MeshAttachment*, ::UnityEngine::Color32*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLocalScale(::Spine::Skeleton* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::Spine::Skeleton*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALSCALE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Matrix4x4* GetMatrix4x4(::Spine::Bone* arg)
		{
			return (return (::UnityEngine::Matrix4x4*(*)(::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETMATRIX4X4_OFFSET))(arg, nullptr);
		}

		::System::Void SetLocalPosition(::Spine::Bone* arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::Spine::Bone*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLocalPosition(::Spine::Bone* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::Spine::Bone*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* GetLocalPosition(::Spine::Bone* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetSkeletonSpacePosition(::Spine::Bone* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetSkeletonSpacePosition(::Spine::Bone* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::Spine::Bone*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetWorldPosition(::Spine::Bone* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::Spine::Bone*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetWorldPosition(::Spine::Bone* arg, ::UnityEngine::Transform* arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::Spine::Bone*, ::UnityEngine::Transform*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetWorldPosition(::Spine::Bone* arg, ::UnityEngine::Transform* arg, ::System::Single arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::Spine::Bone*, ::UnityEngine::Transform*, ::System::Single, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* GetQuaternion(::Spine::Bone* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETQUATERNION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* GetLocalQuaternion(::Spine::Bone* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::Spine::Bone*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALQUATERNION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* GetLocalScale(::Spine::Skeleton* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALSCALE_OFFSET))(arg, nullptr);
		}

		::System::Void GetWorldToLocalMatrix(::Spine::Bone* arg, float&* arg, float&* arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(::Spine::Bone*, float&*, float&*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDTOLOCALMATRIX_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* WorldToLocal(::Spine::Bone* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::Spine::Bone*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_WORLDTOLOCAL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector2* SetPositionSkeletonSpace(::Spine::Bone* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::Spine::Bone*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETPOSITIONSKELETONSPACE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Material* GetMaterial(::Spine::Attachment* arg)
		{
			return (return (::UnityEngine::Material*(*)(::Spine::Attachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETMATERIAL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetLocalVertices(::Spine::VertexAttachment* arg, ::Spine::Slot* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Spine::VertexAttachment*, ::Spine::Slot*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALVERTICES_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetWorldVertices(::Spine::VertexAttachment* arg, ::Spine::Slot* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Spine::VertexAttachment*, ::Spine::Slot*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDVERTICES_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetWorldPosition(::Spine::PointAttachment* arg, ::Spine::Slot* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::Spine::PointAttachment*, ::Spine::Slot*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetWorldPosition(::Spine::PointAttachment* arg, ::Spine::Bone* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::Spine::PointAttachment*, ::Spine::Bone*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

