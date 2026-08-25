#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class SphericalHarmonicsL2&; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::Rendering { class SphericalHarmonicsL2; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_SETL1B_OFFSET UNITYSDK_OFFSET(0x9FB6340)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_SETL0_OFFSET UNITYSDK_OFFSET(0x9FB63C0)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_GETCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x9FB6430)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_SETL1_OFFSET UNITYSDK_OFFSET(0x9FB64B0)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_SETCOEFFICIENT_OFFSET UNITYSDK_OFFSET(0x9FB6700)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_SETL1R_OFFSET UNITYSDK_OFFSET(0x9FB6610)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_SETL1G_OFFSET UNITYSDK_OFFSET(0x9FB6680)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB6770)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_GETL2_OFFSET UNITYSDK_OFFSET(0x9FB6780)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_GETL1_OFFSET UNITYSDK_OFFSET(0x9FB6980)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SphericalHarmonicsL2Utils_TypeDefinitionIndex = 33991;

	class SphericalHarmonicsL2Utils : public Il2CppObject
	{
	public:
		::System::Void SetL1B(::UnityEngine::Rendering::SphericalHarmonicsL2&* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2&*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_SETL1B_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetL0(::UnityEngine::Rendering::SphericalHarmonicsL2&* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2&*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_SETL0_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetCoefficient(::UnityEngine::Rendering::SphericalHarmonicsL2* arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::UnityEngine::Rendering::SphericalHarmonicsL2*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_GETCOEFFICIENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetL1(::UnityEngine::Rendering::SphericalHarmonicsL2&* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2&*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_SETL1_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetCoefficient(::UnityEngine::Rendering::SphericalHarmonicsL2&* arg, ::System::Int32 arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2&*, ::System::Int32, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_SETCOEFFICIENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetL1R(::UnityEngine::Rendering::SphericalHarmonicsL2&* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2&*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_SETL1R_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetL1G(::UnityEngine::Rendering::SphericalHarmonicsL2&* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2&*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_SETL1G_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GetL2(::UnityEngine::Rendering::SphericalHarmonicsL2* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_GETL2_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void GetL1(::UnityEngine::Rendering::SphericalHarmonicsL2* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2UTILS_GETL1_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

