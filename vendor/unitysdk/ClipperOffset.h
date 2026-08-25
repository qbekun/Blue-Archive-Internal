#pragma once
#include "unitysdk.h"

#define CLIPPEROFFSET_GET_ARCTOLERANCE_OFFSET UNITYSDK_OFFSET(0x287D8E0)
#define CLIPPEROFFSET_SET_ARCTOLERANCE_OFFSET UNITYSDK_OFFSET(0x287D8F0)
#define CLIPPEROFFSET_GET_MITERLIMIT_OFFSET UNITYSDK_OFFSET(0x287D900)
#define CLIPPEROFFSET_SET_MITERLIMIT_OFFSET UNITYSDK_OFFSET(0x287D910)
#define CLIPPEROFFSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x287D920)
#define CLIPPEROFFSET_CLEAR_OFFSET UNITYSDK_OFFSET(0x287DA10)
#define CLIPPEROFFSET_ROUND_OFFSET UNITYSDK_OFFSET(0x287DA80)
#define CLIPPEROFFSET_ADDPATH_OFFSET UNITYSDK_OFFSET(0x287DAB0)
#define CLIPPEROFFSET_ADDPATHS_OFFSET UNITYSDK_OFFSET(0x287E0C0)
#define CLIPPEROFFSET_FIXORIENTATIONS_OFFSET UNITYSDK_OFFSET(0x287E240)
#define CLIPPEROFFSET_GETUNITNORMAL_OFFSET UNITYSDK_OFFSET(0x287E3D0)
#define CLIPPEROFFSET_DOOFFSET_OFFSET UNITYSDK_OFFSET(0x287E4D0)
#define CLIPPEROFFSET_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2881300)
#define CLIPPEROFFSET_EXECUTE_OFFSET UNITYSDK_OFFSET(0x2881760)
#define CLIPPEROFFSET_OFFSETPOINT_OFFSET UNITYSDK_OFFSET(0x287FEE0)
#define CLIPPEROFFSET_DOSQUARE_OFFSET UNITYSDK_OFFSET(0x2880810)
#define CLIPPEROFFSET_DOMITER_OFFSET UNITYSDK_OFFSET(0x2881D30)
#define CLIPPEROFFSET_DOROUND_OFFSET UNITYSDK_OFFSET(0x2880DB0)

	inline static constexpr unsigned int ClipperOffset_TypeDefinitionIndex = 34397;

	class ClipperOffset : public Il2CppObject
	{
	public:
		Il2CppObject* m_destPolys; // 0x10
		Il2CppObject* m_srcPoly; // 0x18
		Il2CppObject* m_destPoly; // 0x20
		Il2CppObject* m_normals; // 0x28
		::System::Double m_delta; // 0x30
		::System::Double m_sinA; // 0x38
		::System::Double m_sin; // 0x40
		::System::Double m_cos; // 0x48
		::System::Double m_miterLim; // 0x50
		::System::Double m_StepsPerRad; // 0x58
		IntPoint* m_lowest; // 0x60
		PolyNode* m_polyNodes; // 0x70
		::System::Double _ArcTolerance_k__BackingField; // 0x78
		::System::Double _MiterLimit_k__BackingField; // 0x80
		::System::Double two_pi; // 0x0
		::System::Double def_arc_tolerance; // 0x0

		::System::Double get_ArcTolerance()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_GET_ARCTOLERANCE_OFFSET))(nullptr);
		}

		::System::Void set_ArcTolerance(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_SET_ARCTOLERANCE_OFFSET))(arg, nullptr);
		}

		::System::Double get_MiterLimit()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_GET_MITERLIMIT_OFFSET))(nullptr);
		}

		::System::Void set_MiterLimit(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_SET_MITERLIMIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Double arg, ::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_CLEAR_OFFSET))(nullptr);
		}

		::System::Int64 Round(::System::Double arg)
		{
			return (return (::System::Int64(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Void AddPath(Il2CppObject* arg, JoinType* arg, EndType* arg)
		{
			((::System::Void(*)(Il2CppObject*, JoinType*, EndType*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_ADDPATH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddPaths(Il2CppObject* arg, JoinType* arg, EndType* arg)
		{
			((::System::Void(*)(Il2CppObject*, JoinType*, EndType*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_ADDPATHS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FixOrientations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_FIXORIENTATIONS_OFFSET))(nullptr);
		}

		DoublePoint* GetUnitNormal(IntPoint* arg, IntPoint* arg)
		{
			return (return (DoublePoint*(*)(IntPoint*, IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_GETUNITNORMAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DoOffset(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_DOOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(Il2CppObject&* arg, ::System::Double arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Execute(PolyTree&* arg, ::System::Double arg)
		{
			((::System::Void(*)(PolyTree&*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OffsetPoint(::System::Int32 arg, int32_t&* arg, JoinType* arg)
		{
			((::System::Void(*)(::System::Int32, int32_t&*, JoinType*, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_OFFSETPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DoSquare(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_DOSQUARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DoMiter(::System::Int32 arg, ::System::Int32 arg, ::System::Double arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_DOMITER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DoRound(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CLIPPEROFFSET_DOROUND_OFFSET))(arg, arg, nullptr);
		}

	};

