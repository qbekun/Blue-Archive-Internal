#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace MXPath { class DistanceMetadata; }
namespace MXPath { class Curve; }
namespace UnityEngine { class Quaternion; }

#define MXPATH_BEZIERCURVE_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x9435AC0)
#define MXPATH_BEZIERCURVE_GENERATEDISTANCEMETADATA_OFFSET UNITYSDK_OFFSET(0x9435BE0)
#define MXPATH_BEZIERCURVE_GENERATEDISTANCEMETADATAIFNEED_OFFSET UNITYSDK_OFFSET(0x9435B10)
#define MXPATH_BEZIERCURVE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9435FD0)
#define MXPATH_BEZIERCURVE_GETPOINT_OFFSET UNITYSDK_OFFSET(0x9436080)
#define MXPATH_BEZIERCURVE_GETPOINTBYNORMALIZEDDISTANCE_OFFSET UNITYSDK_OFFSET(0x9436190)
#define MXPATH_BEZIERCURVE_GETTANGENT_OFFSET UNITYSDK_OFFSET(0x94361E0)
#define MXPATH_BEZIERCURVE_GETNORMALIZEDDISTANCETONORMALIZET_OFFSET UNITYSDK_OFFSET(0x9436310)
#define MXPATH_BEZIERCURVE_GETDRAWINGLINES_OFFSET UNITYSDK_OFFSET(0x94363E0)

namespace MXPath
{
	inline static constexpr unsigned int BezierCurve_TypeDefinitionIndex = 37987;

	class BezierCurve : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* start; // 0x10
		::UnityEngine::Vector3* end; // 0x1C
		::UnityEngine::Vector3* startTangent; // 0x28
		::UnityEngine::Vector3* endTangent; // 0x34
		::System::Boolean isReversed; // 0x40
		::MXPath::DistanceMetadata* metadata; // 0x48

		::System::Single GetLength()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_BEZIERCURVE_GETLENGTH_OFFSET))(nullptr);
		}

		::System::Void GenerateDistanceMetadata(::MXPath::Curve* arg, ::MXPath::DistanceMetadata* arg)
		{
			((::System::Void(*)(::MXPath::Curve*, ::MXPath::DistanceMetadata*, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_BEZIERCURVE_GENERATEDISTANCEMETADATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GenerateDistanceMetadataIfNeed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXPATH_BEZIERCURVE_GENERATEDISTANCEMETADATAIFNEED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Boolean arg, ::MXPath::DistanceMetadata* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Boolean, ::MXPath::DistanceMetadata*, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_BEZIERCURVE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetPoint(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_BEZIERCURVE_GETPOINT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetPointByNormalizedDistance(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_BEZIERCURVE_GETPOINTBYNORMALIZEDDISTANCE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetTangent(::System::Single arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_BEZIERCURVE_GETTANGENT_OFFSET))(arg, nullptr);
		}

		::System::Single GetNormalizedDistanceToNormalizeT(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_BEZIERCURVE_GETNORMALIZEDDISTANCETONORMALIZET_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDrawingLines(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MXPATH_BEZIERCURVE_GETDRAWINGLINES_OFFSET))(arg, arg, nullptr);
		}

	};
}

