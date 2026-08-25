#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALDIRECTIVEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9221E40)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALDIRECTIVEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9221E90)
#define SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALDIRECTIVEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9221EB0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int MarshalDirectiveException_TypeDefinitionIndex = 24680;

	class MarshalDirectiveException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALDIRECTIVEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALDIRECTIVEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_MARSHALDIRECTIVEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

