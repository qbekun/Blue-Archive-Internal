#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define MXPATH_LINEARCURVE_GETPOINTBYNORMALIZEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x9436740)
#define MXPATH_LINEARCURVE_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x9436770)
#define MXPATH_LINEARCURVE_GETDRAWINGLINES_OFFSET UNITYSDK_OFFSET(0x9436850)
#define MXPATH_LINEARCURVE_GETNORMALIZEDDISTANCETONORMALIZET_OFFSET UNITYSDK_OFFSET(0x9436970)
#define MXPATH_LINEARCURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9436980)
#define MXPATH_LINEARCURVE_GETTANGENT_OFFSET UNITYSDK_OFFSET(0x9436AA0)
#define MXPATH_LINEARCURVE_GETPOINT_OFFSET UNITYSDK_OFFSET(0x9436AC0)

namespace MXPath
{
	inline static constexpr unsigned int LinearCurve_TypeDefinitionIndex = 37989;

	class LinearCurve : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* start; // 0x10
		::UnityEngine::Vector3* end; // 0x1C
		::UnityEngine::Vector3* tangent; // 0x28

		::UnityEngine::Vector3* GetPointByNormalizedDistance(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_LINEARCURVE_GETPOINTBYNORMALIZEDDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Single GetLength()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_LINEARCURVE_GETLENGTH_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDrawingLines(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_LINEARCURVE_GETDRAWINGLINES_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetNormalizedDistanceToNormalizeT(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_LINEARCURVE_GETNORMALIZEDDISTANCETONORMALIZET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_LINEARCURVE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetTangent(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_LINEARCURVE_GETTANGENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetPoint(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_LINEARCURVE_GETPOINT_OFFSET))(arg, nullptr);
		}

	};
}

