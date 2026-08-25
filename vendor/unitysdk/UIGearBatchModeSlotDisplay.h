#pragma once
#include "unitysdk.h"

class UIEquipmentBatchGrowth;
class UIGearCard;
class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class GearObject;
class CharacterObject;
namespace FlatData { class ParcelType; }
namespace MX::GameLogic::DBModel { class GearTierUpRequestDB; }

#define UIGEARBATCHMODESLOTDISPLAY_GET_SELECTTICKETREPLACEINFOS_OFFSET UNITYSDK_OFFSET(0x240EF20)
#define UIGEARBATCHMODESLOTDISPLAY_SETNEXTTIER_OFFSET UNITYSDK_OFFSET(0x240EF30)
#define UIGEARBATCHMODESLOTDISPLAY_SET_SELECTTICKETREPLACEINFOS_OFFSET UNITYSDK_OFFSET(0x240F060)
#define UIGEARBATCHMODESLOTDISPLAY_REFRESH_OFFSET UNITYSDK_OFFSET(0x240F080)
#define UIGEARBATCHMODESLOTDISPLAY_SETCONSUMPTIONDATA_OFFSET UNITYSDK_OFFSET(0x240F510)
#define UIGEARBATCHMODESLOTDISPLAY_ACTIVEMAXBTN_OFFSET UNITYSDK_OFFSET(0x240F7E0)
#define UIGEARBATCHMODESLOTDISPLAY__SETCONSUMPTIONDATA_G__ISCONSUMPTIONTYPE|31_1_OFFSET UNITYSDK_OFFSET(0x2410450)
#define UIGEARBATCHMODESLOTDISPLAY_ONCLICKMINUS_OFFSET UNITYSDK_OFFSET(0x2410510)
#define UIGEARBATCHMODESLOTDISPLAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x2410790)
#define UIGEARBATCHMODESLOTDISPLAY_GETGEARTIERUPREQUESTDB_OFFSET UNITYSDK_OFFSET(0x2410A70)
#define UIGEARBATCHMODESLOTDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2410BC0)
#define UIGEARBATCHMODESLOTDISPLAY__ACTIVEMAXBTN_G__ISACTIVEMAXBTN|34_0_OFFSET UNITYSDK_OFFSET(0x240F8E0)
#define UIGEARBATCHMODESLOTDISPLAY_SETGROWTHSTEPSTATE_OFFSET UNITYSDK_OFFSET(0x2410620)
#define UIGEARBATCHMODESLOTDISPLAY_GET_CONSUMPTIONDATA_OFFSET UNITYSDK_OFFSET(0x2410C60)
#define UIGEARBATCHMODESLOTDISPLAY_ONCLICKMAX_OFFSET UNITYSDK_OFFSET(0x2410CC0)
#define UIGEARBATCHMODESLOTDISPLAY_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x2412070)
#define UIGEARBATCHMODESLOTDISPLAY_ISENOUGHFAVORLEVEL_OFFSET UNITYSDK_OFFSET(0x240F300)
#define UIGEARBATCHMODESLOTDISPLAY_ONCLICKPLUS_OFFSET UNITYSDK_OFFSET(0x24123D0)

	inline static constexpr unsigned int UIGearBatchModeSlotDisplay_TypeDefinitionIndex = 5467;

	class UIGearBatchModeSlotDisplay : public Il2CppObject
	{
	public:
		UIEquipmentBatchGrowth* batchGrowth; // 0x18
		UIGearCard* gearCard; // 0x20
		UILabel* openLevelText; // 0x28
		MXButton* plusBtn; // 0x30
		MXButton* minusBtn; // 0x38
		MXButton* maxBtn; // 0x40
		::UnityEngine::GameObject* plusDisableBtn; // 0x48
		::UnityEngine::GameObject* minusDisableBtn; // 0x50
		::UnityEngine::GameObject* maxDisableBtn; // 0x58
		::UnityEngine::GameObject* lockCover; // 0x60
		UILabel* lockCoverLabel; // 0x68
		GearObject* originAsset; // 0x70
		GearObject* virtualAsset; // 0x78
		CharacterObject* charObj; // 0x80
		::System::Int64 cost; // 0x88
		Il2CppObject* ingredients; // 0x90
		::System::Int32 curTier; // 0x98
		Il2CppObject* _SelectTicketReplaceInfos_k__BackingField; // 0xA0

		Il2CppObject* get_SelectTicketReplaceInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_GET_SELECTTICKETREPLACEINFOS_OFFSET))(nullptr);
		}

		::System::Void SetNextTier()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_SETNEXTTIER_OFFSET))(nullptr);
		}

		::System::Void set_SelectTicketReplaceInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_SET_SELECTTICKETREPLACEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_REFRESH_OFFSET))(nullptr);
		}

		::System::Void SetConsumptionData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_SETCONSUMPTIONDATA_OFFSET))(arg, nullptr);
		}

		::System::Void ActiveMaxBtn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_ACTIVEMAXBTN_OFFSET))(nullptr);
		}

		::System::Boolean _SetConsumptionData_g__IsConsumptionType|31_1(::FlatData::ParcelType* arg)
		{
			return ((::System::Boolean(*)(::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY__SETCONSUMPTIONDATA_G__ISCONSUMPTIONTYPE|31_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickMinus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_ONCLICKMINUS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_AWAKE_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::GearTierUpRequestDB* GetGearTierUpRequestDB()
		{
			return ((::MX::GameLogic::DBModel::GearTierUpRequestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_GETGEARTIERUPREQUESTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ActiveMaxBtn_g__IsActiveMaxBtn|34_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY__ACTIVEMAXBTN_G__ISACTIVEMAXBTN|34_0_OFFSET))(nullptr);
		}

		::System::Void SetGrowthStepState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_SETGROWTHSTEPSTATE_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConsumptionData()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_GET_CONSUMPTIONDATA_OFFSET))(nullptr);
		}

		::System::Void OnClickMax()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_ONCLICKMAX_OFFSET))(nullptr);
		}

		::System::Void Initialized(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEnoughFavorLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_ISENOUGHFAVORLEVEL_OFFSET))(nullptr);
		}

		::System::Void OnClickPlus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGEARBATCHMODESLOTDISPLAY_ONCLICKPLUS_OFFSET))(nullptr);
		}

	};

