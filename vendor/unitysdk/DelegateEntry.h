#pragma once
#include "unitysdk.h"

#define DELEGATEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B8150)
#define DELEGATEENTRY_DESERIALIZEDELEGATE_OFFSET UNITYSDK_OFFSET(0x93B7F00)

	inline static constexpr unsigned int DelegateEntry_TypeDefinitionIndex = 23963;

	class DelegateEntry : public Il2CppObject
	{
	public:
		::System::String* type; // 0x10
		::System::String* assembly; // 0x18
		::System::Object* target; // 0x20
		::System::String* targetTypeAssembly; // 0x28
		::System::String* targetTypeName; // 0x30
		::System::String* methodName; // 0x38
		DelegateEntry* delegateEntry; // 0x40

		::System::Void .ctor(::System::Delegate* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Delegate*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATEENTRY_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Delegate* DeserializeDelegate(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Int32 arg)
		{
			return (return (::System::Delegate*(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DELEGATEENTRY_DESERIALIZEDELEGATE_OFFSET))(arg, arg, nullptr);
		}

	};

