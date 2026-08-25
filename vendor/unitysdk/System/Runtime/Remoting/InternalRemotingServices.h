#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES_GETCACHEDSOAPATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x91C3370)
#define SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES_.CCTOR_OFFSET UNITYSDK_OFFSET(0x91C3930)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int InternalRemotingServices_TypeDefinitionIndex = 24437;

	class InternalRemotingServices : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* _soapAttributes; // 0x0

		::System::Runtime::Remoting::Metadata::SoapAttribute* GetCachedSoapAttribute(::System::Object* arg)
		{
			return (return (::System::Runtime::Remoting::Metadata::SoapAttribute*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES_GETCACHEDSOAPATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_INTERNALREMOTINGSERVICES_.CCTOR_OFFSET))(nullptr);
		}

	};
}

