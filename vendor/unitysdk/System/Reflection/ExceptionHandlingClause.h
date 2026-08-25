#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_EXCEPTIONHANDLINGCLAUSE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9248D30)
#define SYSTEM_REFLECTION_EXCEPTIONHANDLINGCLAUSE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9248D40)

namespace System::Reflection
{
	inline static constexpr unsigned int ExceptionHandlingClause_TypeDefinitionIndex = 24907;

	class ExceptionHandlingClause : public Il2CppObject
	{
	public:
		::System::Type* catch_type; // 0x10
		::System::Int32 filter_offset; // 0x18
		::System::Reflection::ExceptionHandlingClauseOptions* flags; // 0x1C
		::System::Int32 try_offset; // 0x20
		::System::Int32 try_length; // 0x24
		::System::Int32 handler_offset; // 0x28
		::System::Int32 handler_length; // 0x2C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EXCEPTIONHANDLINGCLAUSE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EXCEPTIONHANDLINGCLAUSE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

