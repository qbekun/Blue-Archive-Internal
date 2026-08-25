#pragma once
#include "../../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class ColorPage; }
namespace UnityEngine::UIElements { class Vertex; }
namespace UnityEngine::TextCore::Text { class MeshInfo; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements::UIR { class VertexFlags; }
namespace UnityEngine::UIElements { class TextVertex; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Color32; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class ScaleMode; }
namespace UnityEngine { class Vector4; }
namespace UnityEngine::UIElements { class MeshWriteData; }
namespace UnityEngine { class Vector3; }

#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKEBORDER_OFFSET UNITYSDK_OFFSET(0xA42D350)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKESOLIDRECT_OFFSET UNITYSDK_OFFSET(0xA42D6C0)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKETEXTUREDRECT_OFFSET UNITYSDK_OFFSET(0xA42E780)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_CONVERTTEXTVERTEXTOUIRVERTEX_OFFSET UNITYSDK_OFFSET(0xA4312F0)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_CONVERTTEXTVERTEXTOUIRVERTEX_OFFSET UNITYSDK_OFFSET(0xA4313F0)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_LIMITTEXTVERTICES_OFFSET UNITYSDK_OFFSET(0xA431430)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKETEXT_OFFSET UNITYSDK_OFFSET(0xA431550)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKETEXT_OFFSET UNITYSDK_OFFSET(0xA431AA0)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0xA431E10)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKEQUAD_OFFSET UNITYSDK_OFFSET(0xA42EB70)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKESLICEDQUAD_OFFSET UNITYSDK_OFFSET(0xA430170)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKEVECTORGRAPHICS_OFFSET UNITYSDK_OFFSET(0xA432010)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKEVECTORGRAPHICSSTRETCHBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA432640)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_SPLITTRIANGLE_OFFSET UNITYSDK_OFFSET(0xA435A80)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_SCALESPLITTEDTRIANGLES_OFFSET UNITYSDK_OFFSET(0xA436AD0)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKEVECTORGRAPHICS9SLICEBACKGROUND_OFFSET UNITYSDK_OFFSET(0xA433BE0)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_UPPERBOUNDAPPROXIMATERECTCLIPPINGRESULTS_OFFSET UNITYSDK_OFFSET(0xA434FC0)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_RECTCLIP_OFFSET UNITYSDK_OFFSET(0xA4353B0)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_RECTCLIPTRIANGLE_OFFSET UNITYSDK_OFFSET(0xA436E50)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_GETVERTEXBARYCENTRICCOORDINATES_OFFSET UNITYSDK_OFFSET(0xA4380F0)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_INTERPOLATEVERTEXINTRIANGLE_OFFSET UNITYSDK_OFFSET(0xA438200)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_INTERPOLATEVERTEXINTRIANGLEEDGE_OFFSET UNITYSDK_OFFSET(0xA4389F0)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_INTERSECTSEGMENTS_OFFSET UNITYSDK_OFFSET(0xA438910)
#define UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA439040)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int MeshBuilder_TypeDefinitionIndex = 30726;

	class MeshBuilder : public Il2CppObject
	{
	public:
		::Unity::Profiling::ProfilerMarker* s_VectorGraphics9Slice; // 0x0
		::Unity::Profiling::ProfilerMarker* s_VectorGraphicsSplitTriangle; // 0x8
		::Unity::Profiling::ProfilerMarker* s_VectorGraphicsScaleTriangle; // 0x10
		::Unity::Profiling::ProfilerMarker* s_VectorGraphicsStretch; // 0x18
		::System::Int32 s_MaxTextMeshVertices; // 0x20
		::Il2CppArray<::System::Object*>* slicedQuadIndices; // 0x28
		::Il2CppArray<::System::Object*>* k_TexCoordSlicesX; // 0x30
		::Il2CppArray<::System::Object*>* k_TexCoordSlicesY; // 0x38
		::Il2CppArray<::System::Object*>* k_PositionSlicesX; // 0x40
		::Il2CppArray<::System::Object*>* k_PositionSlicesY; // 0x48
		::Il2CppArray<::System::Object*>* s_AllClipEdges; // 0x50

