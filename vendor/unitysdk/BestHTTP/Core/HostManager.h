#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Core { class HostDefinition; }

#define BESTHTTP_CORE_HOSTMANAGER_LOAD_OFFSET UNITYSDK_OFFSET(0x8F0100)
#define BESTHTTP_CORE_HOSTMANAGER_GETHOST_OFFSET UNITYSDK_OFFSET(0x8EC6D0)
#define BESTHTTP_CORE_HOSTMANAGER_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x8F0CC0)
#define BESTHTTP_CORE_HOSTMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8F0F50)
#define BESTHTTP_CORE_HOSTMANAGER_TRYTOSENDQUEUEDREQUESTS_OFFSET UNITYSDK_OFFSET(0x8F1040)
#define BESTHTTP_CORE_HOSTMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x8F11E0)
#define BESTHTTP_CORE_HOSTMANAGER_SAVE_OFFSET UNITYSDK_OFFSET(0x8ED330)
#define BESTHTTP_CORE_HOSTMANAGER_SETUPFOLDER_OFFSET UNITYSDK_OFFSET(0x8F09A0)

namespace BestHTTP::Core
{
	inline static constexpr unsigned int HostManager_TypeDefinitionIndex = 23398;

	class HostManager : public Il2CppObject
	{
	public:
		::System::Int32 Version; // 0x0
		::System::String* LibraryPath; // 0x0
		::System::Boolean IsSaveAndLoadSupported; // 0x8
		::System::Boolean IsLoaded; // 0x9
		Il2CppObject* hosts; // 0x10

		::System::Void Load()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTMANAGER_LOAD_OFFSET))(nullptr);
		}

		::BestHTTP::Core::HostDefinition* GetHost(::System::String* str)
		{
			return (return (::BestHTTP::Core::HostDefinition*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTMANAGER_GETHOST_OFFSET))(str, nullptr);
		}

		::System::Void Shutdown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTMANAGER_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void TryToSendQueuedRequests()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTMANAGER_TRYTOSENDQUEUEDREQUESTS_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTMANAGER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTMANAGER_SAVE_OFFSET))(nullptr);
		}

		::System::Void SetupFolder()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_CORE_HOSTMANAGER_SETUPFOLDER_OFFSET))(nullptr);
		}

	};
}

