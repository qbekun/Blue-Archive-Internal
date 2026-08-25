#pragma once
#include "../unitysdk.h"

#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9120F20)
#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x9120F40)
#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9121100)
#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_GETCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x9120F50)
#define MONO_RUNTIMEGENERICPARAMINFOHANDLE_GETCONSTRAINTSCOUNT_OFFSET UNITYSDK_OFFSET(0x9121120)

namespace Mono
{
	inline static constexpr unsigned int RuntimeGenericParamInfoHandle_TypeDefinitionIndex = 23572;

	class RuntimeGenericParamInfoHandle : public Il2CppObject
	{
	public:
		::System::Object** value; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGENERICPARAMINFOHANDLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Constraints()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGENERICPARAMINFOHANDLE_GET_CONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Reflection::GenericParameterAttributes* get_Attributes()
		{
			return (return (::System::Reflection::GenericParameterAttributes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGENERICPARAMINFOHANDLE_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetConstraints()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGENERICPARAMINFOHANDLE_GETCONSTRAINTS_OFFSET))(nullptr);
		}

		::System::Int32 GetConstraintsCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEGENERICPARAMINFOHANDLE_GETCONSTRAINTSCOUNT_OFFSET))(nullptr);
		}

	};
}

