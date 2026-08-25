#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ItemExcel; }
class UITexture;

#define <>C__DISPLAYCLASS47_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xAA1140)
#define <>C__DISPLAYCLASS47_2__SETSELECTEDCHARACTER_B__8_OFFSET UNITYSDK_OFFSET(0xAA1150)

	inline static constexpr unsigned int <>c__DisplayClass47_2_TypeDefinitionIndex = 7961;

	class <>c__DisplayClass47_2 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ItemExcel* itemExcel; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS47_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetSelectedCharacter_b__8(UITexture* arg)
		{
			((::System::Void(*)(UITexture*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS47_2__SETSELECTEDCHARACTER_B__8_OFFSET))(arg, nullptr);
		}

	};

