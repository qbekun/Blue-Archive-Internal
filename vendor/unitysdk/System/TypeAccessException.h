#pragma once
#include "../unitysdk.h"

#define SYSTEM_TYPEACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x937FFA0)
#define SYSTEM_TYPEACCESSEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x937FFF0)

namespace System
{
	inline static constexpr unsigned int TypeAccessException_TypeDefinitionIndex = 23858;

	class TypeAccessException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEACCESSEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEACCESSEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

