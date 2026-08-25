#pragma once
#include "unitysdk.h"

#define INDENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FE1810)

	inline static constexpr unsigned int Indent_TypeDefinitionIndex = 34086;

	class Indent : public Il2CppObject
	{
	public:
		::System::Int32 relativeAmount; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INDENT_.CTOR_OFFSET))(arg, nullptr);
		}

	};

