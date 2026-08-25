#pragma once
#include "../unitysdk.h"

#define SYSTEM_OPERATIONCANCELEDEXCEPTION_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x936E720)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION_SET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x936E730)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936E750)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936E850)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936E8B0)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936E970)
#define SYSTEM_OPERATIONCANCELEDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x936E9F0)

namespace System
{
	inline static constexpr unsigned int OperationCanceledException_TypeDefinitionIndex = 23814;

	class OperationCanceledException : public Il2CppObject
	{
	public:
		::System::Threading::CancellationToken* _cancellationToken; // 0x90

		::System::Threading::CancellationToken* get_CancellationToken()
		{
			return (return (::System::Threading::CancellationToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION_GET_CANCELLATIONTOKEN_OFFSET))(nullptr);
		}

		::System::Void set_CancellationToken(::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION_SET_CANCELLATIONTOKEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_OPERATIONCANCELEDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

