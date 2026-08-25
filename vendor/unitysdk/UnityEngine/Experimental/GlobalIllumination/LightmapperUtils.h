#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Experimental::GlobalIllumination { class LightMode; }
namespace UnityEngine { class LightmapBakeType; }
namespace UnityEngine::Experimental::GlobalIllumination { class LinearColor; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Color; }
namespace UnityEngine::Experimental::GlobalIllumination { class LinearColor&; }
namespace UnityEngine::Experimental::GlobalIllumination { class DirectionalLight&; }
namespace UnityEngine::Experimental::GlobalIllumination { class PointLight&; }
namespace UnityEngine::Experimental::GlobalIllumination { class SpotLight&; }
namespace UnityEngine::Experimental::GlobalIllumination { class RectangleLight&; }
namespace UnityEngine::Experimental::GlobalIllumination { class DiscLight&; }
namespace UnityEngine::Experimental::GlobalIllumination { class Cookie&; }

#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET UNITYSDK_OFFSET(0xA26E990)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACTINDIRECT_OFFSET UNITYSDK_OFFSET(0xA26E9B0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACTINNERCONE_OFFSET UNITYSDK_OFFSET(0xA26EA30)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACTCOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0xA26EA80)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_APPLYCOLORTEMPERATURE_OFFSET UNITYSDK_OFFSET(0xA26EAF0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET UNITYSDK_OFFSET(0xA26EB40)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET UNITYSDK_OFFSET(0xA26EE00)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET UNITYSDK_OFFSET(0xA26F0D0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET UNITYSDK_OFFSET(0xA26F3F0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET UNITYSDK_OFFSET(0xA26F6C0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET UNITYSDK_OFFSET(0xA26F990)

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int LightmapperUtils_TypeDefinitionIndex = 31639;

	class LightmapperUtils : public Il2CppObject
	{
	public:
		::UnityEngine::Experimental::GlobalIllumination::LightMode* Extract(::UnityEngine::LightmapBakeType* arg)
		{
			return (return (::UnityEngine::Experimental::GlobalIllumination::LightMode*(*)(::UnityEngine::LightmapBakeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Experimental::GlobalIllumination::LinearColor* ExtractIndirect(::UnityEngine::Light* arg)
		{
			return (return (::UnityEngine::Experimental::GlobalIllumination::LinearColor*(*)(::UnityEngine::Light*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACTINDIRECT_OFFSET))(arg, nullptr);
		}

		::System::Single ExtractInnerCone(::UnityEngine::Light* arg)
		{
			return (return (::System::Single(*)(::UnityEngine::Light*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACTINNERCONE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Color* ExtractColorTemperature(::UnityEngine::Light* arg)
		{
			return (return (::UnityEngine::Color*(*)(::UnityEngine::Light*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACTCOLORTEMPERATURE_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyColorTemperature(::UnityEngine::Color* arg, ::UnityEngine::Experimental::GlobalIllumination::LinearColor&* arg)
		{
			((::System::Void(*)(::UnityEngine::Color*, ::UnityEngine::Experimental::GlobalIllumination::LinearColor&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_APPLYCOLORTEMPERATURE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Extract(::UnityEngine::Light* arg, ::UnityEngine::Experimental::GlobalIllumination::DirectionalLight&* arg)
		{
			((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Experimental::GlobalIllumination::DirectionalLight&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Extract(::UnityEngine::Light* arg, ::UnityEngine::Experimental::GlobalIllumination::PointLight&* arg)
		{
			((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Experimental::GlobalIllumination::PointLight&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Extract(::UnityEngine::Light* arg, ::UnityEngine::Experimental::GlobalIllumination::SpotLight&* arg)
		{
			((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Experimental::GlobalIllumination::SpotLight&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Extract(::UnityEngine::Light* arg, ::UnityEngine::Experimental::GlobalIllumination::RectangleLight&* arg)
		{
			((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Experimental::GlobalIllumination::RectangleLight&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Extract(::UnityEngine::Light* arg, ::UnityEngine::Experimental::GlobalIllumination::DiscLight&* arg)
		{
			((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Experimental::GlobalIllumination::DiscLight&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Extract(::UnityEngine::Light* arg, ::UnityEngine::Experimental::GlobalIllumination::Cookie&* arg)
		{
			((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::Experimental::GlobalIllumination::Cookie&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTMAPPERUTILS_EXTRACT_OFFSET))(arg, arg, nullptr);
		}

	};
}

