#pragma once
#include "unitysdk.h"

#define CLIPPERBASE_NEAR_ZERO_OFFSET UNITYSDK_OFFSET(0x286DBE0)
#define CLIPPERBASE_GET_PRESERVECOLLINEAR_OFFSET UNITYSDK_OFFSET(0x286DC10)
#define CLIPPERBASE_SET_PRESERVECOLLINEAR_OFFSET UNITYSDK_OFFSET(0x286DC20)
#define CLIPPERBASE_SWAP_OFFSET UNITYSDK_OFFSET(0x286DC30)
#define CLIPPERBASE_ISHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x286DC40)
#define CLIPPERBASE_POINTISVERTEX_OFFSET UNITYSDK_OFFSET(0x286DC60)
#define CLIPPERBASE_POINTONLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x286DCB0)
#define CLIPPERBASE_POINTONPOLYGON_OFFSET UNITYSDK_OFFSET(0x286DFA0)
#define CLIPPERBASE_SLOPESEQUAL_OFFSET UNITYSDK_OFFSET(0x286E040)
#define CLIPPERBASE_SLOPESEQUAL_OFFSET UNITYSDK_OFFSET(0x286E270)
#define CLIPPERBASE_SLOPESEQUAL_OFFSET UNITYSDK_OFFSET(0x286E4A0)
#define CLIPPERBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x286E6D0)
#define CLIPPERBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x286E780)
#define CLIPPERBASE_DISPOSELOCALMINIMALIST_OFFSET UNITYSDK_OFFSET(0x286E950)
#define CLIPPERBASE_RANGETEST_OFFSET UNITYSDK_OFFSET(0x286E9C0)
#define CLIPPERBASE_INITEDGE_OFFSET UNITYSDK_OFFSET(0x286EAB0)
#define CLIPPERBASE_INITEDGE2_OFFSET UNITYSDK_OFFSET(0x286EB10)
#define CLIPPERBASE_FINDNEXTLOCMIN_OFFSET UNITYSDK_OFFSET(0x286EC30)
#define CLIPPERBASE_PROCESSBOUND_OFFSET UNITYSDK_OFFSET(0x286ED30)
#define CLIPPERBASE_ADDPATH_OFFSET UNITYSDK_OFFSET(0x286F300)
#define CLIPPERBASE_ADDPATHS_OFFSET UNITYSDK_OFFSET(0x28703D0)
#define CLIPPERBASE_PT2ISBETWEENPT1ANDPT3_OFFSET UNITYSDK_OFFSET(0x2870350)
#define CLIPPERBASE_REMOVEEDGE_OFFSET UNITYSDK_OFFSET(0x28702E0)
#define CLIPPERBASE_SETDX_OFFSET UNITYSDK_OFFSET(0x286EBC0)
#define CLIPPERBASE_INSERTLOCALMINIMA_OFFSET UNITYSDK_OFFSET(0x286F250)
#define CLIPPERBASE_POPLOCALMINIMA_OFFSET UNITYSDK_OFFSET(0x2870480)
#define CLIPPERBASE_REVERSEHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x286F2D0)
#define CLIPPERBASE_RESET_OFFSET UNITYSDK_OFFSET(0x28704D0)
#define CLIPPERBASE_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x28706C0)
#define CLIPPERBASE_INSERTSCANBEAM_OFFSET UNITYSDK_OFFSET(0x2870580)
#define CLIPPERBASE_POPSCANBEAM_OFFSET UNITYSDK_OFFSET(0x2870A50)
#define CLIPPERBASE_LOCALMINIMAPENDING_OFFSET UNITYSDK_OFFSET(0x2870AA0)
#define CLIPPERBASE_CREATEOUTREC_OFFSET UNITYSDK_OFFSET(0x2870AB0)
#define CLIPPERBASE_DISPOSEOUTREC_OFFSET UNITYSDK_OFFSET(0x2870BF0)
#define CLIPPERBASE_UPDATEEDGEINTOAEL_OFFSET UNITYSDK_OFFSET(0x2870C80)
#define CLIPPERBASE_SWAPPOSITIONSINAEL_OFFSET UNITYSDK_OFFSET(0x2870EB0)
#define CLIPPERBASE_DELETEFROMAEL_OFFSET UNITYSDK_OFFSET(0x2871190)

	inline static constexpr unsigned int ClipperBase_TypeDefinitionIndex = 34394;

	class ClipperBase : public Il2CppObject
	{
	public:
		::System::Double horizontal; // 0x0
		::System::Int32 Skip; // 0x0
		::System::Int32 Unassigned; // 0x0
		::System::Double tolerance; // 0x0
		::System::Int64 loRange; // 0x0
		::System::Int64 hiRange; // 0x0
		LocalMinima* m_MinimaList; // 0x10
		LocalMinima* m_CurrentLM; // 0x18
		Il2CppObject* m_edges; // 0x20
		Scanbeam* m_Scanbeam; // 0x28
		Il2CppObject* m_PolyOuts; // 0x30
		TEdge* m_ActiveEdges; // 0x38
		::System::Boolean m_UseFullRange; // 0x40
		::System::Boolean m_HasOpenPaths; // 0x41
		::System::Boolean _PreserveCollinear_k__BackingField; // 0x42

		::System::Boolean near_zero(::System::Double arg)
		{
			return (return (::System::Boolean(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_NEAR_ZERO_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PreserveCollinear()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_GET_PRESERVECOLLINEAR_OFFSET))(nullptr);
		}

		::System::Void set_PreserveCollinear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_SET_PRESERVECOLLINEAR_OFFSET))(arg, nullptr);
		}

		::System::Void Swap(int64_t&* arg, int64_t&* arg)
		{
			((::System::Void(*)(int64_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_SWAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsHorizontal(TEdge* arg)
		{
			return (return (::System::Boolean(*)(TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_ISHORIZONTAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean PointIsVertex(IntPoint* arg, OutPt* arg)
		{
			return (return (::System::Boolean(*)(IntPoint*, OutPt*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_POINTISVERTEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean PointOnLineSegment(IntPoint* arg, IntPoint* arg, IntPoint* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(IntPoint*, IntPoint*, IntPoint*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_POINTONLINESEGMENT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean PointOnPolygon(IntPoint* arg, OutPt* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(IntPoint*, OutPt*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_POINTONPOLYGON_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SlopesEqual(TEdge* arg, TEdge* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(TEdge*, TEdge*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_SLOPESEQUAL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SlopesEqual(IntPoint* arg, IntPoint* arg, IntPoint* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(IntPoint*, IntPoint*, IntPoint*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_SLOPESEQUAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean SlopesEqual(IntPoint* arg, IntPoint* arg, IntPoint* arg, IntPoint* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(IntPoint*, IntPoint*, IntPoint*, IntPoint*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_SLOPESEQUAL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void DisposeLocalMinimaList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_DISPOSELOCALMINIMALIST_OFFSET))(nullptr);
		}

		::System::Void RangeTest(IntPoint* arg, bool&* arg)
		{
			((::System::Void(*)(IntPoint*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_RANGETEST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitEdge(TEdge* arg, TEdge* arg, TEdge* arg, IntPoint* arg)
		{
			((::System::Void(*)(TEdge*, TEdge*, TEdge*, IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_INITEDGE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InitEdge2(TEdge* arg, PolyType* arg)
		{
			((::System::Void(*)(TEdge*, PolyType*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_INITEDGE2_OFFSET))(arg, arg, nullptr);
		}

		TEdge* FindNextLocMin(TEdge* arg)
		{
			return (return (TEdge*(*)(TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_FINDNEXTLOCMIN_OFFSET))(arg, nullptr);
		}

		TEdge* ProcessBound(TEdge* arg, ::System::Boolean arg)
		{
			return (return (TEdge*(*)(TEdge*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_PROCESSBOUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AddPath(Il2CppObject* arg, PolyType* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, PolyType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_ADDPATH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean AddPaths(Il2CppObject* arg, PolyType* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, PolyType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_ADDPATHS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Pt2IsBetweenPt1AndPt3(IntPoint* arg, IntPoint* arg, IntPoint* arg)
		{
			return (return (::System::Boolean(*)(IntPoint*, IntPoint*, IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_PT2ISBETWEENPT1ANDPT3_OFFSET))(arg, arg, arg, nullptr);
		}

		TEdge* RemoveEdge(TEdge* arg)
		{
			return (return (TEdge*(*)(TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_REMOVEEDGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDx(TEdge* arg)
		{
			((::System::Void(*)(TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_SETDX_OFFSET))(arg, nullptr);
		}

		::System::Void InsertLocalMinima(LocalMinima* arg)
		{
			((::System::Void(*)(LocalMinima*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_INSERTLOCALMINIMA_OFFSET))(arg, nullptr);
		}

		::System::Boolean PopLocalMinima(::System::Int64 arg, LocalMinima&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, LocalMinima&*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_POPLOCALMINIMA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReverseHorizontal(TEdge* arg)
		{
			((::System::Void(*)(TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_REVERSEHORIZONTAL_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_RESET_OFFSET))(nullptr);
		}

		IntRect* GetBounds(Il2CppObject* arg)
		{
			return (return (IntRect*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_GETBOUNDS_OFFSET))(arg, nullptr);
		}

		::System::Void InsertScanbeam(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_INSERTSCANBEAM_OFFSET))(arg, nullptr);
		}

		::System::Boolean PopScanbeam(int64_t&* arg)
		{
			return (return (::System::Boolean(*)(int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_POPSCANBEAM_OFFSET))(arg, nullptr);
		}

		::System::Boolean LocalMinimaPending()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_LOCALMINIMAPENDING_OFFSET))(nullptr);
		}

		OutRec* CreateOutRec()
		{
			return (return (OutRec*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_CREATEOUTREC_OFFSET))(nullptr);
		}

		::System::Void DisposeOutRec(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_DISPOSEOUTREC_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateEdgeIntoAEL(TEdge&* arg)
		{
			((::System::Void(*)(TEdge&*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_UPDATEEDGEINTOAEL_OFFSET))(arg, nullptr);
		}

		::System::Void SwapPositionsInAEL(TEdge* arg, TEdge* arg)
		{
			((::System::Void(*)(TEdge*, TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_SWAPPOSITIONSINAEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DeleteFromAEL(TEdge* arg)
		{
			((::System::Void(*)(TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPERBASE_DELETEFROMAEL_OFFSET))(arg, nullptr);
		}

	};

