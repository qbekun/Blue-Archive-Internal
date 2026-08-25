#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_EXPRESSIONS_PARAMETERARGS_SET_HASRESULT_OFFSET UNITYSDK_OFFSET(0x10764F0)
#define MX_CORE_EXPRESSIONS_PARAMETERARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x1076500)
#define MX_CORE_EXPRESSIONS_PARAMETERARGS_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x1076550)
#define MX_CORE_EXPRESSIONS_PARAMETERARGS_GET_HASRESULT_OFFSET UNITYSDK_OFFSET(0x1076570)
#define MX_CORE_EXPRESSIONS_PARAMETERARGS_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1076580)

namespace MX::Core::Expressions
{
	inline static constexpr unsigned int ParameterArgs_TypeDefinitionIndex = 12880;

	class ParameterArgs : public Il2CppObject
	{
	public:
		::System::Object* _result; // 0x10
		::System::Boolean _HasResult_k__BackingField; // 0x18

		::System::Void set_HasResult(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_PARAMETERARGS_SET_HASRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_PARAMETERARGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Result(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_PARAMETERARGS_SET_RESULT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_PARAMETERARGS_GET_HASRESULT_OFFSET))(nullptr);
		}

		::System::Object* get_Result()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_PARAMETERARGS_GET_RESULT_OFFSET))(nullptr);
		}

	};
}

