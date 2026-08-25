#pragma once
#include "unitysdk.h"

namespace MX::SaveData { class ShowPackageParticularThreeStarGuidePopupSaveData; }
class UIPopup_NonEquipmentItem;

#define <>C__DISPLAYCLASS39_0_.CTOR_OFFSET UNITYSDK_OFFSET(0xFB0580)
#define <>C__DISPLAYCLASS39_0__CO_SHOWPARTICULARTHREEGACHATICKETINFOPOPUP_B__0_OFFSET UNITYSDK_OFFSET(0xFB0590)
#define <>C__DISPLAYCLASS39_0__CO_SHOWPARTICULARTHREEGACHATICKETINFOPOPUP_B__1_OFFSET UNITYSDK_OFFSET(0xFB0660)

	inline static constexpr unsigned int <>c__DisplayClass39_0_TypeDefinitionIndex = 12352;

	class <>c__DisplayClass39_0 : public Il2CppObject
	{
	public:
		Il2CppObject* items; // 0x10
		::MX::SaveData::ShowPackageParticularThreeStarGuidePopupSaveData* saveData; // 0x18
		::System::Int64 shopCashId; // 0x20
		::System::String* description; // 0x28
		::System::Action* __9__1; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS39_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _co_ShowParticularThreeGachaTicketInfoPopup_b__0(UIPopup_NonEquipmentItem* arg)
		{
			((::System::Void(*)(UIPopup_NonEquipmentItem*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS39_0__CO_SHOWPARTICULARTHREEGACHATICKETINFOPOPUP_B__0_OFFSET))(arg, nullptr);
		}

		::System::Void _co_ShowParticularThreeGachaTicketInfoPopup_b__1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS39_0__CO_SHOWPARTICULARTHREEGACHATICKETINFOPOPUP_B__1_OFFSET))(nullptr);
		}

	};

