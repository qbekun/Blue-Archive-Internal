#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Rendering::Universal { class IntPoint; }
namespace UnityEngine::Rendering::Universal { class PolyNode; }
namespace UnityEngine::Rendering::Universal { class JoinType; }
namespace UnityEngine::Rendering::Universal { class EndType; }
namespace UnityEngine::Rendering::Universal { class DoublePoint; }
namespace UnityEngine::Rendering::Universal { class PolyTree&; }

#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_GET_ARCTOLERANCE_OFFSET UNITYSDK_OFFSET(0xA00BA10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_SET_ARCTOLERANCE_OFFSET UNITYSDK_OFFSET(0xA00BA20)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_.CTOR_OFFSET UNITYSDK_OFFSET(0xA00BA30)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_CLEAR_OFFSET UNITYSDK_OFFSET(0xA00BB10)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_ROUND_OFFSET UNITYSDK_OFFSET(0xA00BB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_ADDPATH_OFFSET UNITYSDK_OFFSET(0xA00BBB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_ADDPATHS_OFFSET UNITYSDK_OFFSET(0xA00C360)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_FIXORIENTATIONS_OFFSET UNITYSDK_OFFSET(0xA00C4E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_GETUNITNORMAL_OFFSET UNITYSDK_OFFSET(0xA00C690)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_DOOFFSET_OFFSET UNITYSDK_OFFSET(0xA00C7A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA00F0F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA00F710)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_OFFSETPOINT_OFFSET UNITYSDK_OFFSET(0xA00DD60)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_DOSQUARE_OFFSET UNITYSDK_OFFSET(0xA00FEA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_DOMITER_OFFSET UNITYSDK_OFFSET(0xA0106E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_DOROUND_OFFSET UNITYSDK_OFFSET(0xA00E9E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ClipperOffset_TypeDefinitionIndex = 32455;

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
		::System::Double m_StepsPerRad; // 0x50
		::UnityEngine::Rendering::Universal::IntPoint* m_lowest; // 0x58
		::UnityEngine::Rendering::Universal::PolyNode* m_polyNodes; // 0x88
		::System::Double _ArcTolerance_k__BackingField; // 0x90
		::System::Double two_pi; // 0x0
		::System::Double def_arc_tolerance; // 0x0

		::System::Double get_ArcTolerance()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_GET_ARCTOLERANCE_OFFSET))(nullptr);
		}

		::System::Void set_ArcTolerance(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_SET_ARCTOLERANCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_CLEAR_OFFSET))(nullptr);
		}

		::System::Int64 Round(::System::Double arg)
		{
			return (return (::System::Int64(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_ROUND_OFFSET))(arg, nullptr);
		}

		::System::Void AddPath(Il2CppObject* arg, ::UnityEngine::Rendering::Universal::JoinType* arg, ::UnityEngine::Rendering::Universal::EndType* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Rendering::Universal::JoinType*, ::UnityEngine::Rendering::Universal::EndType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_ADDPATH_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddPaths(Il2CppObject* arg, ::UnityEngine::Rendering::Universal::JoinType* arg, ::UnityEngine::Rendering::Universal::EndType* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Rendering::Universal::JoinType*, ::UnityEngine::Rendering::Universal::EndType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_ADDPATHS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void FixOrientations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_FIXORIENTATIONS_OFFSET))(nullptr);
		}

		::UnityEngine::Rendering::Universal::DoublePoint* GetUnitNormal(::UnityEngine::Rendering::Universal::IntPoint* arg, ::UnityEngine::Rendering::Universal::IntPoint* arg)
		{
			return (return (::UnityEngine::Rendering::Universal::DoublePoint*(*)(::UnityEngine::Rendering::Universal::IntPoint*, ::UnityEngine::Rendering::Universal::IntPoint*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_GETUNITNORMAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DoOffset(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_DOOFFSET_OFFSET))(arg, nullptr);
		}

		::System::Void Execute(Il2CppObject&* arg, ::System::Double arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::Double, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_EXECUTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Execute(::UnityEngine::Rendering::Universal::PolyTree&* arg, ::System::Double arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::Universal::PolyTree&*, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_EXECUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OffsetPoint(::System::Int32 arg, int32_t&* arg, ::UnityEngine::Rendering::Universal::JoinType* arg)
		{
			((::System::Void(*)(::System::Int32, int32_t&*, ::UnityEngine::Rendering::Universal::JoinType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_OFFSETPOINT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DoSquare(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_DOSQUARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DoMiter(::System::Int32 arg, ::System::Int32 arg, ::System::Double arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_DOMITER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void DoRound(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_CLIPPEROFFSET_DOROUND_OFFSET))(arg, arg, nullptr);
		}

	};
}

