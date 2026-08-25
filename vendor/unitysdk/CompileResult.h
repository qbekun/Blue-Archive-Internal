#pragma once
#include "unitysdk.h"

#define COMPILERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPILERESULT_GET_COMMANDTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPILERESULT_SET_COMMANDTEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPILERESULT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define COMPILERESULT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int CompileResult_TypeDefinitionIndex = 36633;

	class CompileResult : public Il2CppObject
	{
	public:
		::System::String* _CommandText_k__BackingField; // 0x0
		::System::Object* _Value_k__BackingField; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPILERESULT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_CommandText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPILERESULT_GET_COMMANDTEXT_OFFSET))(nullptr);
		}

		::System::Void set_CommandText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + COMPILERESULT_SET_COMMANDTEXT_OFFSET))(str, nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMPILERESULT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + COMPILERESULT_SET_VALUE_OFFSET))(arg, nullptr);
		}

	};

