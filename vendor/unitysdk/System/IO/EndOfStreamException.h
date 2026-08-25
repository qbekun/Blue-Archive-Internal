#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_ENDOFSTREAMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92ED8A0)
#define SYSTEM_IO_ENDOFSTREAMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92ED8F0)
#define SYSTEM_IO_ENDOFSTREAMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92ED910)

namespace System::IO
{
	inline static constexpr unsigned int EndOfStreamException_TypeDefinitionIndex = 25223;

	class EndOfStreamException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENDOFSTREAMEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENDOFSTREAMEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_ENDOFSTREAMEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

