#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class InformationGroupOpen;
class SpineChatDialogContainer;
class UIScrollView;
namespace FlatData { class SchoolDungeonType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UISCHOOLDUNGEONLOBBY_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x2818E50)
#define UISCHOOLDUNGEONLOBBY_GET_NEEDSTACKUIS_OFFSET UNITYSDK_OFFSET(0x2818F80)
#define UISCHOOLDUNGEONLOBBY_REFRESHUNITS_OFFSET UNITYSDK_OFFSET(0x28190D0)
#define UISCHOOLDUNGEONLOBBY_.CTOR_OFFSET UNITYSDK_OFFSET(0x28193C0)
#define UISCHOOLDUNGEONLOBBY_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x28193D0)
#define UISCHOOLDUNGEONLOBBY_AWAKE_OFFSET UNITYSDK_OFFSET(0x28197A0)
#define UISCHOOLDUNGEONLOBBY_ONOPENED_OFFSET UNITYSDK_OFFSET(0x2819980)
#define UISCHOOLDUNGEONLOBBY_OPENINFOPOPUP_OFFSET UNITYSDK_OFFSET(0x2819BB0)
#define UISCHOOLDUNGEONLOBBY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2819D80)
#define UISCHOOLDUNGEONLOBBY_REFRESHEVENTREWARDDISPLAYS_OFFSET UNITYSDK_OFFSET(0x2819440)

	inline static constexpr unsigned int UISchoolDungeonLobby_TypeDefinitionIndex = 7818;

	class UISchoolDungeonLobby : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* rewardEventDisplay; // 0xD8
		UILabel* rewardEventDescription; // 0xE0
		InformationGroupOpen* infoButton; // 0xE8
		SpineChatDialogContainer* spineChatDialogContainer; // 0xF0
		Il2CppObject* locationUnits; // 0xF8
		UIScrollView* scrollView; // 0x100

		::System::Void OnClickButton(::FlatData::SchoolDungeonType* arg)
		{
			((::System::Void(*)(::FlatData::SchoolDungeonType*, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONLOBBY_ONCLICKBUTTON_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_needStackUIs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONLOBBY_GET_NEEDSTACKUIS_OFFSET))(nullptr);
		}

		::System::Void RefreshUnits()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONLOBBY_REFRESHUNITS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONLOBBY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleEventRewardIncreaseResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONLOBBY_HANDLEEVENTREWARDINCREASERESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONLOBBY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONLOBBY_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void OpenInfoPopup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONLOBBY_OPENINFOPOPUP_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONLOBBY_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void RefreshEventRewardDisplays()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCHOOLDUNGEONLOBBY_REFRESHEVENTREWARDDISPLAYS_OFFSET))(nullptr);
		}

	};

