#pragma once
#include "unitysdk.h"

namespace MX::Data { class ShiftingCraftRecipeExcelInfo; }

#define <>C__DISPLAYCLASS49_4_.CTOR_OFFSET UNITYSDK_OFFSET(0x275ABE0)
#define <>C__DISPLAYCLASS49_4__GETTOOLTIPINFO_B__11_OFFSET UNITYSDK_OFFSET(0x275ABF0)

	inline static constexpr unsigned int <>c__DisplayClass49_4_TypeDefinitionIndex = 7267;

	class <>c__DisplayClass49_4 : public Il2CppObject
	{
	public:
		::System::Int64 targetRecipeId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_4_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _GetTooltipInfo_b__11(::MX::Data::ShiftingCraftRecipeExcelInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::ShiftingCraftRecipeExcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS49_4__GETTOOLTIPINFO_B__11_OFFSET))(arg, nullptr);
		}

	};

