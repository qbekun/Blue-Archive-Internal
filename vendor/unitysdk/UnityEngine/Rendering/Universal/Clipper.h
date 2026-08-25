#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class ClipType; }
namespace UnityEngine::Rendering::Universal { class Maxima; }
namespace UnityEngine::Rendering::Universal { class TEdge; }
namespace UnityEngine::Rendering::Universal { class PolyFillType; }
namespace UnityEngine::Rendering::Universal { class PolyTree; }
namespace UnityEngine::Rendering::Universal { class OutRec; }
namespace UnityEngine::Rendering::Universal { class OutPt; }
namespace UnityEngine::Rendering::Universal { class IntPoint; }
namespace UnityEngine::Rendering::Universal { class TEdge&; }
namespace UnityEngine::Rendering::Universal { class IntPoint&; }
namespace UnityEngine::Rendering::Universal { class Direction&; }
namespace UnityEngine::Rendering::Universal { class Direction; }
namespace UnityEngine::Rendering::Universal { class IntersectNode; }
namespace UnityEngine::Rendering::Universal { class Join; }
namespace UnityEngine::Rendering::Universal { class PolyNode; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FFD9A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_INSERTMAXIMA_OFFSET UNITYSDK_OFFSET(0x9FFDBC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GET_LASTINDEX_OFFSET UNITYSDK_OFFSET(0x9FFDD40)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SET_LASTINDEX_OFFSET UNITYSDK_OFFSET(0x9FFDD50)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GET_REVERSESOLUTION_OFFSET UNITYSDK_OFFSET(0x9FFDD60)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SET_REVERSESOLUTION_OFFSET UNITYSDK_OFFSET(0x9FFDD70)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GET_STRICTLYSIMPLE_OFFSET UNITYSDK_OFFSET(0x9FFDD80)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SET_STRICTLYSIMPLE_OFFSET UNITYSDK_OFFSET(0x9FFDD90)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9FFDDA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9FFDFB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9FFDDC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9FFDFD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXHOLELINKAGE_OFFSET UNITYSDK_OFFSET(0x9FFEEF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EXECUTEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9FFE100)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DISPOSEALLPOLYPTS_OFFSET UNITYSDK_OFFSET(0xA001410)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDJOIN_OFFSET UNITYSDK_OFFSET(0xA0014A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDGHOSTJOIN_OFFSET UNITYSDK_OFFSET(0xA0015C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_INSERTLOCALMINIMAINTOAEL_OFFSET UNITYSDK_OFFSET(0x9FFEF70)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_INSERTEDGEINTOAEL_OFFSET UNITYSDK_OFFSET(0xA0016D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_E2INSERTSBEFOREE1_OFFSET UNITYSDK_OFFSET(0xA002E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ISEVENODDFILLTYPE_OFFSET UNITYSDK_OFFSET(0xA002F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ISEVENODDALTFILLTYPE_OFFSET UNITYSDK_OFFSET(0xA002F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ISCONTRIBUTING_OFFSET UNITYSDK_OFFSET(0xA001CC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SETWINDINGCOUNT_OFFSET UNITYSDK_OFFSET(0xA0019F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDEDGETOSEL_OFFSET UNITYSDK_OFFSET(0xA0023B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POPEDGEFROMSEL_OFFSET UNITYSDK_OFFSET(0xA002FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_COPYAELTOSEL_OFFSET UNITYSDK_OFFSET(0xA003070)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SWAPPOSITIONSINSEL_OFFSET UNITYSDK_OFFSET(0xA0030E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDLOCALMAXPOLY_OFFSET UNITYSDK_OFFSET(0xA0033D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDLOCALMINPOLY_OFFSET UNITYSDK_OFFSET(0xA002080)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDOUTPT_OFFSET UNITYSDK_OFFSET(0xA001E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETLASTOUTPT_OFFSET UNITYSDK_OFFSET(0xA003A70)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SWAPPOINTS_OFFSET UNITYSDK_OFFSET(0xA003AF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_HORZSEGMENTSOVERLAP_OFFSET UNITYSDK_OFFSET(0xA002480)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SETHOLESTATE_OFFSET UNITYSDK_OFFSET(0xA003960)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETDX_OFFSET UNITYSDK_OFFSET(0xA003B30)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIRSTISBOTTOMPT_OFFSET UNITYSDK_OFFSET(0xA003B60)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETBOTTOMPT_OFFSET UNITYSDK_OFFSET(0xA003FB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETLOWERMOSTREC_OFFSET UNITYSDK_OFFSET(0xA004080)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_OUTREC1RIGHTOFOUTREC2_OFFSET UNITYSDK_OFFSET(0xA004170)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETOUTREC_OFFSET UNITYSDK_OFFSET(0xA0041B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_APPENDPOLYGON_OFFSET UNITYSDK_OFFSET(0xA0034B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_REVERSEPOLYPTLINKS_OFFSET UNITYSDK_OFFSET(0xA000310)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SWAPSIDES_OFFSET UNITYSDK_OFFSET(0xA004250)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SWAPPOLYINDEXES_OFFSET UNITYSDK_OFFSET(0xA004290)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_INTERSECTEDGES_OFFSET UNITYSDK_OFFSET(0xA0024B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DELETEFROMSEL_OFFSET UNITYSDK_OFFSET(0xA0042D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_PROCESSHORIZONTALS_OFFSET UNITYSDK_OFFSET(0x9FFF780)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETHORZDIRECTION_OFFSET UNITYSDK_OFFSET(0xA005290)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_PROCESSHORIZONTAL_OFFSET UNITYSDK_OFFSET(0xA004390)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETNEXTINAEL_OFFSET UNITYSDK_OFFSET(0xA005350)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ISMINIMA_OFFSET UNITYSDK_OFFSET(0xA005390)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ISMAXIMA_OFFSET UNITYSDK_OFFSET(0xA0053E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ISINTERMEDIATE_OFFSET UNITYSDK_OFFSET(0xA005410)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETMAXIMAPAIR_OFFSET UNITYSDK_OFFSET(0xA0052E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETMAXIMAPAIREX_OFFSET UNITYSDK_OFFSET(0xA005450)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_PROCESSINTERSECTIONS_OFFSET UNITYSDK_OFFSET(0x9FFF7E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_BUILDINTERSECTLIST_OFFSET UNITYSDK_OFFSET(0xA005500)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EDGESADJACENT_OFFSET UNITYSDK_OFFSET(0xA0061D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_INTERSECTNODESORT_OFFSET UNITYSDK_OFFSET(0xA006210)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXUPINTERSECTIONORDER_OFFSET UNITYSDK_OFFSET(0xA0058B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_PROCESSINTERSECTLIST_OFFSET UNITYSDK_OFFSET(0xA005B60)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ROUND_OFFSET UNITYSDK_OFFSET(0xA006230)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_TOPX_OFFSET UNITYSDK_OFFSET(0xA002EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_INTERSECTPOINT_OFFSET UNITYSDK_OFFSET(0xA005C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_PROCESSEDGESATTOPOFSCANBEAM_OFFSET UNITYSDK_OFFSET(0x9FFF990)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DOMAXIMA_OFFSET UNITYSDK_OFFSET(0xA006260)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_REVERSEPATHS_OFFSET UNITYSDK_OFFSET(0xA0067E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ORIENTATION_OFFSET UNITYSDK_OFFSET(0xA006960)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POINTCOUNT_OFFSET UNITYSDK_OFFSET(0xA006AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_BUILDRESULT_OFFSET UNITYSDK_OFFSET(0x9FFE7F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_BUILDRESULT2_OFFSET UNITYSDK_OFFSET(0x9FFEAE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXUPOUTPOLYLINE_OFFSET UNITYSDK_OFFSET(0xA000970)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXUPOUTPOLYGON_OFFSET UNITYSDK_OFFSET(0xA000A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DUPOUTPT_OFFSET UNITYSDK_OFFSET(0xA006B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETOVERLAP_OFFSET UNITYSDK_OFFSET(0xA006C10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_JOINHORZ_OFFSET UNITYSDK_OFFSET(0xA006D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_JOINPOINTS_OFFSET UNITYSDK_OFFSET(0xA007110)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POINTINPOLYGON_OFFSET UNITYSDK_OFFSET(0xA007B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POINTINPOLYGON_OFFSET UNITYSDK_OFFSET(0xA007E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POLY2CONTAINSPOLY1_OFFSET UNITYSDK_OFFSET(0xA007FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXUPFIRSTLEFTS1_OFFSET UNITYSDK_OFFSET(0xA008050)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXUPFIRSTLEFTS2_OFFSET UNITYSDK_OFFSET(0xA0084F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXUPFIRSTLEFTS3_OFFSET UNITYSDK_OFFSET(0xA008BA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_PARSEFIRSTLEFT_OFFSET UNITYSDK_OFFSET(0xA0084C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_JOINCOMMONEDGES_OFFSET UNITYSDK_OFFSET(0xA000380)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_UPDATEOUTPTIDXS_OFFSET UNITYSDK_OFFSET(0xA008D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DOSIMPLEPOLYGONS_OFFSET UNITYSDK_OFFSET(0xA000D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_AREA_OFFSET UNITYSDK_OFFSET(0xA006980)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_AREA_OFFSET UNITYSDK_OFFSET(0xA000290)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_AREA_OFFSET UNITYSDK_OFFSET(0xA003F40)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SIMPLIFYPOLYGON_OFFSET UNITYSDK_OFFSET(0xA008D90)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SIMPLIFYPOLYGONS_OFFSET UNITYSDK_OFFSET(0xA008E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DISTANCESQRD_OFFSET UNITYSDK_OFFSET(0xA008F90)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DISTANCEFROMLINESQRD_OFFSET UNITYSDK_OFFSET(0xA008FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SLOPESNEARCOLLINEAR_OFFSET UNITYSDK_OFFSET(0xA009040)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POINTSARECLOSE_OFFSET UNITYSDK_OFFSET(0xA009320)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EXCLUDEOP_OFFSET UNITYSDK_OFFSET(0xA009360)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_CLEANPOLYGON_OFFSET UNITYSDK_OFFSET(0xA0093C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_CLEANPOLYGONS_OFFSET UNITYSDK_OFFSET(0xA009B10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_MINKOWSKI_OFFSET UNITYSDK_OFFSET(0xA009C60)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_MINKOWSKISUM_OFFSET UNITYSDK_OFFSET(0xA00AE20)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_TRANSLATEPATH_OFFSET UNITYSDK_OFFSET(0xA00AF20)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_MINKOWSKISUM_OFFSET UNITYSDK_OFFSET(0xA00B0F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_MINKOWSKIDIFF_OFFSET UNITYSDK_OFFSET(0xA00B3E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POLYTREETOPATHS_OFFSET UNITYSDK_OFFSET(0xA00B4E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDPOLYNODETOPATHS_OFFSET UNITYSDK_OFFSET(0xA00B580)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_OPENPATHSFROMPOLYTREE_OFFSET UNITYSDK_OFFSET(0xA00B7C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_CLOSEDPATHSFROMPOLYTREE_OFFSET UNITYSDK_OFFSET(0xA00B970)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Clipper_TypeDefinitionIndex = 32454;

	class Clipper : public Il2CppObject
	{
	public:
		::System::Int32 ioReverseSolution; // 0x0
		::System::Int32 ioStrictlySimple; // 0x0
		::System::Int32 ioPreserveCollinear; // 0x0
		::UnityEngine::Rendering::Universal::ClipType* m_ClipType; // 0x48
		::UnityEngine::Rendering::Universal::Maxima* m_Maxima; // 0x50
		::UnityEngine::Rendering::Universal::TEdge* m_SortedEdges; // 0x58
		Il2CppObject* m_IntersectList; // 0x60
		Il2CppObject* m_IntersectNodeComparer; // 0x68
		::System::Boolean m_ExecuteLocked; // 0x70
		::UnityEngine::Rendering::Universal::PolyFillType* m_ClipFillType; // 0x74
		::UnityEngine::Rendering::Universal::PolyFillType* m_SubjFillType; // 0x78
		Il2CppObject* m_Joins; // 0x80
		Il2CppObject* m_GhostJoins; // 0x88
		::System::Boolean m_UsingPolyTree; // 0x90
		::System::Int32 _LastIndex_k__BackingField; // 0x94
		::System::Boolean _ReverseSolution_k__BackingField; // 0x98
		::System::Boolean _StrictlySimple_k__BackingField; // 0x99

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void InsertMaxima(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_INSERTMAXIMA_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LastIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GET_LASTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_LastIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SET_LASTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ReverseSolution()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GET_REVERSESOLUTION_OFFSET))(nullptr);
		}

		::System::Void set_ReverseSolution(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SET_REVERSESOLUTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_StrictlySimple()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GET_STRICTLYSIMPLE_OFFSET))(nullptr);
		}

		::System::Void set_StrictlySimple(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SET_STRICTLYSIMPLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean Execute(::UnityEngine::Rendering::Universal::ClipType* arg, Il2CppObject* arg, ::UnityEngine::Rendering::Universal::PolyFillType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::ClipType*, Il2CppObject*, ::UnityEngine::Rendering::Universal::PolyFillType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EXECUTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Execute(::UnityEngine::Rendering::Universal::ClipType* arg, ::UnityEngine::Rendering::Universal::PolyTree* arg, ::UnityEngine::Rendering::Universal::PolyFillType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::ClipType*, ::UnityEngine::Rendering::Universal::PolyTree*, ::UnityEngine::Rendering::Universal::PolyFillType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EXECUTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Execute(::UnityEngine::Rendering::Universal::ClipType* arg, Il2CppObject* arg, ::UnityEngine::Rendering::Universal::PolyFillType* arg, ::UnityEngine::Rendering::Universal::PolyFillType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::ClipType*, Il2CppObject*, ::UnityEngine::Rendering::Universal::PolyFillType*, ::UnityEngine::Rendering::Universal::PolyFillType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EXECUTE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Execute(::UnityEngine::Rendering::Universal::ClipType* arg, ::UnityEngine::Rendering::Universal::PolyTree* arg, ::UnityEngine::Rendering::Universal::PolyFillType* arg, ::UnityEngine::Rendering::Universal::PolyFillType* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::ClipType*, ::UnityEngine::Rendering::Universal::PolyTree*, ::UnityEngine::Rendering::Universal::PolyFillType*, ::UnityEngine::Rendering::Universal::PolyFillType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EXECUTE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void FixHoleLinkage(::UnityEngine::Rendering::Universal::OutRec* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::OutRec*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXHOLELINKAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean ExecuteInternal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EXECUTEINTERNAL_OFFSET))(nullptr);
		}

		::System::Void DisposeAllPolyPts()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DISPOSEALLPOLYPTS_OFFSET))(nullptr);
		}

		::System::Void AddJoin(::UnityEngine::Rendering::Universal::OutPt* arg, ::UnityEngine::Rendering::Universal::OutPt* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDJOIN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddGhostJoin(::UnityEngine::Rendering::Universal::OutPt* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDGHOSTJOIN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InsertLocalMinimaIntoAEL(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_INSERTLOCALMINIMAINTOAEL_OFFSET))(arg, nullptr);
		}

		::System::Void InsertEdgeIntoAEL(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_INSERTEDGEINTOAEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean E2InsertsBeforeE1(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_E2INSERTSBEFOREE1_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsEvenOddFillType(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ISEVENODDFILLTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEvenOddAltFillType(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ISEVENODDALTFILLTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContributing(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ISCONTRIBUTING_OFFSET))(arg, nullptr);
		}

		::System::Void SetWindingCount(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SETWINDINGCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void AddEdgeToSEL(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDEDGETOSEL_OFFSET))(arg, nullptr);
		}

		::System::Boolean PopEdgeFromSEL(::UnityEngine::Rendering::Universal::TEdge&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::TEdge&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POPEDGEFROMSEL_OFFSET))(arg, nullptr);
		}

		::System::Void CopyAELToSEL()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_COPYAELTOSEL_OFFSET))(nullptr);
		}

		::System::Void SwapPositionsInSEL(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SWAPPOSITIONSINSEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalMaxPoly(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDLOCALMAXPOLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::OutPt* AddLocalMinPoly(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::OutPt*(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDLOCALMINPOLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::OutPt* AddOutPt(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::OutPt*(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDOUTPT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::OutPt* GetLastOutPt(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::OutPt*(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETLASTOUTPT_OFFSET))(arg, nullptr);
		}

		::System::Void SwapPoints(::UnityEngine::Rendering::Universal::IntPoint&* arg, ::UnityEngine::Rendering::Universal::IntPoint&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::IntPoint&*, ::UnityEngine::Rendering::Universal::IntPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SWAPPOINTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HorzSegmentsOverlap(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_HORZSEGMENTSOVERLAP_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetHoleState(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::OutRec* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::OutRec*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SETHOLESTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Double GetDx(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			return (return (::System::Double(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETDX_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FirstIsBottomPt(::UnityEngine::Rendering::Universal::OutPt* arg, ::UnityEngine::Rendering::Universal::OutPt* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::OutPt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIRSTISBOTTOMPT_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::OutPt* GetBottomPt(::UnityEngine::Rendering::Universal::OutPt* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::OutPt*(*)(::UnityEngine::Rendering::Universal::OutPt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETBOTTOMPT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::OutRec* GetLowermostRec(::UnityEngine::Rendering::Universal::OutRec* arg, ::UnityEngine::Rendering::Universal::OutRec* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::OutRec*(*)(::UnityEngine::Rendering::Universal::OutRec*, ::UnityEngine::Rendering::Universal::OutRec*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETLOWERMOSTREC_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean OutRec1RightOfOutRec2(::UnityEngine::Rendering::Universal::OutRec* arg, ::UnityEngine::Rendering::Universal::OutRec* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::OutRec*, ::UnityEngine::Rendering::Universal::OutRec*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_OUTREC1RIGHTOFOUTREC2_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::OutRec* GetOutRec(::System::Int32 arg)
		{
			return (return (::UnityEngine::Rendering::Universal::OutRec*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETOUTREC_OFFSET))(arg, nullptr);
		}

		::System::Void AppendPolygon(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_APPENDPOLYGON_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReversePolyPtLinks(::UnityEngine::Rendering::Universal::OutPt* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::OutPt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_REVERSEPOLYPTLINKS_OFFSET))(arg, nullptr);
		}

		::System::Void SwapSides(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SWAPSIDES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SwapPolyIndexes(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SWAPPOLYINDEXES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void IntersectEdges(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_INTERSECTEDGES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DeleteFromSEL(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DELETEFROMSEL_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessHorizontals()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_PROCESSHORIZONTALS_OFFSET))(nullptr);
		}

		::System::Void GetHorzDirection(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::Direction&* arg, int64_t&* arg, int64_t&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::Direction&*, int64_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETHORZDIRECTION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ProcessHorizontal(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_PROCESSHORIZONTAL_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::TEdge* GetNextInAEL(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::Direction* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::TEdge*(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::Direction*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETNEXTINAEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsMinima(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ISMINIMA_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMaxima(::UnityEngine::Rendering::Universal::TEdge* arg, ::System::Double arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::TEdge*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ISMAXIMA_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsIntermediate(::UnityEngine::Rendering::Universal::TEdge* arg, ::System::Double arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::TEdge*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ISINTERMEDIATE_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::TEdge* GetMaximaPair(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::TEdge*(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETMAXIMAPAIR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::TEdge* GetMaximaPairEx(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::TEdge*(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETMAXIMAPAIREX_OFFSET))(arg, nullptr);
		}

		::System::Boolean ProcessIntersections(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_PROCESSINTERSECTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void BuildIntersectList(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_BUILDINTERSECTLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean EdgesAdjacent(::UnityEngine::Rendering::Universal::IntersectNode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::IntersectNode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EDGESADJACENT_OFFSET))(arg, nullptr);
		}

		::System::Int32 IntersectNodeSort(::UnityEngine::Rendering::Universal::IntersectNode* arg, ::UnityEngine::Rendering::Universal::IntersectNode* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::IntersectNode*, ::UnityEngine::Rendering::Universal::IntersectNode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_INTERSECTNODESORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean FixupIntersectionOrder()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXUPINTERSECTIONORDER_OFFSET))(nullptr);
		}

		::System::Void ProcessIntersectList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_PROCESSINTERSECTLIST_OFFSET))(nullptr);
		}

		::System::Int64 Round(::System::Double arg)
		{
			return (return (::System::Int64(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Int64 TopX(::UnityEngine::Rendering::Universal::TEdge* arg, ::System::Int64 arg)
		{
			return (return (::System::Int64(*)(::UnityEngine::Rendering::Universal::TEdge*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_TOPX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void IntersectPoint(::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::TEdge* arg, ::UnityEngine::Rendering::Universal::IntPoint&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::TEdge*, ::UnityEngine::Rendering::Universal::IntPoint&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_INTERSECTPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ProcessEdgesAtTopOfScanbeam(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_PROCESSEDGESATTOPOFSCANBEAM_OFFSET))(arg, nullptr);
		}

		::System::Void DoMaxima(::UnityEngine::Rendering::Universal::TEdge* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::TEdge*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DOMAXIMA_OFFSET))(arg, nullptr);
		}

		::System::Void ReversePaths(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_REVERSEPATHS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Orientation(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ORIENTATION_OFFSET))(arg, nullptr);
		}

		::System::Int32 PointCount(::UnityEngine::Rendering::Universal::OutPt* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::OutPt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POINTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void BuildResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_BUILDRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void BuildResult2(::UnityEngine::Rendering::Universal::PolyTree* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::PolyTree*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_BUILDRESULT2_OFFSET))(arg, nullptr);
		}

		::System::Void FixupOutPolyline(::UnityEngine::Rendering::Universal::OutRec* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::OutRec*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXUPOUTPOLYLINE_OFFSET))(arg, nullptr);
		}

		::System::Void FixupOutPolygon(::UnityEngine::Rendering::Universal::OutRec* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::OutRec*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXUPOUTPOLYGON_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::OutPt* DupOutPt(::UnityEngine::Rendering::Universal::OutPt* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::Rendering::Universal::OutPt*(*)(::UnityEngine::Rendering::Universal::OutPt*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DUPOUTPT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetOverlap(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, int64_t&* arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, int64_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_GETOVERLAP_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean JoinHorz(::UnityEngine::Rendering::Universal::OutPt* arg, ::UnityEngine::Rendering::Universal::OutPt* arg, ::UnityEngine::Rendering::Universal::OutPt* arg, ::UnityEngine::Rendering::Universal::OutPt* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::IntPoint*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_JOINHORZ_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean JoinPoints(::UnityEngine::Rendering::Universal::Join* arg, ::UnityEngine::Rendering::Universal::OutRec* arg, ::UnityEngine::Rendering::Universal::OutRec* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::Join*, ::UnityEngine::Rendering::Universal::OutRec*, ::UnityEngine::Rendering::Universal::OutRec*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_JOINPOINTS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 PointInPolygon(::UnityEngine::Rendering::Universal::IntPoint* arg, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::IntPoint*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POINTINPOLYGON_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 PointInPolygon(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::OutPt* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::OutPt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POINTINPOLYGON_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Poly2ContainsPoly1(::UnityEngine::Rendering::Universal::OutPt* arg, ::UnityEngine::Rendering::Universal::OutPt* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::OutPt*, ::UnityEngine::Rendering::Universal::OutPt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POLY2CONTAINSPOLY1_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FixupFirstLefts1(::UnityEngine::Rendering::Universal::OutRec* arg, ::UnityEngine::Rendering::Universal::OutRec* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::OutRec*, ::UnityEngine::Rendering::Universal::OutRec*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXUPFIRSTLEFTS1_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FixupFirstLefts2(::UnityEngine::Rendering::Universal::OutRec* arg, ::UnityEngine::Rendering::Universal::OutRec* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::OutRec*, ::UnityEngine::Rendering::Universal::OutRec*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXUPFIRSTLEFTS2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FixupFirstLefts3(::UnityEngine::Rendering::Universal::OutRec* arg, ::UnityEngine::Rendering::Universal::OutRec* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::OutRec*, ::UnityEngine::Rendering::Universal::OutRec*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_FIXUPFIRSTLEFTS3_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::OutRec* ParseFirstLeft(::UnityEngine::Rendering::Universal::OutRec* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::OutRec*(*)(::UnityEngine::Rendering::Universal::OutRec*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_PARSEFIRSTLEFT_OFFSET))(arg, nullptr);
		}

		::System::Void JoinCommonEdges()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_JOINCOMMONEDGES_OFFSET))(nullptr);
		}

		::System::Void UpdateOutPtIdxs(::UnityEngine::Rendering::Universal::OutRec* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::OutRec*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_UPDATEOUTPTIDXS_OFFSET))(arg, nullptr);
		}

		::System::Void DoSimplePolygons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DOSIMPLEPOLYGONS_OFFSET))(nullptr);
		}

		::System::Double Area(Il2CppObject* arg)
		{
			return (return (::System::Double(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_AREA_OFFSET))(arg, nullptr);
		}

		::System::Double Area(::UnityEngine::Rendering::Universal::OutRec* arg)
		{
			return (return (::System::Double(*)(::UnityEngine::Rendering::Universal::OutRec*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_AREA_OFFSET))(arg, nullptr);
		}

		::System::Double Area(::UnityEngine::Rendering::Universal::OutPt* arg)
		{
			return (return (::System::Double(*)(::UnityEngine::Rendering::Universal::OutPt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_AREA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SimplifyPolygon(Il2CppObject* arg, ::UnityEngine::Rendering::Universal::PolyFillType* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Rendering::Universal::PolyFillType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SIMPLIFYPOLYGON_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SimplifyPolygons(Il2CppObject* arg, ::UnityEngine::Rendering::Universal::PolyFillType* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Rendering::Universal::PolyFillType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SIMPLIFYPOLYGONS_OFFSET))(arg, arg, nullptr);
		}

		::System::Double DistanceSqrd(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			return (return (::System::Double(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DISTANCESQRD_OFFSET))(arg, arg, nullptr);
		}

		::System::Double DistanceFromLineSqrd(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			return (return (::System::Double(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_DISTANCEFROMLINESQRD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean SlopesNearCollinear(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg, ::System::Double arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_SLOPESNEARCOLLINEAR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean PointsAreClose(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg, ::System::Double arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POINTSARECLOSE_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Rendering::Universal::OutPt* ExcludeOp(::UnityEngine::Rendering::Universal::OutPt* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::OutPt*(*)(::UnityEngine::Rendering::Universal::OutPt*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_EXCLUDEOP_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CleanPolygon(Il2CppObject* arg, ::System::Double arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_CLEANPOLYGON_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* CleanPolygons(Il2CppObject* arg, ::System::Double arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_CLEANPOLYGONS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Minkowski(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_MINKOWSKI_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* MinkowskiSum(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_MINKOWSKISUM_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* TranslatePath(Il2CppObject* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_TRANSLATEPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* MinkowskiSum(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_MINKOWSKISUM_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* MinkowskiDiff(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_MINKOWSKIDIFF_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* PolyTreeToPaths(::UnityEngine::Rendering::Universal::PolyTree* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Rendering::Universal::PolyTree*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_POLYTREETOPATHS_OFFSET))(arg, nullptr);
		}

		::System::Void AddPolyNodeToPaths(::UnityEngine::Rendering::Universal::PolyNode* arg, NodeType* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::PolyNode*, NodeType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_ADDPOLYNODETOPATHS_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* OpenPathsFromPolyTree(::UnityEngine::Rendering::Universal::PolyTree* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Rendering::Universal::PolyTree*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_OPENPATHSFROMPOLYTREE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ClosedPathsFromPolyTree(::UnityEngine::Rendering::Universal::PolyTree* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::Rendering::Universal::PolyTree*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPER_CLOSEDPATHSFROMPOLYTREE_OFFSET))(arg, nullptr);
		}

	};
}

