#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9221B80)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9221BD0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9221BF0)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9221C10)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9221C30)
#define SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9221C50)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int ExternalException_TypeDefinitionIndex = 24678;

	class ExternalException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_EXTERNALEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

