#pragma once
#include "unitysdk.h"

#define SETONINVOKEMRES_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F8E20)
#define SETONINVOKEMRES_INVOKE_OFFSET UNITYSDK_OFFSET(0x93FBC80)
#define SETONINVOKEMRES_GET_INVOKEMAYRUNARBITRARYCODE_OFFSET UNITYSDK_OFFSET(0x93FBC90)

	inline static constexpr unsigned int SetOnInvokeMres_TypeDefinitionIndex = 24176;

	class SetOnInvokeMres : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETONINVOKEMRES_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Invoke(::System::Threading::Tasks::Task* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::PVOID))((::PBYTE)hIl2Cpp + SETONINVOKEMRES_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_InvokeMayRunArbitraryCode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SETONINVOKEMRES_GET_INVOKEMAYRUNARBITRARYCODE_OFFSET))(nullptr);
		}

	};

