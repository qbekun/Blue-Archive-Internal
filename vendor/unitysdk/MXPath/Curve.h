#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define MXPATH_CURVE_GETPOINT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_CURVE_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_CURVE_GETPOINTBYNORMALIZEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_CURVE_GETNORMALIZEDDISTANCETONORMALIZET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_CURVE_GETTANGENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_CURVE_GETDRAWINGLINES_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXPATH_CURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9436070)

namespace MXPath
{
	inline static constexpr unsigned int Curve_TypeDefinitionIndex = 37988;

	class Curve : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* GetPoint(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_CURVE_GETPOINT_OFFSET))(arg, nullptr);
		}

		::System::Single GetLength()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_CURVE_GETLENGTH_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* GetPointByNormalizedDistance(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_CURVE_GETPOINTBYNORMALIZEDDISTANCE_OFFSET))(arg, nullptr);
		}

		::System::Single GetNormalizedDistanceToNormalizeT(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_CURVE_GETNORMALIZEDDISTANCETONORMALIZET_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetTangent(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_CURVE_GETTANGENT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDrawingLines(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_CURVE_GETDRAWINGLINES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_CURVE_.CTOR_OFFSET))(nullptr);
		}

	};
}

