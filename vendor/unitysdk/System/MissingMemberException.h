#pragma once
#include "../unitysdk.h"

#define SYSTEM_MISSINGMEMBEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9387AD0)
#define SYSTEM_MISSINGMEMBEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9387A10)
#define SYSTEM_MISSINGMEMBEREXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9387B40)
#define SYSTEM_MISSINGMEMBEREXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9387FA0)
#define SYSTEM_MISSINGMEMBEREXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9387E60)
#define SYSTEM_MISSINGMEMBEREXCEPTION_FORMATSIGNATURE_OFFSET UNITYSDK_OFFSET(0x9388240)

namespace System
{
	inline static constexpr unsigned int MissingMemberException_TypeDefinitionIndex = 23897;

	class MissingMemberException : public Il2CppObject
	{
	public:
		::System::String* ClassName; // 0x90
		::System::String* MemberName; // 0x98
		::Il2CppArray<::System::Object*>* Signature; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::String* FormatSignature(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_FORMATSIGNATURE_OFFSET))(arg, nullptr);
		}

	};
}

