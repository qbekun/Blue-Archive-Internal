#pragma once
#include "../unitysdk.h"

#define MONO_RUNTIMEEVENTHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9121170)
#define MONO_RUNTIMEEVENTHANDLE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9121180)
#define MONO_RUNTIMEEVENTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9121190)
#define MONO_RUNTIMEEVENTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9121290)

namespace Mono
{
	inline static constexpr unsigned int RuntimeEventHandle_TypeDefinitionIndex = 23573;

	class RuntimeEventHandle : public Il2CppObject
	{
	public:
		::System::Int32 value; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Value()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEEVENTHANDLE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

