#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
namespace UnityEngine { class Transform; }
class InformationGroupOpen;
class SpineChatDialogContainer;
class MXButton;
namespace FlatData { class ContentType; }
class UIScrollView;
namespace MX::GameLogic::DBModel { class EventRewardIncreaseDB; }
namespace FlatData { class WeekDungeonType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIWEEKDUNGEONLOBBY_ONCLICKRECOMMANDSCHOOLBUTTON_OFFSET UNITYSDK_OFFSET(0xBC84F0)
#define UIWEEKDUNGEONLOBBY_GET_SPINECHATDIALOGCONTAINER_OFFSET UNITYSDK_OFFSET(0xBC8650)
#define UIWEEKDUNGEONLOBBY_SETACTIVEREWARDEVENTDISPLAY_OFFSET UNITYSDK_OFFSET(0xBC86F0)
#define UIWEEKDUNGEONLOBBY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBC8960)
#define UIWEEKDUNGEONLOBBY_INITUNITS_OFFSET UNITYSDK_OFFSET(0xBC8B90)
#define UIWEEKDUNGEONLOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0xBC8DE0)
#define UIWEEKDUNGEONLOBBY_TUTORIALENDCHECK_OFFSET UNITYSDK_OFFSET(0xBC8F30)
#define UIWEEKDUNGEONLOBBY_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0xBBFF10)
#define UIWEEKDUNGEONLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0xBC9250)
#define UIWEEKDUNGEONLOBBY_GETOPENTYPES_OFFSET UNITYSDK_OFFSET(0xBC8990)
#define UIWEEKDUNGEONLOBBY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBC9540)
#define UIWEEKDUNGEONLOBBY_OPENSTAGESELECT_OFFSET UNITYSDK_OFFSET(0xBC9120)
#define UIWEEKDUNGEONLOBBY_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBC96D0)
#define UIWEEKDUNGEONLOBBY_OPENTUTORIALCHECK_OFFSET UNITYSDK_OFFSET(0xBC99C0)
#define UIWEEKDUNGEONLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0xBC9C30)
#define UIWEEKDUNGEONLOBBY_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBC9C40)
#define UIWEEKDUNGEONLOBBY_GETLOCATIONUNITS_OFFSET UNITYSDK_OFFSET(0xBC8DB0)
#define UIWEEKDUNGEONLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0xBC9E10)

	inline static constexpr unsigned int UIWeekDungeonLobby_TypeDefinitionIndex = 8639;

	class UIWeekDungeonLobby : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* chaseRootObject; // 0xD8
		::UnityEngine::GameObject* weekRootObject; // 0xE0
		UILabel* weekTltle; // 0xE8
		UILabel* chaseTltle; // 0xF0
		::UnityEngine::GameObject* rewardEventDisplay; // 0xF8
		UILabel* rewardEventDescription; // 0x100
		::UnityEngine::Transform* ticketRoot; // 0x108
		InformationGroupOpen* chaserInfoButton; // 0x110
		SpineChatDialogContainer* spineChatDialogContainer; // 0x118
		MXButton* groupBuffPopupButton; // 0x120
		::FlatData::ContentType* Type; // 0x128
		Il2CppObject* chaserLocationUnits; // 0x130
		Il2CppObject* weekLocationUnits; // 0x138
		UIScrollView* chaserScrollView; // 0x140
		UIScrollView* weekScrollView; // 0x148

		::System::Void OnClickRecommandSchoolButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_ONCLICKRECOMMANDSCHOOLBUTTON_OFFSET))(nullptr);
		}

		SpineChatDialogContainer* get_SpineChatDialogContainer()
		{
			return ((SpineChatDialogContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_GET_SPINECHATDIALOGCONTAINER_OFFSET))(nullptr);
		}

		::System::Void SetActiveRewardEventDisplay(::MX::GameLogic::DBModel::EventRewardIncreaseDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventRewardIncreaseDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_SETACTIVEREWARDEVENTDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void InitUnits(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_INITUNITS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void TutorialEndCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_TUTORIALENDCHECK_OFFSET))(nullptr);
		}

		::System::Void OnClickButton(::FlatData::WeekDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::WeekDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_ONCLICKBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetOpenTypes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_GETOPENTYPES_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void OpenStageSelect(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_OPENSTAGESELECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleEventRewardIncreaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OpenTutorialCheck()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_OPENTUTORIALCHECK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_INITIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetLocationUnits()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_GETLOCATIONUNITS_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWEEKDUNGEONLOBBY_AWAKE_OFFSET))(nullptr);
		}

	};

