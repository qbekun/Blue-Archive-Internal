#pragma once
#include "unitysdk.h"

namespace NPA::Editor::Livestream { class NXPLivestreamEvent; }

#define <>C__DISPLAYCLASS232_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D76410)
#define <>C__DISPLAYCLASS232_0__REGISTERINSTANTMESSAGE_B__0_OFFSET UNITYSDK_OFFSET(0x9D7CBA0)

	inline static constexpr unsigned int <>c__DisplayClass232_0_TypeDefinitionIndex = 26241;

	class <>c__DisplayClass232_0 : public Il2CppObject
	{
	public:
		Il2CppObject* mainThreadAction; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS232_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _RegisterInstantMessage_b__0(::NPA::Editor::Livestream::NXPLivestreamEvent* arg)
		{
			((::System::Void(*)(::NPA::Editor::Livestream::NXPLivestreamEvent*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS232_0__REGISTERINSTANTMESSAGE_B__0_OFFSET))(arg, nullptr);
		}

	};

