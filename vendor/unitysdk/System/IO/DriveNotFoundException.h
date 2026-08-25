#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_DRIVENOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9303B30)
#define SYSTEM_IO_DRIVENOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9303B80)
#define SYSTEM_IO_DRIVENOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9303BA0)

namespace System::IO
{
	inline static constexpr unsigned int DriveNotFoundException_TypeDefinitionIndex = 25257;

	class DriveNotFoundException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DRIVENOTFOUNDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DRIVENOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_DRIVENOTFOUNDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

