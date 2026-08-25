#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector2; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector4; }

#define SPINE_UNITY_MATHUTILITIES_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x961ECD0)
#define SPINE_UNITY_MATHUTILITIES_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x961ECE0)
#define SPINE_UNITY_MATHUTILITIES_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x961ED30)
#define SPINE_UNITY_MATHUTILITIES_INVERSELERP_OFFSET UNITYSDK_OFFSET(0x961ED70)

namespace Spine::Unity
{
	inline static constexpr unsigned int MathUtilities_TypeDefinitionIndex = 35376;

	class MathUtilities : public Il2CppObject
	{
	public:
		::System::Single InverseLerp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATHUTILITIES_INVERSELERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector2* InverseLerp(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::Vector2*(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATHUTILITIES_INVERSELERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector3* InverseLerp(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATHUTILITIES_INVERSELERP_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Vector4* InverseLerp(::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg, ::UnityEngine::Vector4* arg)
		{
			return (return (::UnityEngine::Vector4*(*)(::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::UnityEngine::Vector4*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MATHUTILITIES_INVERSELERP_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

