#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class LocalMinima; }
namespace UnityEngine::Rendering::Universal { class Scanbeam; }
namespace UnityEngine::Rendering::Universal { class TEdge; }
namespace UnityEngine::Rendering::Universal { class IntPoint; }
namespace UnityEngine::Rendering::Universal { class OutPt; }
namespace UnityEngine::Rendering::Universal { class PolyType; }
namespace UnityEngine::Rendering::Universal { class LocalMinima&; }
namespace UnityEngine::Rendering::Universal { class IntRect; }
namespace UnityEngine::Rendering::Universal { class OutRec; }
namespace UnityEngine::Rendering::Universal { class TEdge&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_NEAR_ZERO_OFFSET UNITYSDK_OFFSET(0x9FF9C10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_GET_PRESERVECOLLINEAR_OFFSET UNITYSDK_OFFSET(0x9FF9C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SET_PRESERVECOLLINEAR_OFFSET UNITYSDK_OFFSET(0x9FF9C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SWAP_OFFSET UNITYSDK_OFFSET(0x9FF9C60)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_ISHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x9FF9C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_POINTISVERTEX_OFFSET UNITYSDK_OFFSET(0x9FF9C90)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_POINTONLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x9FF9CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_POINTONPOLYGON_OFFSET UNITYSDK_OFFSET(0x9FF9FE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SLOPESEQUAL_OFFSET UNITYSDK_OFFSET(0x9FFA0D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SLOPESEQUAL_OFFSET UNITYSDK_OFFSET(0x9FFA320)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SLOPESEQUAL_OFFSET UNITYSDK_OFFSET(0x9FFA550)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FFA790)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x9FFA840)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_DISPOSELOCALMINIMALIST_OFFSET UNITYSDK_OFFSET(0x9FFAA10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_RANGETEST_OFFSET UNITYSDK_OFFSET(0x9FFAA80)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_INITEDGE_OFFSET UNITYSDK_OFFSET(0x9FFAB90)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_INITEDGE2_OFFSET UNITYSDK_OFFSET(0x9FFAC10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_FINDNEXTLOCMIN_OFFSET UNITYSDK_OFFSET(0x9FFAD80)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_PROCESSBOUND_OFFSET UNITYSDK_OFFSET(0x9FFAEC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_ADDPATH_OFFSET UNITYSDK_OFFSET(0x9FFB530)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_ADDPATHS_OFFSET UNITYSDK_OFFSET(0x9FFCAB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_PT2ISBETWEENPT1ANDPT3_OFFSET UNITYSDK_OFFSET(0x9FFCA20)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_REMOVEEDGE_OFFSET UNITYSDK_OFFSET(0x9FFC990)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SETDX_OFFSET UNITYSDK_OFFSET(0x9FFAD10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_INSERTLOCALMINIMA_OFFSET UNITYSDK_OFFSET(0x9FFB480)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_POPLOCALMINIMA_OFFSET UNITYSDK_OFFSET(0x9FFCB60)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_REVERSEHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x9FFB500)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_RESET_OFFSET UNITYSDK_OFFSET(0x9FFCBB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x9FFCDD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_INSERTSCANBEAM_OFFSET UNITYSDK_OFFSET(0x9FFCC90)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_POPSCANBEAM_OFFSET UNITYSDK_OFFSET(0x9FFD160)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_LOCALMINIMAPENDING_OFFSET UNITYSDK_OFFSET(0x9FFD1B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_CREATEOUTREC_OFFSET UNITYSDK_OFFSET(0x9FFD1C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_DISPOSEOUTREC_OFFSET UNITYSDK_OFFSET(0x9FFD300)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_UPDATEEDGEINTOAEL_OFFSET UNITYSDK_OFFSET(0x9FFD390)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SWAPPOSITIONSINAEL_OFFSET UNITYSDK_OFFSET(0x9FFD600)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_DELETEFROMAEL_OFFSET UNITYSDK_OFFSET(0x9FFD8E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ClipperBase_TypeDefinitionIndex = 32452;

	class ClipperBase : public Il2CppObject
	{
	public:
		::System::Double horizontal; // 0x0
		::System::Int32 Skip; // 0x0
		::System::Int32 Unassigned; // 0x0
		::System::Double tolerance; // 0x0
		::System::Int64 loRange; // 0x0
		::System::Int64 hiRange; // 0x0
		::UnityEngine::Rendering::Universal::LocalMinima* m_MinimaList; // 0x10
		::UnityEngine::Rendering::Universal::LocalMinima* m_CurrentLM; // 0x18
		Il2CppObject* m_edges; // 0x20
		::UnityEngine::Rendering::Universal::Scanbeam* m_Scanbeam; // 0x28
		Il2CppObject* m_PolyOuts; // 0x30
		::UnityEngine::Rendering::Universal::TEdge* m_ActiveEdges; // 0x38
		::System::Boolean m_UseFullRange; // 0x40
		::System::Boolean m_HasOpenPaths; // 0x41
		::System::Boolean _PreserveCollinear_k__BackingField; // 0x42

		::System::Boolean near_zero(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_NEAR_ZERO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PreserveCollinear()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_GET_PRESERVECOLLINEAR_OFFSET))(nullptr);
		}

		::System::Void set_PreserveCollinear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SET_PRESERVECOLLINEAR_OFFSET))(arg, nullptr);
		}

		::System::Void Swap(int64_t&* arg, int64_t&* arg)
		{
			((::System::Void(*)(int64_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SWAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsHorizontal(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_ISHORIZONTAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean PointIsVertex(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::OutPt* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::OutPt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_POINTISVERTEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean PointOnLineSegment(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_POINTONLINESEGMENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean PointOnPolygon(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::OutPt* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::OutPt*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_POINTONPOLYGON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SlopesEqual(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SLOPESEQUAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SlopesEqual(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SLOPESEQUAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SlopesEqual(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SLOPESEQUAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void DisposeLocalMinimaList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_DISPOSELOCALMINIMALIST_OFFSET))(nullptr);
		}

		::System::Void RangeTest(::UnityEngine::Rendering::Universal::IntPoint* arg, bool&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IntPoint*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_RANGETEST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitEdge(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_INITEDGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InitEdge2(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::PolyType* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::PolyType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_INITEDGE2_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::TEdge* FindNextLocMin(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::TEdge*(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_FINDNEXTLOCMIN_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::TEdge* ProcessBound(::UnityEngine::Rendering::Universal::TEdge* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Rendering::Universal::TEdge*(*)(::UnityEngine::Rendering::Universal::TEdge*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_PROCESSBOUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddPath(Il2CppObject* arg, ::UnityEngine::Rendering::Universal::PolyType* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::Rendering::Universal::PolyType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_ADDPATH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean AddPaths(Il2CppObject* arg, ::UnityEngine::Rendering::Universal::PolyType* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::UnityEngine::Rendering::Universal::PolyType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_ADDPATHS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Pt2IsBetweenPt1AndPt3(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_PT2ISBETWEENPT1ANDPT3_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::TEdge* RemoveEdge(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::TEdge*(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_REMOVEEDGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDx(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SETDX_OFFSET))(arg, nullptr);
		}

		::System::Void InsertLocalMinima(::UnityEngine::Rendering::Universal::LocalMinima* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::LocalMinima*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_INSERTLOCALMINIMA_OFFSET))(arg, nullptr);
		}

		::System::Boolean PopLocalMinima(::System::Int64 arg, ::UnityEngine::Rendering::Universal::LocalMinima&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::UnityEngine::Rendering::Universal::LocalMinima&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_POPLOCALMINIMA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReverseHorizontal(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_REVERSEHORIZONTAL_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_RESET_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::IntRect* GetBounds(Il2CppObject* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::IntRect*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_GETBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Void InsertScanbeam(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_INSERTSCANBEAM_OFFSET))(arg, nullptr);
		}

		::System::Boolean PopScanbeam(int64_t&* arg)
		{
			return (return (::System::Boolean(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_POPSCANBEAM_OFFSET))(arg, nullptr);
		}

		::System::Boolean LocalMinimaPending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_LOCALMINIMAPENDING_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::OutRec* CreateOutRec()
		{
			return (return (::UnityEngine::Rendering::Universal::OutRec*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_CREATEOUTREC_OFFSET))(nullptr);
		}

		::System::Void DisposeOutRec(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_DISPOSEOUTREC_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateEdgeIntoAEL(::UnityEngine::Rendering::Universal::TEdge&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_UPDATEEDGEINTOAEL_OFFSET))(arg, nullptr);
		}

		::System::Void SwapPositionsInAEL(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_SWAPPOSITIONSINAEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DeleteFromAEL(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPERBASE_DELETEFROMAEL_OFFSET))(arg, nullptr);
		}

	};
}

