#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A907B0)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A90810)
#define SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A90820)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int NetworkInformationException_TypeDefinitionIndex = 29839;

	class NetworkInformationException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_NETWORKINFORMATIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

