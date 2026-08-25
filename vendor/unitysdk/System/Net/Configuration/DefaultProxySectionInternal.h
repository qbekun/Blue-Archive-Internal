#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETDEFAULTPROXY_USINGOLDMONOCODE_OFFSET UNITYSDK_OFFSET(0x9A92C00)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETSYSTEMWEBPROXY_OFFSET UNITYSDK_OFFSET(0x9A92C10)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GET_CLASSSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x9A92C20)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETSECTION_OFFSET UNITYSDK_OFFSET(0x9A92CC0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GET_WEBPROXY_OFFSET UNITYSDK_OFFSET(0x9A92E10)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A92E00)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int DefaultProxySectionInternal_TypeDefinitionIndex = 29877;

	class DefaultProxySectionInternal : public Il2CppObject
	{
	public:
		::System::Net::IWebProxy* webProxy; // 0x10
		::System::Object* classSyncObject; // 0x0

		::System::Net::IWebProxy* GetDefaultProxy_UsingOldMonoCode()
		{
			return (return (::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETDEFAULTPROXY_USINGOLDMONOCODE_OFFSET))(nullptr);
		}

		::System::Net::IWebProxy* GetSystemWebProxy()
		{
			return (return (::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETSYSTEMWEBPROXY_OFFSET))(nullptr);
		}

		::System::Object* get_ClassSyncObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GET_CLASSSYNCOBJECT_OFFSET))(nullptr);
		}

		::System::Net::Configuration::DefaultProxySectionInternal* GetSection()
		{
			return (return (::System::Net::Configuration::DefaultProxySectionInternal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETSECTION_OFFSET))(nullptr);
		}

		::System::Net::IWebProxy* get_WebProxy()
		{
			return (return (::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GET_WEBPROXY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_.CTOR_OFFSET))(nullptr);
		}

	};
}

