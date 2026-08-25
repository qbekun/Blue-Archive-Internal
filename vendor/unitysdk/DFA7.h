#pragma once
#include "unitysdk.h"

namespace Antlr::Runtime { class BaseRecognizer; }

#define DFA7_.CTOR_OFFSET UNITYSDK_OFFSET(0x21332B0)
#define DFA7_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x21333F0)

	inline static constexpr unsigned int DFA7_TypeDefinitionIndex = 3931;

	class DFA7 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Antlr::Runtime::BaseRecognizer* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::BaseRecognizer*, ::PVOID))((::PBYTE)hIl2Cpp + DFA7_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFA7_GET_DESCRIPTION_OFFSET))(nullptr);
		}

	};

