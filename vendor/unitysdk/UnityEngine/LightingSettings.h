#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class LightingSettings; }

#define UNITYENGINE_LIGHTINGSETTINGS_LIGHTINGSETTINGSDONTSTRIPME_OFFSET UNITYSDK_OFFSET(0xA1F0A40)
#define UNITYENGINE_LIGHTINGSETTINGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1F0A50)
#define UNITYENGINE_LIGHTINGSETTINGS_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0xA1F0AC0)
#define UNITYENGINE_LIGHTINGSETTINGS_GET_BAKEDGI_OFFSET UNITYSDK_OFFSET(0xA1F0B00)
#define UNITYENGINE_LIGHTINGSETTINGS_SET_BAKEDGI_OFFSET UNITYSDK_OFFSET(0xA1F0B40)
#define UNITYENGINE_LIGHTINGSETTINGS_GET_REALTIMEGI_OFFSET UNITYSDK_OFFSET(0xA1F0B80)
#define UNITYENGINE_LIGHTINGSETTINGS_SET_REALTIMEGI_OFFSET UNITYSDK_OFFSET(0xA1F0BC0)
#define UNITYENGINE_LIGHTINGSETTINGS_GET_REALTIMEENVIRONMENTLIGHTING_OFFSET UNITYSDK_OFFSET(0xA1F0C00)
#define UNITYENGINE_LIGHTINGSETTINGS_SET_REALTIMEENVIRONMENTLIGHTING_OFFSET UNITYSDK_OFFSET(0xA1F0C40)

namespace UnityEngine
{
	inline static constexpr unsigned int LightingSettings_TypeDefinitionIndex = 30984;

	class LightingSettings : public Il2CppObject
	{
	public:
		::System::Void LightingSettingsDontStripMe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTINGSETTINGS_LIGHTINGSETTINGSDONTSTRIPME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTINGSETTINGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Internal_Create(::UnityEngine::LightingSettings* arg)
		{
			((::System::Void(*)(::UnityEngine::LightingSettings*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTINGSETTINGS_INTERNAL_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_bakedGI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTINGSETTINGS_GET_BAKEDGI_OFFSET))(nullptr);
		}

		::System::Void set_bakedGI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTINGSETTINGS_SET_BAKEDGI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_realtimeGI()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTINGSETTINGS_GET_REALTIMEGI_OFFSET))(nullptr);
		}

		::System::Void set_realtimeGI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTINGSETTINGS_SET_REALTIMEGI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_realtimeEnvironmentLighting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTINGSETTINGS_GET_REALTIMEENVIRONMENTLIGHTING_OFFSET))(nullptr);
		}

		::System::Void set_realtimeEnvironmentLighting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTINGSETTINGS_SET_REALTIMEENVIRONMENTLIGHTING_OFFSET))(arg, nullptr);
		}

	};
}

