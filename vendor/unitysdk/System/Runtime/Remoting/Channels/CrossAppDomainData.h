#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E3F90)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA_GET_DOMAINID_OFFSET UNITYSDK_OFFSET(0x91E4030)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA_GET_PROCESSID_OFFSET UNITYSDK_OFFSET(0x91E4040)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int CrossAppDomainData_TypeDefinitionIndex = 24490;

	class CrossAppDomainData : public Il2CppObject
	{
	public:
		::System::Object* _ContextID; // 0x10
		::System::Int32 _DomainID; // 0x18
		::System::String* _processGuid; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_DomainID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA_GET_DOMAINID_OFFSET))(nullptr);
		}

		::System::String* get_ProcessID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_CROSSAPPDOMAINDATA_GET_PROCESSID_OFFSET))(nullptr);
		}

	};
}

