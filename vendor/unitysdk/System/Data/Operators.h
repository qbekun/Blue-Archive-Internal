#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_OPERATORS_ISARITHMETICAL_OFFSET UNITYSDK_OFFSET(0x9762240)
#define SYSTEM_DATA_OPERATORS_ISLOGICAL_OFFSET UNITYSDK_OFFSET(0x9762260)
#define SYSTEM_DATA_OPERATORS_ISRELATIONAL_OFFSET UNITYSDK_OFFSET(0x9762280)
#define SYSTEM_DATA_OPERATORS_PRIORITY_OFFSET UNITYSDK_OFFSET(0x9762290)
#define SYSTEM_DATA_OPERATORS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x975F670)
#define SYSTEM_DATA_OPERATORS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9762350)

namespace System::Data
{
	inline static constexpr unsigned int Operators_TypeDefinitionIndex = 32265;

	class Operators : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_priority; // 0x0
		::Il2CppArray<::System::Object*>* s_looks; // 0x8

		::System::Boolean IsArithmetical(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORS_ISARITHMETICAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLogical(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORS_ISLOGICAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsRelational(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORS_ISRELATIONAL_OFFSET))(arg, nullptr);
		}

		::System::Int32 Priority(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORS_PRIORITY_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORS_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_OPERATORS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

