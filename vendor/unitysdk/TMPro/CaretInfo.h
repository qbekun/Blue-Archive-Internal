#pragma once
#include "../unitysdk.h"

namespace TMPro { class CaretPosition; }

#define TMPRO_CARETINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA180120)

namespace TMPro
{
	inline static constexpr unsigned int CaretInfo_TypeDefinitionIndex = 33757;

	class CaretInfo : public Il2CppObject
	{
	public:
		::System::Int32 index; // 0x10
		::TMPro::CaretPosition* position; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::TMPro::CaretPosition* arg)
		{
			((::System::Void(*)(::System::Int32, ::TMPro::CaretPosition*, ::PVOID))((::PBYTE)hIl2Cpp + TMPRO_CARETINFO_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

