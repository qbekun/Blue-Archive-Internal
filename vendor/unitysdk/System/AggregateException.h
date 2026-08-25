#pragma once
#include "../unitysdk.h"

#define SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9276610)
#define SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9276750)
#define SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9276860)
#define SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92767A0)
#define SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92768B0)
#define SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92768C0)
#define SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9276CE0)
#define SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9276D30)
#define SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9276DF0)
#define SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9277290)
#define SYSTEM_AGGREGATEEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9277480)
#define SYSTEM_AGGREGATEEXCEPTION_GET_INNEREXCEPTIONS_OFFSET UNITYSDK_OFFSET(0x92775B0)
#define SYSTEM_AGGREGATEEXCEPTION_HANDLE_OFFSET UNITYSDK_OFFSET(0x92775C0)
#define SYSTEM_AGGREGATEEXCEPTION_FLATTEN_OFFSET UNITYSDK_OFFSET(0x9277800)
#define SYSTEM_AGGREGATEEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9277BC0)
#define SYSTEM_AGGREGATEEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9277D40)

namespace System
{
	inline static constexpr unsigned int AggregateException_TypeDefinitionIndex = 23700;

	class AggregateException : public Il2CppObject
	{
	public:
		Il2CppObject* m_innerExceptions; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_InnerExceptions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_GET_INNEREXCEPTIONS_OFFSET))(nullptr);
		}

		::System::Void Handle(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_HANDLE_OFFSET))(arg, nullptr);
		}

		::System::AggregateException* Flatten()
		{
			return (return (::System::AggregateException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_FLATTEN_OFFSET))(nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_AGGREGATEEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

