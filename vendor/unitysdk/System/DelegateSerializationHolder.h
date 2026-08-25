#pragma once
#include "../unitysdk.h"

#define SYSTEM_DELEGATESERIALIZATIONHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B7CB0)
#define SYSTEM_DELEGATESERIALIZATIONHOLDER_GETDELEGATEDATA_OFFSET UNITYSDK_OFFSET(0x93B7830)
#define SYSTEM_DELEGATESERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x93B8320)
#define SYSTEM_DELEGATESERIALIZATIONHOLDER_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x93B8370)

namespace System
{
	inline static constexpr unsigned int DelegateSerializationHolder_TypeDefinitionIndex = 23964;

	class DelegateSerializationHolder : public Il2CppObject
	{
	public:
		::System::Delegate* _delegate; // 0x10

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetDelegateData(::System::Delegate* arg, ::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Delegate*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_GETDELEGATEDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext* arg)
		{
			return (return (::System::Object*(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DELEGATESERIALIZATIONHOLDER_GETREALOBJECT_OFFSET))(arg, nullptr);
		}

	};
}

