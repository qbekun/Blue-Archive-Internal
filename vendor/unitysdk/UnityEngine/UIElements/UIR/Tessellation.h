#pragma once
#include "../../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements { class MeshWriteData; }
namespace UnityEngine::UIElements { class ColorPage; }
namespace UnityEngine { class Rect; }
namespace UnityEngine { class Color32; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine::UIElements { class Vertex&; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Color; }
namespace UnityEngine { class Vector4; }

#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATERECT_OFFSET UNITYSDK_OFFSET(0xA42E430)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEQUAD_OFFSET UNITYSDK_OFFSET(0xA42D870)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEBORDER_OFFSET UNITYSDK_OFFSET(0xA42D430)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEROUNDEDCORNERS_OFFSET UNITYSDK_OFFSET(0xA43FEB0)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEROUNDEDBORDERS_OFFSET UNITYSDK_OFFSET(0xA441870)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEROUNDEDCORNER_OFFSET UNITYSDK_OFFSET(0xA442FC0)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEROUNDEDBORDER_OFFSET UNITYSDK_OFFSET(0xA443970)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_INTERSECTLINES_OFFSET UNITYSDK_OFFSET(0xA449A90)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_LOOSECOMPARE_OFFSET UNITYSDK_OFFSET(0xA448380)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATECOMPLEXBORDERCORNER_OFFSET UNITYSDK_OFFSET(0xA448A80)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEQUAD_OFFSET UNITYSDK_OFFSET(0xA44A7D0)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEQUAD_OFFSET UNITYSDK_OFFSET(0xA441790)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_EDGESCOUNT_OFFSET UNITYSDK_OFFSET(0xA44ACB0)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEQUAD_OFFSET UNITYSDK_OFFSET(0xA449C30)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_ENCODESTRAIGHTARC_OFFSET UNITYSDK_OFFSET(0xA44B6C0)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_EXPANDTRIANGLE_OFFSET UNITYSDK_OFFSET(0xA44B880)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEQUADSINGLEEDGE_OFFSET UNITYSDK_OFFSET(0xA44ACE0)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATESTRAIGHTBORDER_OFFSET UNITYSDK_OFFSET(0xA444FD0)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_GETINTERPOLATEDCIRCLE_OFFSET UNITYSDK_OFFSET(0xA44BAE0)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_COMPUTEBARYCENTRICCOORDINATES_OFFSET UNITYSDK_OFFSET(0xA44BCC0)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEFILLEDFAN_OFFSET UNITYSDK_OFFSET(0xA444610)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEBORDEREDFAN_OFFSET UNITYSDK_OFFSET(0xA448440)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_MIRRORVERTICES_OFFSET UNITYSDK_OFFSET(0xA4435B0)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_FLIPWINDING_OFFSET UNITYSDK_OFFSET(0xA4438B0)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_COMPUTEUVS_OFFSET UNITYSDK_OFFSET(0xA441470)
#define UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA44BE00)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int Tessellation_TypeDefinitionIndex = 30746;

	class Tessellation : public Il2CppObject
	{
	public:
		::System::Single kEpsilon; // 0x0
		::System::Single kUnusedArc; // 0x4
		::System::UInt16 kSubdivisions; // 0x8
		::Unity::Profiling::ProfilerMarker* s_MarkerTessellateRect; // 0x10
		::Unity::Profiling::ProfilerMarker* s_MarkerTessellateBorder; // 0x18
		::Il2CppArray<::System::Object*>* s_AllEdges; // 0x20

