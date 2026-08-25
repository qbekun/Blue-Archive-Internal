#pragma once
#include "../unitysdk.h"

#define SYSTEM_VALUETYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93CADE0)
#define SYSTEM_VALUETYPE_INTERNALEQUALS_OFFSET UNITYSDK_OFFSET(0x93CADF0)
#define SYSTEM_VALUETYPE_DEFAULTEQUALS_OFFSET UNITYSDK_OFFSET(0x93CAE00)
#define SYSTEM_VALUETYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x93CAFF0)
#define SYSTEM_VALUETYPE_INTERNALGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93CB000)
#define SYSTEM_VALUETYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93CB010)
#define SYSTEM_VALUETYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x93CB090)

namespace System
{
	inline static constexpr unsigned int ValueType_TypeDefinitionIndex = 24011;

	class ValueType : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean InternalEquals(::System::Object* arg, ::System::Object* arg, ::System::Object[]&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_INTERNALEQUALS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean DefaultEquals(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_DEFAULTEQUALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 InternalGetHashCode(::System::Object* arg, ::System::Object[]&* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_INTERNALGETHASHCODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_VALUETYPE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

