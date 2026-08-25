#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_SWITCHEXPRESSIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B430)
#define SYSTEM_RUNTIME_COMPILERSERVICES_SWITCHEXPRESSIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B470)
#define SYSTEM_RUNTIME_COMPILERSERVICES_SWITCHEXPRESSIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x922B4D0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_SWITCHEXPRESSIONEXCEPTION_GET_UNMATCHEDVALUE_OFFSET UNITYSDK_OFFSET(0x922B5A0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_SWITCHEXPRESSIONEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x922B5B0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_SWITCHEXPRESSIONEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x922B670)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int SwitchExpressionException_TypeDefinitionIndex = 24805;

	class SwitchExpressionException : public Il2CppObject
	{
	public:
		::System::Object* _UnmatchedValue_k__BackingField; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_SWITCHEXPRESSIONEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_SWITCHEXPRESSIONEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_SWITCHEXPRESSIONEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* get_UnmatchedValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_SWITCHEXPRESSIONEXCEPTION_GET_UNMATCHEDVALUE_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_SWITCHEXPRESSIONEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_SWITCHEXPRESSIONEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

	};
}

