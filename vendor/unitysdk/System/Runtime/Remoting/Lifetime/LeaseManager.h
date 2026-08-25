#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_SETPOLLTIME_OFFSET UNITYSDK_OFFSET(0x91DB4F0)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_TRACKLIFETIME_OFFSET UNITYSDK_OFFSET(0x91DB620)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_STARTMANAGER_OFFSET UNITYSDK_OFFSET(0x91DB780)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_STOPMANAGER_OFFSET UNITYSDK_OFFSET(0x91DB950)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_MANAGELEASES_OFFSET UNITYSDK_OFFSET(0x91DB990)
#define SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91DBC30)

namespace System::Runtime::Remoting::Lifetime
{
	inline static constexpr unsigned int LeaseManager_TypeDefinitionIndex = 24469;

	class LeaseManager : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* _objects; // 0x10
		::System::Threading::Timer* _timer; // 0x18

		::System::Void SetPollTime(::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_SETPOLLTIME_OFFSET))(arg, nullptr);
		}

		::System::Void TrackLifetime(::System::Runtime::Remoting::ServerIdentity* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::ServerIdentity*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_TRACKLIFETIME_OFFSET))(arg, nullptr);
		}

		::System::Void StartManager()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_STARTMANAGER_OFFSET))(nullptr);
		}

		::System::Void StopManager()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_STOPMANAGER_OFFSET))(nullptr);
		}

		::System::Void ManageLeases(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_MANAGELEASES_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_LIFETIME_LEASEMANAGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

