#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Matrix4x4; }
namespace UnityEngine { class Bounds; }
namespace UnityEngine { class Vector3&; }

#define VOLUME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F8B160)
#define VOLUME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F8B2B0)
#define VOLUME_.CTOR_OFFSET UNITYSDK_OFFSET(0x9F8B310)
#define VOLUME_CALCULATEAABB_OFFSET UNITYSDK_OFFSET(0x9F8B370)
#define VOLUME_CALCULATECENTERANDSIZE_OFFSET UNITYSDK_OFFSET(0x9F8B5D0)
#define VOLUME_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x9F8B7E0)
#define VOLUME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9F8B8E0)
#define VOLUME_EQUALS_OFFSET UNITYSDK_OFFSET(0x9F8BB40)

	inline static constexpr unsigned int Volume_TypeDefinitionIndex = 33798;

	class Volume : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* corner; // 0x10
		::UnityEngine::Vector3* X; // 0x1C
		::UnityEngine::Vector3* Y; // 0x28
		::UnityEngine::Vector3* Z; // 0x34
		::System::Single maxSubdivisionMultiplier; // 0x40
		::System::Single minSubdivisionMultiplier; // 0x44

		::System::Void .ctor(::UnityEngine::Matrix4x4* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VOLUME_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + VOLUME_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(Volume* arg)
		{
			((::System::Void(*)(Volume*, ::PVOID))((::PBYTE)hIl2Cpp + VOLUME_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Bounds* CalculateAABB()
		{
			return (return (::UnityEngine::Bounds*(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUME_CALCULATEAABB_OFFSET))(nullptr);
		}

		::System::Void CalculateCenterAndSize(::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + VOLUME_CALCULATECENTERANDSIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Transform(::UnityEngine::Matrix4x4* arg)
		{
			((::System::Void(*)(::UnityEngine::Matrix4x4*, ::PVOID))((::PBYTE)hIl2Cpp + VOLUME_TRANSFORM_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUME_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(Volume* arg)
		{
			return (return (::System::Boolean(*)(Volume*, ::PVOID))((::PBYTE)hIl2Cpp + VOLUME_EQUALS_OFFSET))(arg, nullptr);
		}

	};

