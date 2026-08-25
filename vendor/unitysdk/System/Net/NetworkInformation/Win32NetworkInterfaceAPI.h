#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACEAPI_GETADAPTERSADDRESSES_OFFSET UNITYSDK_OFFSET(0x9A91A00)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACEAPI_GETADAPTERSADDRESSES_OFFSET UNITYSDK_OFFSET(0x9A91AB0)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET UNITYSDK_OFFSET(0x9A91F80)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACEAPI_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A92500)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32NetworkInterfaceAPI_TypeDefinitionIndex = 29857;

	class Win32NetworkInterfaceAPI : public Il2CppObject
	{
	public:
		::System::Int32 GetAdaptersAddresses(::System::UInt32 arg, ::System::UInt32 arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACEAPI_GETADAPTERSADDRESSES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAdaptersAddresses()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACEAPI_GETADAPTERSADDRESSES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetAllNetworkInterfaces()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACEAPI_GETALLNETWORKINTERFACES_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACEAPI_.CTOR_OFFSET))(nullptr);
		}

	};
}

