#pragma once
#include "unitysdk.h"

#define FUNCTIONDEFINITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x107ACF0)

	inline static constexpr unsigned int FunctionDefinition_TypeDefinitionIndex = 12890;

	class FunctionDefinition : public Il2CppObject
	{
	public:
		::System::Int32 ParameterCount; // 0x10
		::System::Boolean IsVariadicParameter; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FUNCTIONDEFINITION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

