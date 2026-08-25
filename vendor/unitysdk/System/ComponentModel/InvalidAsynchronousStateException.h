#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_INVALIDASYNCHRONOUSSTATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B32CD0)
#define SYSTEM_COMPONENTMODEL_INVALIDASYNCHRONOUSSTATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B32CE0)
#define SYSTEM_COMPONENTMODEL_INVALIDASYNCHRONOUSSTATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B32CF0)
#define SYSTEM_COMPONENTMODEL_INVALIDASYNCHRONOUSSTATEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B32D00)

namespace System::ComponentModel
{
	inline static constexpr unsigned int InvalidAsynchronousStateException_TypeDefinitionIndex = 29416;

	class InvalidAsynchronousStateException : public <>c__DisplayClass0_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDASYNCHRONOUSSTATEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDASYNCHRONOUSSTATEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDASYNCHRONOUSSTATEEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDASYNCHRONOUSSTATEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

