#pragma once
#include "unitysdk.h"

namespace BoardGame { class ConcentrationCardInfo; }
namespace BoardGame { class UIConcentrationCard; }

#define <>C__DISPLAYCLASS31_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xE0DCA0)
#define <>C__DISPLAYCLASS31_2__CO_UPDATE_B__7_OFFSET UNITYSDK_OFFSET(0xE0DCB0)

	inline static constexpr unsigned int <>c__DisplayClass31_2_TypeDefinitionIndex = 10280;

	class <>c__DisplayClass31_2 : public Il2CppObject
	{
	public:
		::BoardGame::ConcentrationCardInfo* cardInfo; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS31_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _Co_Update_b__7(::BoardGame::UIConcentrationCard* arg)
		{
			return ((::System::Boolean(*)(::BoardGame::UIConcentrationCard*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS31_2__CO_UPDATE_B__7_OFFSET))(arg, nullptr);
		}

	};

