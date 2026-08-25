#pragma once
#include "unitysdk.h"

class UIGachaResult;
class MXButton;
namespace UnityEngine { class GameObject; }
class UILabel;
class UIEmptySaveDataResultPopup;
class UIGrid;
class UIPopupBeforehandGachaResultController;
namespace MX::GameLogic::DBModel { class BeforehandGachaSnapshotDB; }
class BeforehandGachaSnapshotViewModel;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace Assets::_MX::Program::Scripts::Network { class TaskState; }

#define UIBEFOREHANDGACHA_CLOSEBEFOREHANDGACHARESULTPOPUP_OFFSET UNITYSDK_OFFSET(0xA81160)
#define UIBEFOREHANDGACHA_OPENREPLACESAVEDRESULTPOPUP_OFFSET UNITYSDK_OFFSET(0xA81180)
#define UIBEFOREHANDGACHA__ONCLICKSELECTRESULTBUTTON_B__30_0_OFFSET UNITYSDK_OFFSET(0xA81200)
#define UIBEFOREHANDGACHA_ACTIVESAVEBUTTON_OFFSET UNITYSDK_OFFSET(0xA814E0)
#define UIBEFOREHANDGACHA_HANDLESHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA818D0)
#define UIBEFOREHANDGACHA_.CTOR_OFFSET UNITYSDK_OFFSET(0xA81BE0)
#define UIBEFOREHANDGACHA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA81BF0)
#define UIBEFOREHANDGACHA_ONCLICKSELECTRESULTBUTTON_OFFSET UNITYSDK_OFFSET(0xA81CF0)
#define UIBEFOREHANDGACHA_AWAKE_OFFSET UNITYSDK_OFFSET(0xA81DA0)
#define UIBEFOREHANDGACHA_ISACTIVEEMPTYSAVEDATARESULTPOPUP_OFFSET UNITYSDK_OFFSET(0xA82160)
#define UIBEFOREHANDGACHA__REQUESTSAVECURRENTRESULT_B__27_0_OFFSET UNITYSDK_OFFSET(0xA82190)
#define UIBEFOREHANDGACHA_OPENSAVECONFIRMPOPUP_OFFSET UNITYSDK_OFFSET(0xA823B0)
#define UIBEFOREHANDGACHA_ONCLICKSAVEDATAINFOBUTTON_OFFSET UNITYSDK_OFFSET(0xA825E0)
#define UIBEFOREHANDGACHA__OPENREPLACESAVEDRESULTPOPUP_B__26_0_OFFSET UNITYSDK_OFFSET(0xA82610)
#define UIBEFOREHANDGACHA_ONCLICKSAVEBUTTON_OFFSET UNITYSDK_OFFSET(0xA828F0)
#define UIBEFOREHANDGACHA_CLOSEEMPTYSAVEDATARESULTPOPUP_OFFSET UNITYSDK_OFFSET(0xA82A60)
#define UIBEFOREHANDGACHA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA82A80)
#define UIBEFOREHANDGACHA_HIDERETRYANDSAVEBUTTON_OFFSET UNITYSDK_OFFSET(0xA82D90)
#define UIBEFOREHANDGACHA_REFRESHSAVEDATAINFOBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0xA816A0)
#define UIBEFOREHANDGACHA_ISACTIVEBEFOREHANDGACHARESULTPOPUP_OFFSET UNITYSDK_OFFSET(0xA82E40)
#define UIBEFOREHANDGACHA_ONCLICKRETRYBUTTON_OFFSET UNITYSDK_OFFSET(0xA82E70)
#define UIBEFOREHANDGACHA_REQUESTSAVECURRENTRESULT_OFFSET UNITYSDK_OFFSET(0xA82670)
#define UIBEFOREHANDGACHA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA82FA0)

	inline static constexpr unsigned int UIBeforehandGacha_TypeDefinitionIndex = 7901;

	class UIBeforehandGacha : public Il2CppObject
	{
	public:
		UIGachaResult* gachaResult; // 0x18
		MXButton* saveDataInfoBtn; // 0x20
		::UnityEngine::GameObject* saveDataInfoDisableBtn; // 0x28
		MXButton* retryBtn; // 0x30
		MXButton* saveBtn; // 0x38
		MXButton* saveDisableBtn; // 0x40
		::UnityEngine::GameObject* saveGroup; // 0x48
		MXButton* selectResultBtn; // 0x50
		UILabel* remainingPoint; // 0x58
		UIEmptySaveDataResultPopup* emptySaveDataResultPopup; // 0x60
		UIGrid* btnGrid; // 0x68
		UILabel* saveDataInfoBtnLabel; // 0x70
		UILabel* saveDataInfoDisableBtnLabel; // 0x78
		UIPopupBeforehandGachaResultController* beforehandGachaResultPopup; // 0x80
		::System::Boolean hasSaveData; // 0x88
		::MX::GameLogic::DBModel::BeforehandGachaSnapshotDB* snapshot; // 0x90
		BeforehandGachaSnapshotViewModel* snapshotViewModel; // 0x98

		::System::Void CloseBeforehandGachaResultPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_CLOSEBEFOREHANDGACHARESULTPOPUP_OFFSET))(nullptr);
		}

		::System::Void OpenReplaceSavedResultPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_OPENREPLACESAVEDRESULTPOPUP_OFFSET))(nullptr);
		}

		::System::Void _OnClickSelectResultButton_b__30_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA__ONCLICKSELECTRESULTBUTTON_B__30_0_OFFSET))(nullptr);
		}

		::System::Void ActiveSaveButton(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_ACTIVESAVEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleShopBeforehandGachaPickResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_HANDLESHOPBEFOREHANDGACHAPICKRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickSelectResultButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_ONCLICKSELECTRESULTBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean IsActiveEmptySaveDataResultPopup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_ISACTIVEEMPTYSAVEDATARESULTPOPUP_OFFSET))(nullptr);
		}

		::System::Void _RequestSaveCurrentResult_b__27_0(::Assets::_MX::Program::Scripts::Network::TaskState* arg)
		{
			((::System::Void(*)(::Assets::_MX::Program::Scripts::Network::TaskState*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA__REQUESTSAVECURRENTRESULT_B__27_0_OFFSET))(arg, nullptr);
		}

		::System::Void OpenSaveConfirmPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_OPENSAVECONFIRMPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnClickSaveDataInfoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_ONCLICKSAVEDATAINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Void _OpenReplaceSavedResultPopup_b__26_0(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA__OPENREPLACESAVEDRESULTPOPUP_B__26_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickSaveButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_ONCLICKSAVEBUTTON_OFFSET))(nullptr);
		}

		::System::Void CloseEmptySaveDataResultPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_CLOSEEMPTYSAVEDATARESULTPOPUP_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void HideRetryAndSaveButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_HIDERETRYANDSAVEBUTTON_OFFSET))(nullptr);
		}

		::System::Void RefreshSaveDataInfoButtonText()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_REFRESHSAVEDATAINFOBUTTONTEXT_OFFSET))(nullptr);
		}

		::System::Boolean IsActiveBeforehandGachaResultPopup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_ISACTIVEBEFOREHANDGACHARESULTPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnClickRetryButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_ONCLICKRETRYBUTTON_OFFSET))(nullptr);
		}

		::System::Void RequestSaveCurrentResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_REQUESTSAVECURRENTRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBEFOREHANDGACHA_ONDISABLE_OFFSET))(nullptr);
		}

	};

