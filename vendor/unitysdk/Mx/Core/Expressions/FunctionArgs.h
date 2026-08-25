#pragma once
#include "../../../unitysdk.h"

#define MX_CORE_EXPRESSIONS_FUNCTIONARGS_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x106D390)
#define MX_CORE_EXPRESSIONS_FUNCTIONARGS_SET_HASRESULT_OFFSET UNITYSDK_OFFSET(0x106D3A0)
#define MX_CORE_EXPRESSIONS_FUNCTIONARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x106D3B0)
#define MX_CORE_EXPRESSIONS_FUNCTIONARGS_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x106D430)
#define MX_CORE_EXPRESSIONS_FUNCTIONARGS_EVALUATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x106D440)
#define MX_CORE_EXPRESSIONS_FUNCTIONARGS_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x106D540)
#define MX_CORE_EXPRESSIONS_FUNCTIONARGS_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x106D560)
#define MX_CORE_EXPRESSIONS_FUNCTIONARGS_GET_HASRESULT_OFFSET UNITYSDK_OFFSET(0x106D570)

namespace MX::Core::Expressions
{
	inline static constexpr unsigned int FunctionArgs_TypeDefinitionIndex = 12878;

	class FunctionArgs : public Il2CppObject
	{
	public:
		::System::Object* _result; // 0x10
		::System::Boolean _HasResult_k__BackingField; // 0x18
		::Il2CppArray<::System::Object*>* _parameters; // 0x20

		::System::Void set_Parameters(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_FUNCTIONARGS_SET_PARAMETERS_OFFSET))(arg, nullptr);
		}

		::System::Void set_HasResult(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_FUNCTIONARGS_SET_HASRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_FUNCTIONARGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* get_Result()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_FUNCTIONARGS_GET_RESULT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* EvaluateParameters()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_FUNCTIONARGS_EVALUATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void set_Result(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_FUNCTIONARGS_SET_RESULT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Parameters()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_FUNCTIONARGS_GET_PARAMETERS_OFFSET))(nullptr);
		}

		::System::Boolean get_HasResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_EXPRESSIONS_FUNCTIONARGS_GET_HASRESULT_OFFSET))(nullptr);
		}

	};
}

