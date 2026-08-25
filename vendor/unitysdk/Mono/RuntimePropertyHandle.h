#pragma once
#include "../unitysdk.h"

#define MONO_RUNTIMEPROPERTYHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91212A0)
#define MONO_RUNTIMEPROPERTYHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x91212B0)
#define MONO_RUNTIMEPROPERTYHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x91212C0)
#define MONO_RUNTIMEPROPERTYHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x91213C0)

namespace Mono
{
	inline static constexpr unsigned int RuntimePropertyHandle_TypeDefinitionIndex = 23574;

	class RuntimePropertyHandle : public Il2CppObject
	{
	public:
		::System::Int32 value; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEPROPERTYHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEPROPERTYHANDLE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEPROPERTYHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEPROPERTYHANDLE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

