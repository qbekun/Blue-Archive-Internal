#pragma once
#include "unitysdk.h"

class ButtonActivator;
class UIPopup_ClearDeckGroupDetail;

#define UICLEARDECKGROUPSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FE190)
#define UICLEARDECKGROUPSLOT_AWAKE_OFFSET UNITYSDK_OFFSET(0x26FE1A0)
#define UICLEARDECKGROUPSLOT_SETDATA_OFFSET UNITYSDK_OFFSET(0x26FE2D0)
#define UICLEARDECKGROUPSLOT__ONDETAILBUTTONCLICK_B__10_0_OFFSET UNITYSDK_OFFSET(0x26FE490)
#define UICLEARDECKGROUPSLOT_ONDETAILBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26FE4C0)
#define UICLEARDECKGROUPSLOT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x26FE3C0)
#define UICLEARDECKGROUPSLOT_GET_ISEXTENSIONSLOT_OFFSET UNITYSDK_OFFSET(0x26FE5A0)

	inline static constexpr unsigned int UIClearDeckGroupSlot_TypeDefinitionIndex = 7062;

	class UIClearDeckGroupSlot : public Il2CppObject
	{
	public:
		::System::Boolean isExtensionSlot; // 0x18
		::Il2CppArray<::System::Object*>* mainCards; // 0x20
		::Il2CppArray<::System::Object*>* supporterCards; // 0x28
		ButtonActivator* detailButton; // 0x30
		Il2CppObject* _raidTeamSettingDBGroup; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKGROUPSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKGROUPSLOT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKGROUPSLOT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void _OnDetailButtonClick_b__10_0(UIPopup_ClearDeckGroupDetail* arg)
		{
			((::System::Void(*)(UIPopup_ClearDeckGroupDetail*, ::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKGROUPSLOT__ONDETAILBUTTONCLICK_B__10_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnDetailButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKGROUPSLOT_ONDETAILBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKGROUPSLOT_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsExtensionSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UICLEARDECKGROUPSLOT_GET_ISEXTENSIONSLOT_OFFSET))(nullptr);
		}

	};

