#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LightmapsMode; }
namespace UnityEngine { class LightProbes; }
namespace UnityEngine { class LightmapsModeLegacy; }
namespace UnityEngine { class ColorSpace; }

#define UNITYENGINE_LIGHTMAPSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F46E0)
#define UNITYENGINE_LIGHTMAPSETTINGS_GET_LIGHTMAPS_OFFSET UNITYSDK_OFFSET(0xA1F4730)
#define UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTMAPS_OFFSET UNITYSDK_OFFSET(0xA1F4770)
#define UNITYENGINE_LIGHTMAPSETTINGS_GET_LIGHTMAPSMODE_OFFSET UNITYSDK_OFFSET(0xA1F47B0)
#define UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTMAPSMODE_OFFSET UNITYSDK_OFFSET(0xA1F47F0)
#define UNITYENGINE_LIGHTMAPSETTINGS_GET_LIGHTPROBES_OFFSET UNITYSDK_OFFSET(0xA1F4830)
#define UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTPROBES_OFFSET UNITYSDK_OFFSET(0xA1F4870)
#define UNITYENGINE_LIGHTMAPSETTINGS_RESET_OFFSET UNITYSDK_OFFSET(0xA1F48B0)
#define UNITYENGINE_LIGHTMAPSETTINGS_GET_LIGHTMAPSMODELEGACY_OFFSET UNITYSDK_OFFSET(0xA1F48F0)
#define UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTMAPSMODELEGACY_OFFSET UNITYSDK_OFFSET(0xA1F4900)
#define UNITYENGINE_LIGHTMAPSETTINGS_GET_BAKEDCOLORSPACE_OFFSET UNITYSDK_OFFSET(0xA1F4910)
#define UNITYENGINE_LIGHTMAPSETTINGS_SET_BAKEDCOLORSPACE_OFFSET UNITYSDK_OFFSET(0xA1F4990)

namespace UnityEngine
{
	inline static constexpr unsigned int LightmapSettings_TypeDefinitionIndex = 31000;

	class LightmapSettings : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_lightmaps()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_GET_LIGHTMAPS_OFFSET))(nullptr);
		}

		::System::Void set_lightmaps(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTMAPS_OFFSET))(arg, nullptr);
		}

		::UnityEngine::LightmapsMode* get_lightmapsMode()
		{
			return (return (::UnityEngine::LightmapsMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_GET_LIGHTMAPSMODE_OFFSET))(nullptr);
		}

		::System::Void set_lightmapsMode(::UnityEngine::LightmapsMode* arg)
		{
			((::System::Void(*)(::UnityEngine::LightmapsMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTMAPSMODE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::LightProbes* get_lightProbes()
		{
			return (return (::UnityEngine::LightProbes*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_GET_LIGHTPROBES_OFFSET))(nullptr);
		}

		::System::Void set_lightProbes(::UnityEngine::LightProbes* arg)
		{
			((::System::Void(*)(::UnityEngine::LightProbes*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTPROBES_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_RESET_OFFSET))(nullptr);
		}

		::UnityEngine::LightmapsModeLegacy* get_lightmapsModeLegacy()
		{
			return (return (::UnityEngine::LightmapsModeLegacy*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_GET_LIGHTMAPSMODELEGACY_OFFSET))(nullptr);
		}

		::System::Void set_lightmapsModeLegacy(::UnityEngine::LightmapsModeLegacy* arg)
		{
			((::System::Void(*)(::UnityEngine::LightmapsModeLegacy*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_SET_LIGHTMAPSMODELEGACY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::ColorSpace* get_bakedColorSpace()
		{
			return (return (::UnityEngine::ColorSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_GET_BAKEDCOLORSPACE_OFFSET))(nullptr);
		}

		::System::Void set_bakedColorSpace(::UnityEngine::ColorSpace* arg)
		{
			((::System::Void(*)(::UnityEngine::ColorSpace*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTMAPSETTINGS_SET_BAKEDCOLORSPACE_OFFSET))(arg, nullptr);
		}

	};
}

