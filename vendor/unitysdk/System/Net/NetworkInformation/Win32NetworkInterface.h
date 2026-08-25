#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_GETNETWORKPARAMS_OFFSET UNITYSDK_OFFSET(0x9A92690)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_MULTIBYTETOWIDECHAR_OFFSET UNITYSDK_OFFSET(0x9A92720)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_GET_FIXEDINFO_OFFSET UNITYSDK_OFFSET(0x9A91120)
#define SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE__GET_FIXEDINFO_G__GETSTRINGFROMMULTIBYTE|5_0_OFFSET UNITYSDK_OFFSET(0x9A927E0)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int Win32NetworkInterface_TypeDefinitionIndex = 29860;

	class Win32NetworkInterface : public Il2CppObject
	{
	public:
		::System::Net::NetworkInformation::Win32_FIXED_INFO* fixedInfo; // 0x0
		::System::Boolean initialized; // 0x58

		::System::Int32 GetNetworkParams(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_GETNETWORKPARAMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 MultiByteToWideChar(::System::UInt32 arg, ::System::UInt32 arg, ::System::Object** arg, ::System::Int32 arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::UInt32, ::System::UInt32, ::System::Object**, ::System::Int32, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_MULTIBYTETOWIDECHAR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Net::NetworkInformation::Win32_FIXED_INFO* get_FixedInfo()
		{
			return (return (::System::Net::NetworkInformation::Win32_FIXED_INFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE_GET_FIXEDINFO_OFFSET))(nullptr);
		}

		::System::String* _get_FixedInfo_g__GetStringFromMultiByte|5_0(::System::Object** arg)
		{
			return (return (::System::String*(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_WIN32NETWORKINTERFACE__GET_FIXEDINFO_G__GETSTRINGFROMMULTIBYTE|5_0_OFFSET))(arg, nullptr);
		}

	};
}

