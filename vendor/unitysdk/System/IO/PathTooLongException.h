#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_PATHTOOLONGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F2490)
#define SYSTEM_IO_PATHTOOLONGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F24E0)
#define SYSTEM_IO_PATHTOOLONGEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92F2500)

namespace System::IO
{
	inline static constexpr unsigned int PathTooLongException_TypeDefinitionIndex = 25234;

	class PathTooLongException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHTOOLONGEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHTOOLONGEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_PATHTOOLONGEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

