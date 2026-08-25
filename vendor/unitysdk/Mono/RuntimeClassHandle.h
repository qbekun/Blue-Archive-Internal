#pragma once
#include "../unitysdk.h"

#define MONO_RUNTIMECLASSHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9120D80)
#define MONO_RUNTIMECLASSHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9120D90)
#define MONO_RUNTIMECLASSHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9120DB0)
#define MONO_RUNTIMECLASSHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9120DC0)
#define MONO_RUNTIMECLASSHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9120EB0)
#define MONO_RUNTIMECLASSHANDLE_GETTYPEFROMCLASS_OFFSET UNITYSDK_OFFSET(0x9120EE0)
#define MONO_RUNTIMECLASSHANDLE_GETTYPEHANDLE_OFFSET UNITYSDK_OFFSET(0x9120EF0)

namespace Mono
{
	inline static constexpr unsigned int RuntimeClassHandle_TypeDefinitionIndex = 23570;

	class RuntimeClassHandle : public Il2CppObject
	{
	public:
		::System::Object** value; // 0x10

		::System::Void .ctor(::System::Object** arg)
		{
			((::System::Void(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object** get_Value()
		{
			return (return (::System::Object**(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Int32 GetTypeFromClass(::System::Object** arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GETTYPEFROMCLASS_OFFSET))(arg, nullptr);
		}

		::System::RuntimeTypeHandle* GetTypeHandle()
		{
			return (return (::System::RuntimeTypeHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMECLASSHANDLE_GETTYPEHANDLE_OFFSET))(nullptr);
		}

	};
}

