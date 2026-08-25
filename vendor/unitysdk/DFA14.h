#pragma once
#include "unitysdk.h"

namespace Antlr::Runtime { class BaseRecognizer; }

#define DFA14_.CTOR_OFFSET UNITYSDK_OFFSET(0x2133420)
#define DFA14_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x2133560)

	inline static constexpr unsigned int DFA14_TypeDefinitionIndex = 3932;

	class DFA14 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Antlr::Runtime::BaseRecognizer* arg)
		{
			((::System::Void(*)(::Antlr::Runtime::BaseRecognizer*, ::PVOID))((::PBYTE)hIl2Cpp + DFA14_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFA14_GET_DESCRIPTION_OFFSET))(nullptr);
		}

	};