		::System::Void TessellateRect(RectangleParams* arg, ::System::Single arg, AllocMeshData* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(RectangleParams*, ::System::Single, AllocMeshData*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATERECT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void TessellateQuad(RectangleParams* arg, ::System::Single arg, AllocMeshData* arg)
		{
			((::System::Void(*)(RectangleParams*, ::System::Single, AllocMeshData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEQUAD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TessellateBorder(BorderParams* arg, ::System::Single arg, AllocMeshData* arg)
		{
			((::System::Void(*)(BorderParams*, ::System::Single, AllocMeshData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEBORDER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void TessellateRoundedCorners(RectangleParams&* arg, ::System::Single arg, ::UnityEngine::UIElements::MeshWriteData* arg, ::UnityEngine::UIElements::ColorPage* arg, uint16_t&* arg, uint16_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(RectangleParams&*, ::System::Single, ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage*, uint16_t&*, uint16_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEROUNDEDCORNERS_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void TessellateRoundedBorders(BorderParams&* arg, ::System::Single arg, ::UnityEngine::UIElements::MeshWriteData* arg, uint16_t&* arg, uint16_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(BorderParams&*, ::System::Single, ::UnityEngine::UIElements::MeshWriteData*, uint16_t&*, uint16_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEROUNDEDBORDERS_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void TessellateRoundedCorner(::UnityEngine::Rect* arg, ::UnityEngine::Color32* arg, ::System::Single arg, ::UnityEngine::Vector2* arg, ::UnityEngine::UIElements::MeshWriteData* arg, ::UnityEngine::UIElements::ColorPage* arg, uint16_t&* arg, uint16_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Color32*, ::System::Single, ::UnityEngine::Vector2*, ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage*, uint16_t&*, uint16_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEROUNDEDCORNER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void TessellateRoundedBorder(::UnityEngine::Rect* arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::System::Single arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::UIElements::MeshWriteData* arg, ::UnityEngine::UIElements::ColorPage* arg, ::UnityEngine::UIElements::ColorPage* arg, uint16_t&* arg, uint16_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::System::Single, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage*, ::UnityEngine::UIElements::ColorPage*, uint16_t&*, uint16_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEROUNDEDBORDER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* IntersectLines(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_INTERSECTLINES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 LooseCompare(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Int32(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_LOOSECOMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TessellateComplexBorderCorner(::UnityEngine::Rect* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::System::Single arg, ::UnityEngine::UIElements::MeshWriteData* arg, ::UnityEngine::UIElements::ColorPage* arg, ::UnityEngine::UIElements::ColorPage* arg, uint16_t&* arg, uint16_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::System::Single, ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage*, ::UnityEngine::UIElements::ColorPage*, uint16_t&*, uint16_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATECOMPLEXBORDERCORNER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void TessellateQuad(::UnityEngine::Rect* arg, ::UnityEngine::Color32* arg, ::System::Single arg, ::UnityEngine::UIElements::MeshWriteData* arg, ::UnityEngine::UIElements::ColorPage* arg, uint16_t&* arg, uint16_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Color32*, ::System::Single, ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage*, uint16_t&*, uint16_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEQUAD_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void TessellateQuad(::UnityEngine::Rect* arg, Edges* arg, ::UnityEngine::Color32* arg, ::System::Single arg, ::UnityEngine::UIElements::MeshWriteData* arg, ::UnityEngine::UIElements::ColorPage* arg, uint16_t&* arg, uint16_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, Edges*, ::UnityEngine::Color32*, ::System::Single, ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage*, uint16_t&*, uint16_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEQUAD_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EdgesCount(Edges* arg)
		{
			return (return (::System::Int32(*)(Edges*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_EDGESCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void TessellateQuad(::UnityEngine::Rect* arg, Edges* arg, ::System::Object** arg, ::UnityEngine::Color32* arg, ::System::Single arg, ::UnityEngine::UIElements::MeshWriteData* arg, ::UnityEngine::UIElements::ColorPage* arg, uint16_t&* arg, uint16_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, Edges*, ::System::Object**, ::UnityEngine::Color32*, ::System::Single, ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage*, uint16_t&*, uint16_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEQUAD_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EncodeStraightArc(::UnityEngine::UIElements::Vertex&* arg, ::UnityEngine::UIElements::Vertex&* arg, ::UnityEngine::UIElements::Vertex&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Vertex&*, ::UnityEngine::UIElements::Vertex&*, ::UnityEngine::UIElements::Vertex&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_ENCODESTRAIGHTARC_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ExpandTriangle(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_EXPANDTRIANGLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void TessellateQuadSingleEdge(::UnityEngine::Rect* arg, Edges* arg, ::UnityEngine::Color32* arg, ::System::Single arg, ::UnityEngine::UIElements::MeshWriteData* arg, ::UnityEngine::UIElements::ColorPage* arg, uint16_t&* arg, uint16_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, Edges*, ::UnityEngine::Color32*, ::System::Single, ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage*, uint16_t&*, uint16_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEQUADSINGLEEDGE_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void TessellateStraightBorder(::UnityEngine::Rect* arg, Edges* arg, ::System::Single arg, ::UnityEngine::Color* arg, ::System::Single arg, ::UnityEngine::UIElements::MeshWriteData* arg, ::UnityEngine::UIElements::ColorPage* arg, uint16_t&* arg, uint16_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, Edges*, ::System::Single, ::UnityEngine::Color*, ::System::Single, ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage*, uint16_t&*, uint16_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATESTRAIGHTBORDER_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector4* GetInterpolatedCircle(::UnityEngine::Vector2* arg, ::UnityEngine::UIElements::Vertex&* arg, ::UnityEngine::UIElements::Vertex&* arg, ::UnityEngine::UIElements::Vertex&* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Vector2*, ::UnityEngine::UIElements::Vertex&*, ::UnityEngine::UIElements::Vertex&*, ::UnityEngine::UIElements::Vertex&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_GETINTERPOLATEDCIRCLE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ComputeBarycentricCoordinates(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, float&* arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, float&*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_COMPUTEBARYCENTRICCOORDINATES_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void TessellateFilledFan(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::System::Single arg, ::UnityEngine::UIElements::MeshWriteData* arg, ::UnityEngine::UIElements::ColorPage* arg, ::UnityEngine::UIElements::ColorPage* arg, uint16_t&* arg, uint16_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::System::Single, ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage*, ::UnityEngine::UIElements::ColorPage*, uint16_t&*, uint16_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEFILLEDFAN_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void TessellateBorderedFan(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::System::Single arg, ::System::Single arg, ::UnityEngine::Color32* arg, ::UnityEngine::Color32* arg, ::System::Single arg, ::UnityEngine::UIElements::MeshWriteData* arg, ::UnityEngine::UIElements::ColorPage* arg, ::UnityEngine::UIElements::ColorPage* arg, uint16_t&* arg, uint16_t&* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::System::Single, ::System::Single, ::UnityEngine::Color32*, ::UnityEngine::Color32*, ::System::Single, ::UnityEngine::UIElements::MeshWriteData*, ::UnityEngine::UIElements::ColorPage*, ::UnityEngine::UIElements::ColorPage*, uint16_t&*, uint16_t&*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_TESSELLATEBORDEREDFAN_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void MirrorVertices(::UnityEngine::Rect* arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, Il2CppObject*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_MIRRORVERTICES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void FlipWinding(Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_FLIPWINDING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ComputeUVs(::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg, ::UnityEngine::Rect* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rect*, ::UnityEngine::Rect*, ::UnityEngine::Rect*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_COMPUTEUVS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_TESSELLATION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

