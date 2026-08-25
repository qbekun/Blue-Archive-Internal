#pragma once
#include "unitysdk.h"

class UIGrid;
class UICharacterCard;
class UINonEquipmentCard;
class UILabel;
class MXButton;
namespace MX::Data::Excel { class ShopRecruitExcel; }

#define UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_HANDLEDUPLICATECHARACTER_OFFSET UNITYSDK_OFFSET(0xA7A850)
#define UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_AWAKE_OFFSET UNITYSDK_OFFSET(0xA7AFB0)
#define UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_ONCONFIRM_OFFSET UNITYSDK_OFFSET(0xA7B1C0)
#define UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_HANDLENEWCHARACTER_OFFSET UNITYSDK_OFFSET(0xA7B220)
#define UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA7B630)
#define UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_ONBACK_OFFSET UNITYSDK_OFFSET(0xA7B640)
#define UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_COLLECTDUPLICATEREWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xA7AA60)
#define UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_UPDATECOMMONUI_OFFSET UNITYSDK_OFFSET(0xA7B680)
#define UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_SETDATA_OFFSET UNITYSDK_OFFSET(0xA7B9A0)

	inline static constexpr unsigned int UIPopup_SelectPickup_FirstCharConfirm_TypeDefinitionIndex = 7880;

	class UIPopup_SelectPickup_FirstCharConfirm : public Il2CppObject
	{
	public:
		UIGrid* parcelGrid; // 0xD8
		UICharacterCard* targetCharacterCard; // 0xE0
		UINonEquipmentCard* firstGetBonusParcel; // 0xE8
		Il2CppObject* duplicateParcelDisplays; // 0xF0
		UILabel* targetCharacterName; // 0xF8
		UILabel* description1; // 0x100
		UILabel* description2; // 0x108
		MXButton* cancelButton; // 0x110
		MXButton* confirmButton; // 0x118
		::System::Action* _confirmAction; // 0x120

		::System::Void HandleDuplicateCharacter(::MX::Data::Excel::ShopRecruitExcel* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_HANDLEDUPLICATECHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_ONCONFIRM_OFFSET))(nullptr);
		}

		::System::Void HandleNewCharacter(::MX::Data::Excel::ShopRecruitExcel* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_HANDLENEWCHARACTER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_ONBACK_OFFSET))(nullptr);
		}

		Il2CppObject* CollectDuplicateRewardParcels(::MX::Data::Excel::ShopRecruitExcel* arg, ::System::Int64 arg2)
		{
			return ((Il2CppObject*(*)(::MX::Data::Excel::ShopRecruitExcel*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_COLLECTDUPLICATEREWARDPARCELS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void UpdateCommonUI(::MX::Data::Excel::ShopRecruitExcel* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_UPDATECOMMONUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::ShopRecruitExcel* arg, ::System::Int64 arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Data::Excel::ShopRecruitExcel*, ::System::Int64, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SELECTPICKUP_FIRSTCHARCONFIRM_SETDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

