#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x91E5B20)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x91E5BE0)
#define SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x91E5BF0)

namespace System::Runtime::Remoting::Channels
{
	inline static constexpr unsigned int SinkProviderData_TypeDefinitionIndex = 24503;

	class SinkProviderData : public Il2CppObject
	{
	public:
		::System::String* sinkName; // 0x10
		::System::Collections::ArrayList* children; // 0x18
		::System::Collections::Hashtable* properties; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Collections::IList* get_Children()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA_GET_CHILDREN_OFFSET))(nullptr);
		}

		::System::Collections::IDictionary* get_Properties()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_CHANNELS_SINKPROVIDERDATA_GET_PROPERTIES_OFFSET))(nullptr);
		}

	};
}

