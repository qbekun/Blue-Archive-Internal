#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222920)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9222970)
#define SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9222990)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int COMException_TypeDefinitionIndex = 24687;

	class COMException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

