#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UIScrollView;
class UIGrid;
class UIEventMiniListUnit;
namespace UnityEngine { class GameObject; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::NetworkProtocol { class ResetableContentGetResponse; }
namespace MX::GameLogic::DBModel { class ResetableContentValueDB; }
class UIPopup_MiniEventState;

#define UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT__INITIALIZE_B__16_1_OFFSET UNITYSDK_OFFSET(0x244A7B0)
#define UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x244A990)
#define UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT_CREATELIST_OFFSET UNITYSDK_OFFSET(0x244AAB0)
#define UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x244AC00)
#define UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT_ONCLICKREWARDINFOBUTTON_OFFSET UNITYSDK_OFFSET(0x244ACB0)
#define UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT__INITIALIZE_B__16_2_OFFSET UNITYSDK_OFFSET(0x244AD90)
#define UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT_SETLIST_OFFSET UNITYSDK_OFFSET(0x244ADD0)
#define UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT__ONCLICKREWARDINFOBUTTON_B__15_0_OFFSET UNITYSDK_OFFSET(0x244B0D0)
#define UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x244B120)

	inline static constexpr unsigned int UIEventLobbyContentController_MiniEvent_TypeDefinitionIndex = 5545;

	class UIEventLobbyContentController_MiniEvent : public Il2CppObject
	{
	public:
		MXButton* rewardInfoButton; // 0x38
		Il2CppObject* miniItemIcons; // 0x40
		UILabel* miniPossessionLabel; // 0x48
		UILabel* miniAcquisitionLabel; // 0x50
		UIScrollView* scrollView; // 0x58
		UIGrid* grid; // 0x60
		UIEventMiniListUnit* miniUnit; // 0x68
		::UnityEngine::GameObject* eventEnd; // 0x70
		Il2CppObject* units; // 0x78
		::MX::Data::EventContentSeasonInfo* seasonInfo; // 0x80
		::System::Int64 possessionVal; // 0x88
		::System::Int64 acquisitionVal; // 0x90
		::System::Int64 acquisitionMaxVal; // 0x98
		::System::String* IconSpriteName; // 0xA0

		::System::Void _Initialize_b__16_1(::MX::NetworkProtocol::ResetableContentGetResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResetableContentGetResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT__INITIALIZE_B__16_1_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void CreateList(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT_CREATELIST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickRewardInfoButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT_ONCLICKREWARDINFOBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean _Initialize_b__16_2(::MX::GameLogic::DBModel::ResetableContentValueDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::ResetableContentValueDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT__INITIALIZE_B__16_2_OFFSET))(arg, nullptr);
		}

		::System::Void SetList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT_SETLIST_OFFSET))(nullptr);
		}

		::System::Void _OnClickRewardInfoButton_b__15_0(UIPopup_MiniEventState* arg)
		{
			((::System::Void(*)(UIPopup_MiniEventState*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT__ONCLICKREWARDINFOBUTTON_B__15_0_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLOBBYCONTENTCONTROLLER_MINIEVENT_INITIALIZE_OFFSET))(arg, nullptr);
		}

	};

