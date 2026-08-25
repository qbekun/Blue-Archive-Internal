#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace Spine { class SkeletonClipping; }
namespace Spine::Unity { class MeshGeneratorBuffers; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace Spine { class Skeleton; }
namespace UnityEngine { class Material; }
namespace Spine::Unity { class SubmeshInstruction; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Mesh; }
namespace Spine { class RegionAttachment; }
namespace Spine { class MeshAttachment; }
namespace Spine { class SkeletonData; }

#define SPINE_UNITY_MESHGENERATOR_GET_UV2_OFFSET UNITYSDK_OFFSET(0x96192D0)
#define SPINE_UNITY_MESHGENERATOR_GET_UV3_OFFSET UNITYSDK_OFFSET(0x9619240)
#define SPINE_UNITY_MESHGENERATOR_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x9612090)
#define SPINE_UNITY_MESHGENERATOR_SUBMESHINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x96193D0)
#define SPINE_UNITY_MESHGENERATOR_GET_BUFFERS_OFFSET UNITYSDK_OFFSET(0x960E620)
#define SPINE_UNITY_MESHGENERATOR_GET_SKELETONCLIPPING_OFFSET UNITYSDK_OFFSET(0x9619410)
#define SPINE_UNITY_MESHGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x960FF90)
#define SPINE_UNITY_MESHGENERATOR_GENERATESINGLESUBMESHINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x960A740)
#define SPINE_UNITY_MESHGENERATOR_REQUIRESMULTIPLESUBMESHESBYDRAWORDER_OFFSET UNITYSDK_OFFSET(0x9619420)
#define SPINE_UNITY_MESHGENERATOR_GENERATESKELETONRENDERERINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x960DB50)
#define SPINE_UNITY_MESHGENERATOR_TRYREPLACEMATERIALS_OFFSET UNITYSDK_OFFSET(0x960AD50)
#define SPINE_UNITY_MESHGENERATOR_BEGIN_OFFSET UNITYSDK_OFFSET(0x9609C30)
#define SPINE_UNITY_MESHGENERATOR_ADDSUBMESH_OFFSET UNITYSDK_OFFSET(0x960AEC0)
#define SPINE_UNITY_MESHGENERATOR_BUILDMESH_OFFSET UNITYSDK_OFFSET(0x960E570)
#define SPINE_UNITY_MESHGENERATOR_BUILDMESHWITHARRAYS_OFFSET UNITYSDK_OFFSET(0x960C110)
#define SPINE_UNITY_MESHGENERATOR_SCALEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x96198D0)
#define SPINE_UNITY_MESHGENERATOR_SCALEANDOFFSETVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x9619A90)
#define SPINE_UNITY_MESHGENERATOR_GETMESHBOUNDS_OFFSET UNITYSDK_OFFSET(0x9619D00)
#define SPINE_UNITY_MESHGENERATOR_ADDATTACHMENTTINTBLACK_OFFSET UNITYSDK_OFFSET(0x96197A0)
#define SPINE_UNITY_MESHGENERATOR_PREPAREOPTIONALUVBUFFER_OFFSET UNITYSDK_OFFSET(0x9619310)
#define SPINE_UNITY_MESHGENERATOR_RESIZEOPTIONALUVBUFFER_OFFSET UNITYSDK_OFFSET(0x9619E00)
#define SPINE_UNITY_MESHGENERATOR_FILLVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x960E6E0)
#define SPINE_UNITY_MESHGENERATOR_FILLLATEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x960EC50)
#define SPINE_UNITY_MESHGENERATOR_FILLTRIANGLES_OFFSET UNITYSDK_OFFSET(0x960EAD0)
#define SPINE_UNITY_MESHGENERATOR_ENSUREVERTEXCAPACITY_OFFSET UNITYSDK_OFFSET(0x9609990)
#define SPINE_UNITY_MESHGENERATOR_TRIMEXCESS_OFFSET UNITYSDK_OFFSET(0x961A3F0)
#define SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DENSURESIZE_OFFSET UNITYSDK_OFFSET(0x9619E70)
#define SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DTRIANGLES_OFFSET UNITYSDK_OFFSET(0x9619F20)
#define SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DBUFFER_OFFSET UNITYSDK_OFFSET(0x961A1F0)
#define SPINE_UNITY_MESHGENERATOR_FILLMESHLOCAL_OFFSET UNITYSDK_OFFSET(0x961A520)
#define SPINE_UNITY_MESHGENERATOR_FILLMESHLOCAL_OFFSET UNITYSDK_OFFSET(0x961B410)
#define SPINE_UNITY_MESHGENERATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x961C0F0)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshGenerator_TypeDefinitionIndex = 35356;

