#pragma once
#include "unitysdk.h"

#define PARSERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4CCD80)

	inline static constexpr unsigned int ParseResult_TypeDefinitionIndex = 34674;

	class ParseResult : public Il2CppObject
	{
	public:
		::System::Int32 Index; // 0x10
		Il2CppObject* FormatString; // 0x18
		::System::Int32 LastIndex; // 0x28
		::System::Int32 Alignment; // 0x2C

		::System::Void .ctor(::System::Int32 arg, Il2CppObject* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARSERESULT_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

