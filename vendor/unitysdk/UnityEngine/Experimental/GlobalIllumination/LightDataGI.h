#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination { class LinearColor; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine::Experimental::GlobalIllumination { class LightType; }
namespace UnityEngine::Experimental::GlobalIllumination { class LightMode; }
namespace UnityEngine::Experimental::GlobalIllumination { class FalloffType; }
namespace UnityEngine::Experimental::GlobalIllumination { class DirectionalLight&; }
namespace UnityEngine::Experimental::GlobalIllumination { class Cookie&; }
namespace UnityEngine::Experimental::GlobalIllumination { class PointLight&; }
namespace UnityEngine::Experimental::GlobalIllumination { class SpotLight&; }
namespace UnityEngine::Experimental::GlobalIllumination { class RectangleLight&; }
namespace UnityEngine::Experimental::GlobalIllumination { class DiscLight&; }

#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET UNITYSDK_OFFSET(0xA26E4E0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET UNITYSDK_OFFSET(0xA26E570)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET UNITYSDK_OFFSET(0xA26E600)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET UNITYSDK_OFFSET(0xA26E6A0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET UNITYSDK_OFFSET(0xA26E730)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET UNITYSDK_OFFSET(0xA26E7C0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET UNITYSDK_OFFSET(0xA26E850)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET UNITYSDK_OFFSET(0xA26E8E0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INITNOBAKE_OFFSET UNITYSDK_OFFSET(0xA26E980)

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int LightDataGI_TypeDefinitionIndex = 31638;

	class LightDataGI : public Il2CppObject
	{
	public:
		::System::Int32 instanceID; // 0x10
		::System::Int32 cookieID; // 0x14
		::System::Single cookieScale; // 0x18
		::UnityEngine::Experimental::GlobalIllumination::LinearColor* color; // 0x1C
		::UnityEngine::Experimental::GlobalIllumination::LinearColor* indirectColor; // 0x2C
		::UnityEngine::Quaternion* orientation; // 0x3C
		::UnityEngine::Vector3* position; // 0x4C
		::System::Single range; // 0x58
		::System::Single coneAngle; // 0x5C
		::System::Single innerConeAngle; // 0x60
		::System::Single shape0; // 0x64
		::System::Single shape1; // 0x68
		::UnityEngine::Experimental::GlobalIllumination::LightType* type; // 0x6C
		::UnityEngine::Experimental::GlobalIllumination::LightMode* mode; // 0x6D
		::System::Byte shadow; // 0x6E
		::UnityEngine::Experimental::GlobalIllumination::FalloffType* falloff; // 0x6F

		::System::Void Init(::UnityEngine::Experimental::GlobalIllumination::DirectionalLight&* arg, ::UnityEngine::Experimental::GlobalIllumination::Cookie&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::GlobalIllumination::DirectionalLight&*, ::UnityEngine::Experimental::GlobalIllumination::Cookie&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::UnityEngine::Experimental::GlobalIllumination::PointLight&* arg, ::UnityEngine::Experimental::GlobalIllumination::Cookie&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::GlobalIllumination::PointLight&*, ::UnityEngine::Experimental::GlobalIllumination::Cookie&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::UnityEngine::Experimental::GlobalIllumination::SpotLight&* arg, ::UnityEngine::Experimental::GlobalIllumination::Cookie&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::GlobalIllumination::SpotLight&*, ::UnityEngine::Experimental::GlobalIllumination::Cookie&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::UnityEngine::Experimental::GlobalIllumination::RectangleLight&* arg, ::UnityEngine::Experimental::GlobalIllumination::Cookie&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::GlobalIllumination::RectangleLight&*, ::UnityEngine::Experimental::GlobalIllumination::Cookie&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::UnityEngine::Experimental::GlobalIllumination::DiscLight&* arg, ::UnityEngine::Experimental::GlobalIllumination::Cookie&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::GlobalIllumination::DiscLight&*, ::UnityEngine::Experimental::GlobalIllumination::Cookie&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Init(::UnityEngine::Experimental::GlobalIllumination::DirectionalLight&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::GlobalIllumination::DirectionalLight&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::UnityEngine::Experimental::GlobalIllumination::PointLight&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::GlobalIllumination::PointLight&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::UnityEngine::Experimental::GlobalIllumination::SpotLight&* arg)
		{
			((::System::Void(*)(::UnityEngine::Experimental::GlobalIllumination::SpotLight&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void InitNoBake(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INITNOBAKE_OFFSET))(arg, nullptr);
		}

	};
}

