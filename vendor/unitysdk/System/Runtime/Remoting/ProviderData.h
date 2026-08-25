#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_REMOTING_PROVIDERDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x91C7AE0)
#define SYSTEM_RUNTIME_REMOTING_PROVIDERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x91CC4A0)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int ProviderData_TypeDefinitionIndex = 24442;

	class ProviderData : public Il2CppObject
	{
	public:
		::System::String* Ref; // 0x10
		::System::String* Type; // 0x18
		::System::String* Id; // 0x20
		::System::Collections::Hashtable* CustomProperties; // 0x28
		::System::Collections::IList* CustomData; // 0x30

		::System::Void CopyFrom(::System::Runtime::Remoting::ProviderData* arg)
		{
			((::System::Void(*)(::System::Runtime::Remoting::ProviderData*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROVIDERDATA_COPYFROM_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_PROVIDERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

