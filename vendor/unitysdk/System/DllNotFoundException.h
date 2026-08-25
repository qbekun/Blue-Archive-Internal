#pragma once
#include "../unitysdk.h"

#define SYSTEM_DLLNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933B3E0)
#define SYSTEM_DLLNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933B430)
#define SYSTEM_DLLNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933B450)
#define SYSTEM_DLLNOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x933B470)

namespace System
{
	inline static constexpr unsigned int DllNotFoundException_TypeDefinitionIndex = 23731;

	class DllNotFoundException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DLLNOTFOUNDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DLLNOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DLLNOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DLLNOTFOUNDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

