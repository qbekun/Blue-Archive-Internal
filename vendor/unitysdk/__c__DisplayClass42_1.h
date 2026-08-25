#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class ScenarioModeExcel; }
class UITexture;

#define <>C__DISPLAYCLASS42_1_.CTOR_OFFSET UNITYSDK_OFFSET(0x27F44B0)
#define <>C__DISPLAYCLASS42_1__SETEVENTCONTENT_B__4_OFFSET UNITYSDK_OFFSET(0x27F4B50)

	inline static constexpr unsigned int <>c__DisplayClass42_1_TypeDefinitionIndex = 7727;

	class <>c__DisplayClass42_1 : public Il2CppObject
	{
	public:
		::MX::Data::Excel::ScenarioModeExcel* targetExcel; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS42_1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _SetEventContent_b__4(UITexture* arg)
		{
			((::System::Void(*)(UITexture*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS42_1__SETEVENTCONTENT_B__4_OFFSET))(arg, nullptr);
		}

	};