		::System::Void MakeBorder(BorderParams* arg, ::System::Single arg, AllocMeshData* arg)
		{
			((::System::Void(*)(BorderParams*, ::System::Single, AllocMeshData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKEBORDER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MakeSolidRect(RectangleParams* arg, ::System::Single arg, AllocMeshData* arg)
		{
			((::System::Void(*)(RectangleParams*, ::System::Single, AllocMeshData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKESOLIDRECT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MakeTexturedRect(RectangleParams* arg, ::System::Single arg, AllocMeshData* arg, ::UnityEngine::UIElements::ColorPage* arg)
		{
			((::System::Void(*)(RectangleParams*, ::System::Single, AllocMeshData*, ::UnityEngine::UIElements::ColorPage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKETEXTUREDRECT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Vertex* ConvertTextVertexToUIRVertex(::UnityEngine::TextCore::Text::MeshInfo* arg, ::System::Int32 arg, ::UnityEngine::Vector2* arg, ::UnityEngine::UIElements::UIR::VertexFlags* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::UIElements::Vertex*(*)(::UnityEngine::TextCore::Text::MeshInfo*, ::System::Int32, ::UnityEngine::Vector2*, ::UnityEngine::UIElements::UIR::VertexFlags*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_CONVERTTEXTVERTEXTOUIRVERTEX_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Vertex* ConvertTextVertexToUIRVertex(::UnityEngine::UIElements::TextVertex* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::UIElements::Vertex*(*)(::UnityEngine::UIElements::TextVertex*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_CONVERTTEXTVERTEXTOUIRVERTEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 LimitTextVertices(::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_LIMITTEXTVERTICES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MakeText(::UnityEngine::TextCore::Text::MeshInfo* arg, ::UnityEngine::Vector2* arg, AllocMeshData* arg, ::UnityEngine::UIElements::UIR::VertexFlags* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::TextCore::Text::MeshInfo*, ::UnityEngine::Vector2*, AllocMeshData*, ::UnityEngine::UIElements::UIR::VertexFlags*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKETEXT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MakeText(Il2CppObject* arg, ::UnityEngine::Vector2* arg, AllocMeshData* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector2*, AllocMeshData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKETEXT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UpdateText(Il2CppObject* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Matrix4x4* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Vector2*, ::UnityEngine::Matrix4x4*, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::UnityEngine::Color32*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_UPDATETEXT_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MakeQuad(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Color* arg, ::System::Single arg, AllocMeshData* arg, ::UnityEngine::UIElements::ColorPage* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::UnityEngine::Color*, ::System::Single, AllocMeshData*, ::UnityEngine::UIElements::ColorPage*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKEQUAD_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MakeSlicedQuad(RectangleParams&* arg, ::System::Single arg, AllocMeshData* arg)
		{
			((::System::Void(*)(RectangleParams&*, ::System::Single, AllocMeshData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKESLICEDQUAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void MakeVectorGraphics(RectangleParams* arg, ::System::Int32 arg, AllocMeshData* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(RectangleParams*, ::System::Int32, AllocMeshData*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKEVECTORGRAPHICS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MakeVectorGraphicsStretchBackground(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg, ::UnityEngine::ScaleMode* arg, ::UnityEngine::Color* arg, ::System::Int32 arg, AllocMeshData* arg, int32_t&* arg, int32_t&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Single, ::UnityEngine::Rect*, ::UnityEngine::Rect*, ::UnityEngine::ScaleMode*, ::UnityEngine::Color*, ::System::Int32, AllocMeshData*, int32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKEVECTORGRAPHICSSTRETCHBACKGROUND_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SplitTriangle(::System::Object** arg, ::System::Object** arg, int32_t&* arg, ::System::Int32 arg, int32_t&* arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Vector4* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, int32_t&*, ::System::Int32, int32_t&*, ::System::Single, ::System::Single, ::UnityEngine::Vector4*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_SPLITTRIANGLE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void ScaleSplittedTriangles(::System::Object** arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Rect* arg, ::UnityEngine::Vector4* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Rect*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_SCALESPLITTEDTRIANGLES_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MakeVectorGraphics9SliceBackground(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Rect* arg, ::UnityEngine::Vector4* arg, ::System::Boolean arg, ::UnityEngine::Color* arg, ::System::Int32 arg, AllocMeshData* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Single, ::System::Single, ::UnityEngine::Rect*, ::UnityEngine::Vector4*, ::System::Boolean, ::UnityEngine::Color*, ::System::Int32, AllocMeshData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_MAKEVECTORGRAPHICS9SLICEBACKGROUND_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		ClipCounts* UpperBoundApproximateRectClippingResults(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Vector4* arg)
		{
			return (return (ClipCounts*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_UPPERBOUNDAPPROXIMATERECTCLIPPINGRESULTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RectClip(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::UIElements::MeshWriteData* arg, ClipCounts* arg, int32_t&* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::UnityEngine::Vector4*, ::UnityEngine::UIElements::MeshWriteData*, ClipCounts*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_RECTCLIP_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RectClipTriangle(::System::Object** arg, ::System::Object** arg, ::UnityEngine::Vector4* arg, ::UnityEngine::UIElements::MeshWriteData* arg, uint16_t&* arg)
		{
			((::System::Void(*)(::System::Object**, ::System::Object**, ::UnityEngine::Vector4*, ::UnityEngine::UIElements::MeshWriteData*, uint16_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_RECTCLIPTRIANGLE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetVertexBaryCentricCoordinates(::System::Object** arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Object**, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_GETVERTEXBARYCENTRICCOORDINATES_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Vertex* InterpolateVertexInTriangle(::System::Object** arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::UIElements::Vertex*(*)(::System::Object**, ::System::Single, ::System::Single, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_INTERPOLATEVERTEXINTRIANGLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::UIElements::Vertex* InterpolateVertexInTriangleEdge(::System::Object** arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			return (return (::UnityEngine::UIElements::Vertex*(*)(::System::Object**, ::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_INTERPOLATEVERTEXINTRIANGLEEDGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Single IntersectSegments(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_INTERSECTSEGMENTS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHBUILDER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