	class MeshGenerator : public Il2CppObject
	{
	public:
		Settings* settings; // 0x10
		::System::Single BoundsMinDefault; // 0x0
		::System::Single BoundsMaxDefault; // 0x0
		Il2CppObject* vertexBuffer; // 0x20
		Il2CppObject* uvBuffer; // 0x28
		Il2CppObject* colorBuffer; // 0x30
		Il2CppObject* submeshes; // 0x38
		::UnityEngine::Vector2* meshBoundsMin; // 0x40
		::UnityEngine::Vector2* meshBoundsMax; // 0x48
		::System::Single meshBoundsThickness; // 0x50
		::System::Int32 submeshIndex; // 0x54
		::Spine::SkeletonClipping* clipper; // 0x58
		::Il2CppArray<::System::Object*>* tempVerts; // 0x60
		::Il2CppArray<::System::Object*>* regionTriangles; // 0x68
		::Il2CppArray<::System::Object*>* normals; // 0x70
		::Il2CppArray<::System::Object*>* tangents; // 0x78
		::Il2CppArray<::System::Object*>* tempTanBuffer; // 0x80
		Il2CppObject* uv2; // 0x88
		Il2CppObject* uv3; // 0x90
		Il2CppObject* AttachmentVerts; // 0x0
		Il2CppObject* AttachmentUVs; // 0x8
		Il2CppObject* AttachmentColors32; // 0x10
		Il2CppObject* AttachmentIndices; // 0x18

		::Il2CppArray<::System::Object*>* get_UV2()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GET_UV2_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_UV3()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GET_UV3_OFFSET))(nullptr);
		}

		::System::Int32 get_VertexCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GET_VERTEXCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 SubmeshIndexCount(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SUBMESHINDEXCOUNT_OFFSET))(arg, nullptr);
		}

		::Spine::Unity::MeshGeneratorBuffers* get_Buffers()
		{
			return (return (::Spine::Unity::MeshGeneratorBuffers*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GET_BUFFERS_OFFSET))(nullptr);
		}

		::Spine::SkeletonClipping* get_SkeletonClipping()
		{
			return (return (::Spine::SkeletonClipping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GET_SKELETONCLIPPING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GenerateSingleSubmeshInstruction(::Spine::Unity::SkeletonRendererInstruction* arg, ::Spine::Skeleton* arg, ::UnityEngine::Material* arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::Spine::Skeleton*, ::UnityEngine::Material*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GENERATESINGLESUBMESHINSTRUCTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean RequiresMultipleSubmeshesByDrawOrder(::Spine::Skeleton* arg)
		{
			return (return (::System::Boolean(*)(::Spine::Skeleton*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_REQUIRESMULTIPLESUBMESHESBYDRAWORDER_OFFSET))(arg, nullptr);
		}

		::System::Void GenerateSkeletonRendererInstruction(::Spine::Unity::SkeletonRendererInstruction* arg, ::Spine::Skeleton* arg, Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::Spine::Skeleton*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GENERATESKELETONRENDERERINSTRUCTION_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void TryReplaceMaterials(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_TRYREPLACEMATERIALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Begin()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_BEGIN_OFFSET))(nullptr);
		}

		::System::Void AddSubmesh(::Spine::Unity::SubmeshInstruction* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::Unity::SubmeshInstruction*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_ADDSUBMESH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BuildMesh(::Spine::Unity::SkeletonRendererInstruction* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_BUILDMESH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BuildMeshWithArrays(::Spine::Unity::SkeletonRendererInstruction* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_BUILDMESHWITHARRAYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ScaleVertexData(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SCALEVERTEXDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ScaleAndOffsetVertexData(::System::Single arg, ::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::System::Single, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SCALEANDOFFSETVERTEXDATA_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Bounds* GetMeshBounds()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GETMESHBOUNDS_OFFSET))(nullptr);
		}

		::System::Void AddAttachmentTintBlack(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_ADDATTACHMENTTINTBLACK_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void PrepareOptionalUVBuffer(Il2CppObject&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_PREPAREOPTIONALUVBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ResizeOptionalUVBuffer(Il2CppObject&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_RESIZEOPTIONALUVBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FillVertexData(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FILLVERTEXDATA_OFFSET))(arg, nullptr);
		}

		::System::Void FillLateVertexData(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FILLLATEVERTEXDATA_OFFSET))(arg, nullptr);
		}

		::System::Void FillTriangles(::UnityEngine::Mesh* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FILLTRIANGLES_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureVertexCapacity(::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_ENSUREVERTEXCAPACITY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void TrimExcess()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_TRIMEXCESS_OFFSET))(nullptr);
		}

		::System::Void SolveTangents2DEnsureSize(::System::Object[]&* arg, ::System::Object[]&* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object[]&*, ::System::Object[]&*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DENSURESIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SolveTangents2DTriangles(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DTRIANGLES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SolveTangents2DBuffer(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DBUFFER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FillMeshLocal(::UnityEngine::Mesh* arg, ::Spine::RegionAttachment* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::Spine::RegionAttachment*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FILLMESHLOCAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FillMeshLocal(::UnityEngine::Mesh* arg, ::Spine::MeshAttachment* arg, ::Spine::SkeletonData* arg)
		{
			((::System::Void(*)(::UnityEngine::Mesh*, ::Spine::MeshAttachment*, ::Spine::SkeletonData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FILLMESHLOCAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

