#pragma once
#include "unitysdk.h"

namespace MX::Data { class WorldRaidStageInfo; }
class UIFormation;
class UIPopup_AssistNotice;

#define <>C__DISPLAYCLASS57_2_.CTOR_OFFSET UNITYSDK_OFFSET(0x253FC40)
#define <>C__DISPLAYCLASS57_2__ONCLICKACTIONBUTTON_B__18_OFFSET UNITYSDK_OFFSET(0x253FC50)

	inline static constexpr unsigned int <>c__DisplayClass57_2_TypeDefinitionIndex = 6060;

	class <>c__DisplayClass57_2 : public Il2CppObject
	{
	public:
		::MX::Data::WorldRaidStageInfo* worldRaidStageInfo; // 0x10
		UIFormation* __4__this; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS57_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _OnClickActionButton_b__18(UIPopup_AssistNotice* arg)
		{
			((::System::Void(*)(UIPopup_AssistNotice*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS57_2__ONCLICKACTIONBUTTON_B__18_OFFSET))(arg, nullptr);
		}

	};

