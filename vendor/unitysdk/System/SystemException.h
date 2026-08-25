#pragma once
#include "../unitysdk.h"

#define SYSTEM_SYSTEMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9379350)
#define SYSTEM_SYSTEMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936E7F0)
#define SYSTEM_SYSTEMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x93793C0)
#define SYSTEM_SYSTEMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936EA60)

namespace System
{
	inline static constexpr unsigned int SystemException_TypeDefinitionIndex = 23840;

	class SystemException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SYSTEMEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SYSTEMEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SYSTEMEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SYSTEMEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

