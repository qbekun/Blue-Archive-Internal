#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_IOEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EE5D0)
#define SYSTEM_IO_IOEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92ED4D0)
#define SYSTEM_IO_IOEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EAC20)
#define SYSTEM_IO_IOEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EE620)
#define SYSTEM_IO_IOEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92ED880)

namespace System::IO
{
	inline static constexpr unsigned int IOException_TypeDefinitionIndex = 25231;

	class IOException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_IOEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

