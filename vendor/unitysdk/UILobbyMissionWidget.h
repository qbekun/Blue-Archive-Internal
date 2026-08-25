#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UITweener;
class UIWidget;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UILOBBYMISSIONWIDGET_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2674D20)
#define UILOBBYMISSIONWIDGET_ONCLICKENTER_OFFSET UNITYSDK_OFFSET(0x2675000)
#define UILOBBYMISSIONWIDGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x26750B0)
#define UILOBBYMISSIONWIDGET_START_OFFSET UNITYSDK_OFFSET(0x26750C0)
#define UILOBBYMISSIONWIDGET_REFRESH_OFFSET UNITYSDK_OFFSET(0x2674D90)
#define UILOBBYMISSIONWIDGET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2675230)
#define UILOBBYMISSIONWIDGET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x26753B0)

	inline static constexpr unsigned int UILobbyMissionWidget_TypeDefinitionIndex = 6715;

	class UILobbyMissionWidget : public Il2CppObject
	{
	public:
		MXButton* enterButton; // 0x18
		UILabel* countLabel; // 0x20
		UITweener* tweener; // 0x28
		UIWidget* reddot; // 0x30

		::System::Boolean HandleMissionListResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYMISSIONWIDGET_HANDLEMISSIONLISTRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickEnter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYMISSIONWIDGET_ONCLICKENTER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYMISSIONWIDGET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYMISSIONWIDGET_START_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYMISSIONWIDGET_REFRESH_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYMISSIONWIDGET_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYMISSIONWIDGET_ONENABLE_OFFSET))(nullptr);
		}

	};

