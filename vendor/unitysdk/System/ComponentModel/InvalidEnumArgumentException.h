#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B20990)
#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B209A0)
#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B209B0)
#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B209C0)
#define SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B20A90)

namespace System::ComponentModel
{
	inline static constexpr unsigned int InvalidEnumArgumentException_TypeDefinitionIndex = 29337;

	class InvalidEnumArgumentException : public <>c__DisplayClass0_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INVALIDENUMARGUMENTEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

