#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal::LibTessDotNet { class Mesh; }
namespace UnityEngine::Rendering::Universal::LibTessDotNet { class Vec3; }
namespace UnityEngine::Rendering::Universal::LibTessDotNet { class WindingRule; }
namespace UnityEngine::Rendering::Universal::LibTessDotNet { class CombineCallback; }
namespace UnityEngine::Rendering::Universal::LibTessDotNet { class Vec3&; }
namespace UnityEngine::Rendering::Universal::LibTessDotNet { class ElementType; }
namespace UnityEngine::Rendering::Universal::LibTessDotNet { class ContourOrientation; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REGIONBELOW_OFFSET UNITYSDK_OFFSET(0xA097C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REGIONABOVE_OFFSET UNITYSDK_OFFSET(0xA097CA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_EDGELEQ_OFFSET UNITYSDK_OFFSET(0xA097CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DELETEREGION_OFFSET UNITYSDK_OFFSET(0xA097E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_FIXUPPEREDGE_OFFSET UNITYSDK_OFFSET(0xA097E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TOPLEFTREGION_OFFSET UNITYSDK_OFFSET(0xA097EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TOPRIGHTREGION_OFFSET UNITYSDK_OFFSET(0xA098000)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDREGIONBELOW_OFFSET UNITYSDK_OFFSET(0xA098070)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_COMPUTEWINDING_OFFSET UNITYSDK_OFFSET(0xA098160)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_FINISHREGION_OFFSET UNITYSDK_OFFSET(0xA0981C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_FINISHLEFTREGIONS_OFFSET UNITYSDK_OFFSET(0xA098260)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDRIGHTEDGES_OFFSET UNITYSDK_OFFSET(0xA0983D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SPLICEMERGEVERTICES_OFFSET UNITYSDK_OFFSET(0xA098D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_VERTEXWEIGHTS_OFFSET UNITYSDK_OFFSET(0xA098D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GETINTERSECTDATA_OFFSET UNITYSDK_OFFSET(0xA098E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKFORRIGHTSPLICE_OFFSET UNITYSDK_OFFSET(0xA098700)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKFORLEFTSPLICE_OFFSET UNITYSDK_OFFSET(0xA099190)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKFORINTERSECT_OFFSET UNITYSDK_OFFSET(0xA099390)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_WALKDIRTYREGIONS_OFFSET UNITYSDK_OFFSET(0xA098940)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CONNECTRIGHTVERTEX_OFFSET UNITYSDK_OFFSET(0xA099B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CONNECTLEFTDEGENERATE_OFFSET UNITYSDK_OFFSET(0xA099DA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CONNECTLEFTVERTEX_OFFSET UNITYSDK_OFFSET(0xA099FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SWEEPEVENT_OFFSET UNITYSDK_OFFSET(0xA099EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDSENTINEL_OFFSET UNITYSDK_OFFSET(0xA09A260)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_INITEDGEDICT_OFFSET UNITYSDK_OFFSET(0xA09A400)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DONEEDGEDICT_OFFSET UNITYSDK_OFFSET(0xA09A500)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REMOVEDEGENERATEEDGES_OFFSET UNITYSDK_OFFSET(0xA09A5E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_INITPRIORITYQ_OFFSET UNITYSDK_OFFSET(0xA09A730)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DONEPRIORITYQ_OFFSET UNITYSDK_OFFSET(0xA09A950)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REMOVEDEGENERATEFACES_OFFSET UNITYSDK_OFFSET(0xA09A970)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_COMPUTEINTERIOR_OFFSET UNITYSDK_OFFSET(0xA09AA00)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0xA09AB30)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0xA09AB50)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0xA09AB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0xA09AB70)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0xA09AB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_ELEMENTCOUNT_OFFSET UNITYSDK_OFFSET(0xA09AB90)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA09ABA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_COMPUTENORMAL_OFFSET UNITYSDK_OFFSET(0xA09AC80)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKORIENTATION_OFFSET UNITYSDK_OFFSET(0xA09B4C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_PROJECTPOLYGON_OFFSET UNITYSDK_OFFSET(0xA09B640)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATEMONOREGION_OFFSET UNITYSDK_OFFSET(0xA09BB40)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATEINTERIOR_OFFSET UNITYSDK_OFFSET(0xA09BDF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DISCARDEXTERIOR_OFFSET UNITYSDK_OFFSET(0xA09BE60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SETWINDINGNUMBER_OFFSET UNITYSDK_OFFSET(0xA09BED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GETNEIGHBOURFACE_OFFSET UNITYSDK_OFFSET(0xA09C020)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_OUTPUTPOLYMESH_OFFSET UNITYSDK_OFFSET(0xA09C060)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_OUTPUTCONTOURS_OFFSET UNITYSDK_OFFSET(0xA09C640)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SIGNEDAREA_OFFSET UNITYSDK_OFFSET(0xA09C8E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDCONTOUR_OFFSET UNITYSDK_OFFSET(0xA09C980)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDCONTOUR_OFFSET UNITYSDK_OFFSET(0xA09C990)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATE_OFFSET UNITYSDK_OFFSET(0xA09CC30)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATE_OFFSET UNITYSDK_OFFSET(0xA09CC50)

namespace UnityEngine::Rendering::Universal::LibTessDotNet
{
	inline static constexpr unsigned int Tess_TypeDefinitionIndex = 32838;

	class Tess : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh* _mesh; // 0x10
		::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3* _normal; // 0x18
		::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3* _sUnit; // 0x24
		::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3* _tUnit; // 0x30
		::System::Single _bminX; // 0x3C
		::System::Single _bminY; // 0x40
		::System::Single _bmaxX; // 0x44
		::System::Single _bmaxY; // 0x48
		::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule* _windingRule; // 0x4C
		Il2CppObject* _dict; // 0x50
		Il2CppObject* _pq; // 0x58
		Vertex* _event; // 0x60
		::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback* _combineCallback; // 0x68
		::Il2CppArray<::System::Object*>* _vertices; // 0x70
		::System::Int32 _vertexCount; // 0x78
		::Il2CppArray<::System::Object*>* _elements; // 0x80
		::System::Int32 _elementCount; // 0x88
		::System::Single SUnitX; // 0x8C
		::System::Single SUnitY; // 0x90
		::System::Single SentinelCoord; // 0x94
		::System::Boolean NoEmptyPolygons; // 0x98
		::System::Boolean UsePooling; // 0x99

		ActiveRegion* RegionBelow(ActiveRegion* arg)
		{
			return (return (ActiveRegion*(*)(ActiveRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REGIONBELOW_OFFSET))(arg, nullptr);
		}

		ActiveRegion* RegionAbove(ActiveRegion* arg)
		{
			return (return (ActiveRegion*(*)(ActiveRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REGIONABOVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean EdgeLeq(ActiveRegion* arg, ActiveRegion* arg)
		{
			return (return (::System::Boolean(*)(ActiveRegion*, ActiveRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_EDGELEQ_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DeleteRegion(ActiveRegion* arg)
		{
			((::System::Void(*)(ActiveRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DELETEREGION_OFFSET))(arg, nullptr);
		}

		::System::Void FixUpperEdge(ActiveRegion* arg, Edge* arg)
		{
			((::System::Void(*)(ActiveRegion*, Edge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_FIXUPPEREDGE_OFFSET))(arg, arg, nullptr);
		}

		ActiveRegion* TopLeftRegion(ActiveRegion* arg)
		{
			return (return (ActiveRegion*(*)(ActiveRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TOPLEFTREGION_OFFSET))(arg, nullptr);
		}

		ActiveRegion* TopRightRegion(ActiveRegion* arg)
		{
			return (return (ActiveRegion*(*)(ActiveRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TOPRIGHTREGION_OFFSET))(arg, nullptr);
		}

		ActiveRegion* AddRegionBelow(ActiveRegion* arg, Edge* arg)
		{
			return (return (ActiveRegion*(*)(ActiveRegion*, Edge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDREGIONBELOW_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ComputeWinding(ActiveRegion* arg)
		{
			((::System::Void(*)(ActiveRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_COMPUTEWINDING_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRegion(ActiveRegion* arg)
		{
			((::System::Void(*)(ActiveRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_FINISHREGION_OFFSET))(arg, nullptr);
		}

		Edge* FinishLeftRegions(ActiveRegion* arg, ActiveRegion* arg)
		{
			return (return (Edge*(*)(ActiveRegion*, ActiveRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_FINISHLEFTREGIONS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRightEdges(ActiveRegion* arg, Edge* arg, Edge* arg, Edge* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(ActiveRegion*, Edge*, Edge*, Edge*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDRIGHTEDGES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void SpliceMergeVertices(Edge* arg, Edge* arg)
		{
			((::System::Void(*)(Edge*, Edge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SPLICEMERGEVERTICES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void VertexWeights(Vertex* arg, Vertex* arg, Vertex* arg, float&* arg, float&* arg)
		{
			((::System::Void(*)(Vertex*, Vertex*, Vertex*, float&*, float&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_VERTEXWEIGHTS_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetIntersectData(Vertex* arg, Vertex* arg, Vertex* arg, Vertex* arg, Vertex* arg)
		{
			((::System::Void(*)(Vertex*, Vertex*, Vertex*, Vertex*, Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GETINTERSECTDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CheckForRightSplice(ActiveRegion* arg)
		{
			return (return (::System::Boolean(*)(ActiveRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKFORRIGHTSPLICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckForLeftSplice(ActiveRegion* arg)
		{
			return (return (::System::Boolean(*)(ActiveRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKFORLEFTSPLICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckForIntersect(ActiveRegion* arg)
		{
			return (return (::System::Boolean(*)(ActiveRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKFORINTERSECT_OFFSET))(arg, nullptr);
		}

		::System::Void WalkDirtyRegions(ActiveRegion* arg)
		{
			((::System::Void(*)(ActiveRegion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_WALKDIRTYREGIONS_OFFSET))(arg, nullptr);
		}

		::System::Void ConnectRightVertex(ActiveRegion* arg, Edge* arg)
		{
			((::System::Void(*)(ActiveRegion*, Edge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CONNECTRIGHTVERTEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ConnectLeftDegenerate(ActiveRegion* arg, Vertex* arg)
		{
			((::System::Void(*)(ActiveRegion*, Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CONNECTLEFTDEGENERATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ConnectLeftVertex(Vertex* arg)
		{
			((::System::Void(*)(Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CONNECTLEFTVERTEX_OFFSET))(arg, nullptr);
		}

		::System::Void SweepEvent(Vertex* arg)
		{
			((::System::Void(*)(Vertex*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SWEEPEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void AddSentinel(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDSENTINEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitEdgeDict()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_INITEDGEDICT_OFFSET))(nullptr);
		}

		::System::Void DoneEdgeDict()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DONEEDGEDICT_OFFSET))(nullptr);
		}

		::System::Void RemoveDegenerateEdges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REMOVEDEGENERATEEDGES_OFFSET))(nullptr);
		}

		::System::Void InitPriorityQ()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_INITPRIORITYQ_OFFSET))(nullptr);
		}

		::System::Void DonePriorityQ()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DONEPRIORITYQ_OFFSET))(nullptr);
		}

		::System::Void RemoveDegenerateFaces()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_REMOVEDEGENERATEFACES_OFFSET))(nullptr);
		}

		::System::Void ComputeInterior()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_COMPUTEINTERIOR_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3* get_Normal()
		{
			return (return (::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_NORMAL_OFFSET))(nullptr);
		}

		::System::Void set_Normal(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SET_NORMAL_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Vertices()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_VERTICES_OFFSET))(nullptr);
		}

		::System::Int32 get_VertexCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_VERTEXCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Elements()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_ELEMENTS_OFFSET))(nullptr);
		}

		::System::Int32 get_ElementCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GET_ELEMENTCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ComputeNormal(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_COMPUTENORMAL_OFFSET))(arg, nullptr);
		}

		::System::Void CheckOrientation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_CHECKORIENTATION_OFFSET))(nullptr);
		}

		::System::Void ProjectPolygon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_PROJECTPOLYGON_OFFSET))(nullptr);
		}

		::System::Void TessellateMonoRegion(Face* arg)
		{
			((::System::Void(*)(Face*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATEMONOREGION_OFFSET))(arg, nullptr);
		}

		::System::Void TessellateInterior()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATEINTERIOR_OFFSET))(nullptr);
		}

		::System::Void DiscardExterior()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_DISCARDEXTERIOR_OFFSET))(nullptr);
		}

		::System::Void SetWindingNumber(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SETWINDINGNUMBER_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetNeighbourFace(Edge* arg)
		{
			return (return (::System::Int32(*)(Edge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_GETNEIGHBOURFACE_OFFSET))(arg, nullptr);
		}

		::System::Void OutputPolymesh(::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_OUTPUTPOLYMESH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OutputContours()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_OUTPUTCONTOURS_OFFSET))(nullptr);
		}

		::System::Single SignedArea(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Single(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_SIGNEDAREA_OFFSET))(arg, nullptr);
		}

		::System::Void AddContour(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDCONTOUR_OFFSET))(arg, nullptr);
		}

		::System::Void AddContour(::Il2CppArray<::System::Object*>* arg, ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_ADDCONTOUR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Tessellate(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule* arg, ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule*, ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Tessellate(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule* arg, ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType* arg, ::System::Int32 arg, ::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule*, ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType*, ::System::Int32, ::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIBTESSDOTNET_TESS_TESSELLATE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

