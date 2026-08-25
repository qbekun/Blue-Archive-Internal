#pragma once
#include "../../unitysdk.h"

#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x917B5E0)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x917B5F0)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x917B600)
#define SYSTEM_SECURITY_XMLSYNTAXEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x917B610)

namespace System::Security
{
	inline static constexpr unsigned int XmlSyntaxException_TypeDefinitionIndex = 24273;

	class XmlSyntaxException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_XMLSYNTAXEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

