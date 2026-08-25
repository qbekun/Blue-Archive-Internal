#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETSERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x9244350)
#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETSERIALIZATIONINFO_OFFSET UNITYSDK_OFFSET(0x9244380)
#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9244680)
#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9244A10)
#define SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x9244A80)

namespace System::Reflection
{
	inline static constexpr unsigned int MemberInfoSerializationHolder_TypeDefinitionIndex = 24901;

	class MemberInfoSerializationHolder : public Il2CppObject
	{
	public:
		::System::String* m_memberName; // 0x10
		::System::RuntimeType* m_reflectedType; // 0x18
		::System::String* m_signature; // 0x20
		::System::String* m_signature2; // 0x28
		::System::Reflection::MemberTypes* m_memberType; // 0x30
		::System::Runtime::Serialization::SerializationInfo* m_info; // 0x38

		::System::Void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* arg, ::System::String* str, ::System::RuntimeType* arg, ::System::String* str, ::System::Reflection::MemberTypes* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::String*, ::System::RuntimeType*, ::System::String*, ::System::Reflection::MemberTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETSERIALIZATIONINFO_OFFSET))(arg, str, arg, str, arg, nullptr);
		}

		::System::Void GetSerializationInfo(::System::Runtime::Serialization::SerializationInfo* arg, ::System::String* str, ::System::RuntimeType* arg, ::System::String* str, ::System::String* str, ::System::Reflection::MemberTypes* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::String*, ::System::RuntimeType*, ::System::String*, ::System::String*, ::System::Reflection::MemberTypes*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETSERIALIZATIONINFO_OFFSET))(arg, str, arg, str, str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MEMBERINFOSERIALIZATIONHOLDER_GETREALOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

