#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_DIRECTORYNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92ED7F0)
#define SYSTEM_IO_DIRECTORYNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92ED840)
#define SYSTEM_IO_DIRECTORYNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92ED860)

namespace System::IO
{
	inline static constexpr unsigned int DirectoryNotFoundException_TypeDefinitionIndex = 25222;

	class DirectoryNotFoundException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYNOTFOUNDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYNOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DIRECTORYNOTFOUNDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

