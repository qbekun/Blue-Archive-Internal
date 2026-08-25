#pragma once
#include "unitysdk.h"

class PlatformService;
class Platform;

#define PLATFORMSERVICEMANAGER_SET_CURRENTPLATFORMSERVICE_OFFSET UNITYSDK_OFFSET(0xC723F0)
#define PLATFORMSERVICEMANAGER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xC72400)
#define PLATFORMSERVICEMANAGER_ISGOOGLEPLAYGAMESPC_OFFSET UNITYSDK_OFFSET(0xC72480)
#define PLATFORMSERVICEMANAGER_GET_CURRENTPLATFORMSERVICE_OFFSET UNITYSDK_OFFSET(0xC72490)
#define PLATFORMSERVICEMANAGER_ISGPGEMULATOR_OFFSET UNITYSDK_OFFSET(0xC724A0)
#define PLATFORMSERVICEMANAGER_INITIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xC72570)
#define PLATFORMSERVICEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC72690)
#define PLATFORMSERVICEMANAGER_RELEASEPERSISTENT_OFFSET UNITYSDK_OFFSET(0xC726F0)
#define PLATFORMSERVICEMANAGER_GETCURRENTPLATFORM_OFFSET UNITYSDK_OFFSET(0xC72740)
#define PLATFORMSERVICEMANAGER_INITIALIZEPERSISTENT_OFFSET UNITYSDK_OFFSET(0xC727D0)

	inline static constexpr unsigned int PlatformServiceManager_TypeDefinitionIndex = 9005;

	class PlatformServiceManager : public ::ToyWebViewShared::Messages::RequestCreate
	{
	public:
		PlatformService* _CurrentPlatformService_k__BackingField; // 0x20

		::System::Void set_CurrentPlatformService(PlatformService* arg)
		{
			((::System::Void(*)(PlatformService*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEMANAGER_SET_CURRENTPLATFORMSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEMANAGER_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsGooglePlayGamesPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEMANAGER_ISGOOGLEPLAYGAMESPC_OFFSET))(nullptr);
		}

		PlatformService* get_CurrentPlatformService()
		{
			return ((PlatformService*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEMANAGER_GET_CURRENTPLATFORMSERVICE_OFFSET))(nullptr);
		}

		::System::Boolean IsGPGEmulator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEMANAGER_ISGPGEMULATOR_OFFSET))(nullptr);
		}

		::System::Void InitializeAsync(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEMANAGER_INITIALIZEASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void ReleasePersistent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEMANAGER_RELEASEPERSISTENT_OFFSET))(nullptr);
		}

		Platform* GetCurrentPlatform()
		{
			return ((Platform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEMANAGER_GETCURRENTPLATFORM_OFFSET))(nullptr);
		}

		::System::Void InitializePersistent()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLATFORMSERVICEMANAGER_INITIALIZEPERSISTENT_OFFSET))(nullptr);
		}

	};

