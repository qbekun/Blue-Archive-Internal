#pragma once
#include "../unitysdk.h"

#define SYSTEM_PARAMETERIZEDSTRINGS_EVALUATE_OFFSET UNITYSDK_OFFSET(0x93C2D20)
#define SYSTEM_PARAMETERIZEDSTRINGS_EVALUATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x93C6180)
#define SYSTEM_PARAMETERIZEDSTRINGS_ASBOOL_OFFSET UNITYSDK_OFFSET(0x93C7470)
#define SYSTEM_PARAMETERIZEDSTRINGS_ASINT_OFFSET UNITYSDK_OFFSET(0x93C7460)
#define SYSTEM_PARAMETERIZEDSTRINGS_STRINGFROMASCIIBYTES_OFFSET UNITYSDK_OFFSET(0x93C7480)
#define SYSTEM_PARAMETERIZEDSTRINGS_SNPRINTF_OFFSET UNITYSDK_OFFSET(0x93C7560)
#define SYSTEM_PARAMETERIZEDSTRINGS_SNPRINTF_OFFSET UNITYSDK_OFFSET(0x93C7620)
#define SYSTEM_PARAMETERIZEDSTRINGS_FORMATPRINTF_OFFSET UNITYSDK_OFFSET(0x93C6E50)
#define SYSTEM_PARAMETERIZEDSTRINGS_GETDYNAMICORSTATICVARIABLES_OFFSET UNITYSDK_OFFSET(0x93C7360)

namespace System
{
	inline static constexpr unsigned int ParameterizedStrings_TypeDefinitionIndex = 23994;

	class ParameterizedStrings : public Il2CppObject
	{
	public:
		LowLevelStack* _cachedStack;

		::System::String* Evaluate(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_EVALUATE_OFFSET))(str, arg, nullptr);
		}

		::System::String* EvaluateInternal(::System::String* str, int32_t&* arg, ::Il2CppArray<::System::Object*>* arg, LowLevelStack* arg, ::System::Object[]&* arg, ::System::Object[]&* arg)
		{
			return (return (::System::String*(*)(::System::String*, int32_t&*, ::Il2CppArray<::System::Object*>*, LowLevelStack*, ::System::Object[]&*, ::System::Object[]&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_EVALUATEINTERNAL_OFFSET))(str, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean AsBool(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_ASBOOL_OFFSET))(arg, nullptr);
		}

		::System::Int32 AsInt(::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_ASINT_OFFSET))(arg, nullptr);
		}

		::System::String* StringFromAsciiBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_STRINGFROMASCIIBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 snprintf(::System::Object** arg, ::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_SNPRINTF_OFFSET))(arg, arg, str, str, nullptr);
		}

		::System::Int32 snprintf(::System::Object** arg, ::System::Int32 arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Object**, ::System::Int32, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_SNPRINTF_OFFSET))(arg, arg, str, arg, nullptr);
		}

		::System::String* FormatPrintF(::System::String* str, ::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_FORMATPRINTF_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetDynamicOrStaticVariables(::System::Char arg, ::System::Object[]&* arg, ::System::Object[]&* arg, int32_t&* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Char, ::System::Object[]&*, ::System::Object[]&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMETERIZEDSTRINGS_GETDYNAMICORSTATICVARIABLES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

