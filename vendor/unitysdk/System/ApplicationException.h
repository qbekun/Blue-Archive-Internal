#pragma once
#include "../unitysdk.h"

#define SYSTEM_APPLICATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9277F30)
#define SYSTEM_APPLICATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9277FA0)
#define SYSTEM_APPLICATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278000)
#define SYSTEM_APPLICATIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9278070)

namespace System
{
	inline static constexpr unsigned int ApplicationException_TypeDefinitionIndex = 23701;

	class ApplicationException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPLICATIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPLICATIONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPLICATIONEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPLICATIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

