#pragma once
#include "unitysdk.h"

class UISkillInfo;
class MXButton;
namespace MX::Logic::BattleEntities { class SkillSlot; }

#define UIPOPUP_SKILLINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0x27742F0)
#define UIPOPUP_SKILLINFO_ONCONFIRMBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x2774500)
#define UIPOPUP_SKILLINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x2774590)
#define UIPOPUP_SKILLINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x27745D0)

	inline static constexpr unsigned int UIPopup_SkillInfo_TypeDefinitionIndex = 7353;

	class UIPopup_SkillInfo : public Il2CppObject
	{
	public:
		UISkillInfo* skillInfo; // 0xD8
		MXButton* confirmButton; // 0xE0
		MXButton* closeButton; // 0xE8

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILLINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnConfirmButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILLINFO_ONCONFIRMBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Logic::BattleEntities::SkillSlot* arg, ::System::Int64 arg2, ::System::String* str, ::System::Int32 arg3, ::System::Boolean arg4)
		{
			((::System::Void(*)(::MX::Logic::BattleEntities::SkillSlot*, ::System::Int64, ::System::String*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILLINFO_SETDATA_OFFSET))(arg, arg2, str, arg3, arg4, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SKILLINFO_.CTOR_OFFSET))(nullptr);
		}

	};

