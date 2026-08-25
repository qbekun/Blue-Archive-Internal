#pragma once
#include "unitysdk.h"

class MXButton;

#define UIPOPUP_BATTLERANKINFO_ONCILCKCOMFIRM_OFFSET UNITYSDK_OFFSET(0x27600F0)
#define UIPOPUP_BATTLERANKINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x2760180)
#define UIPOPUP_BATTLERANKINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2760380)
#define UIPOPUP_BATTLERANKINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x2760390)

	inline static constexpr unsigned int UIPopup_BattleRankInfo_TypeDefinitionIndex = 7296;

	class UIPopup_BattleRankInfo : public Il2CppObject
	{
	public:
		MXButton* ComfirmButton; // 0xD8
		MXButton* CloseButton; // 0xE0

		::System::Void OnCilckComfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLERANKINFO_ONCILCKCOMFIRM_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLERANKINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLERANKINFO_SETDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_BATTLERANKINFO_.CTOR_OFFSET))(nullptr);
		}

	};

