#pragma once
#include "unitysdk.h"

class UIEquipmentBatchGrowth;
class UIEquipmentInfo;
class UIEquipmentCard;
namespace UnityEngine { class GameObject; }
class UILabel;
class UISlider;
class MXButton;
class EquipmentObject;
class TooltipButton;
class EquipmentBatchModeItemInputRecord;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
class CharacterObject;

#define UIEQUIPMENTBATCHMODESLOTDISPLAY__CALRECIPE_B__23_1_OFFSET UNITYSDK_OFFSET(0x23FE630)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x23F79C0)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_ONCLICKMAX_OFFSET UNITYSDK_OFFSET(0x23FEB40)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY__ACTIVEMAXBTN_G__ISACTIVEMAXBTN|29_0_OFFSET UNITYSDK_OFFSET(0x2400FB0)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_REFRESH_OFFSET UNITYSDK_OFFSET(0x23FE720)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_SETGROWTHSTEPSTATE_OFFSET UNITYSDK_OFFSET(0x2402B50)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_ACTIVEMAXBTN_OFFSET UNITYSDK_OFFSET(0x23FCFE0)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_CALRECIPE_OFFSET UNITYSDK_OFFSET(0x24026F0)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x2403400)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_ONCLICKMINUS_OFFSET UNITYSDK_OFFSET(0x2403410)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_INITIALIZEBUTTON_OFFSET UNITYSDK_OFFSET(0x23FEA50)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_TRYCONSUMECHANGEPIECE_OFFSET UNITYSDK_OFFSET(0x24006E0)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_SETVIRTUALEQUIPDB_OFFSET UNITYSDK_OFFSET(0x2400F10)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_HASENOUGHCHANGEPIECESFORSHORTAGES_OFFSET UNITYSDK_OFFSET(0x2402000)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_AWAKE_OFFSET UNITYSDK_OFFSET(0x2403460)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_GETFEEDEXPANDPUSHEXPITEM_OFFSET UNITYSDK_OFFSET(0x24009A0)
#define UIEQUIPMENTBATCHMODESLOTDISPLAY_ONCLICKPLUS_OFFSET UNITYSDK_OFFSET(0x2403770)

	inline static constexpr unsigned int UIEquipmentBatchModeSlotDisplay_TypeDefinitionIndex = 5446;

	class UIEquipmentBatchModeSlotDisplay : public Il2CppObject
	{
	public:
		UIEquipmentBatchGrowth* batchGrowth; // 0x18
		UIEquipmentInfo* equipmentInfo; // 0x20
		UIEquipmentCard* equipmentCard; // 0x28
		::UnityEngine::GameObject* openLevelCover; // 0x30
		::UnityEngine::GameObject* noEquipNoticeCover; // 0x38
		UILabel* openLevelText; // 0x40
		UILabel* expText; // 0x48
		UISlider* levelGauge; // 0x50
		MXButton* plusBtn; // 0x58
		MXButton* minusBtn; // 0x60
		MXButton* maxBtn; // 0x68
		::UnityEngine::GameObject* plusDisableBtn; // 0x70
		::UnityEngine::GameObject* minusDisableBtn; // 0x78
		::UnityEngine::GameObject* maxDisableBtn; // 0x80
		EquipmentObject* originAsset; // 0x88
		EquipmentObject* virtualAsset; // 0x90
		TooltipButton* tooltipButton; // 0x98
		::System::Int64 maxTier; // 0xA0
		Il2CppObject* baseTierToEndTierIds; // 0xA8
		EquipmentBatchModeItemInputRecord* record; // 0xB0

		::System::Void _CalRecipe_b__23_1(::MX::GameLogic::Parcel::ParcelInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY__CALRECIPE_B__23_1_OFFSET))(arg, nullptr);
		}

		::System::Void Initialized(CharacterObject* arg, EquipmentBatchModeItemInputRecord* arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(CharacterObject*, EquipmentBatchModeItemInputRecord*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_INITIALIZED_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickMax()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_ONCLICKMAX_OFFSET))(nullptr);
		}

		::System::Boolean _ActiveMaxBtn_g__IsActiveMaxBtn|29_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY__ACTIVEMAXBTN_G__ISACTIVEMAXBTN|29_0_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_REFRESH_OFFSET))(nullptr);
		}

		::System::Void SetGrowthStepState(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_SETGROWTHSTEPSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void ActiveMaxBtn()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_ACTIVEMAXBTN_OFFSET))(nullptr);
		}

		::System::Void CalRecipe()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_CALRECIPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickMinus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_ONCLICKMINUS_OFFSET))(nullptr);
		}

		::System::Void InitializeButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_INITIALIZEBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean TryConsumeChangePiece(::System::Int64 arg, ::System::Int64 arg2, Il2CppObject* arg3)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_TRYCONSUMECHANGEPIECE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetVirtualEquipDB(::System::Int64 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_SETVIRTUALEQUIPDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean HasEnoughChangePiecesForShortages(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_HASENOUGHCHANGEPIECESFORSHORTAGES_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_AWAKE_OFFSET))(nullptr);
		}

		::System::Int64 GetFeedExpAndPushExpItem(EquipmentObject* arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			return ((::System::Int64(*)(EquipmentObject*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_GETFEEDEXPANDPUSHEXPITEM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickPlus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEQUIPMENTBATCHMODESLOTDISPLAY_ONCLICKPLUS_OFFSET))(nullptr);
		}

	};

