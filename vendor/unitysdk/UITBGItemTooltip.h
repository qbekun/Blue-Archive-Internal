#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class UIBase;
namespace MX::Data { class ITBGItemInfo; }

#define UITBGITEMTOOLTIP_SETBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0xB578F0)
#define UITBGITEMTOOLTIP_.CTOR_OFFSET UNITYSDK_OFFSET(0xB57960)
#define UITBGITEMTOOLTIP_ONCLICKDISCARD_OFFSET UNITYSDK_OFFSET(0xB579A0)
#define UITBGITEMTOOLTIP_AWAKE_OFFSET UNITYSDK_OFFSET(0xB57A30)
#define UITBGITEMTOOLTIP_ONCLICKUSE_OFFSET UNITYSDK_OFFSET(0xB57C40)
#define UITBGITEMTOOLTIP_SETOKBUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0xB57CD0)
#define UITBGITEMTOOLTIP_SETDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0xB57D20)

	inline static constexpr unsigned int UITBGItemTooltip_TypeDefinitionIndex = 8394;

	class UITBGItemTooltip : public ::UnityEngine::InputSystem::LowLevel::PointerState
	{
	public:
		UILabel* nameLabel; // 0x48
		UILabel* descLabel; // 0x50
		MXButton* useButton; // 0x58
		MXButton* disableButton; // 0x60
		MXButton* discardButton; // 0x68
		::System::Action* onUse; // 0x70
		::System::Action* onDiscard; // 0x78
		UIBase* parentUI; // 0x80

		::System::Void SetButtonState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMTOOLTIP_SETBUTTONSTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMTOOLTIP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickDiscard()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMTOOLTIP_ONCLICKDISCARD_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMTOOLTIP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickUse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMTOOLTIP_ONCLICKUSE_OFFSET))(nullptr);
		}

		::System::Void SetOkButtonCallback(::System::Action* arg, ::System::Action* arg2, UIBase* arg3)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, UIBase*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMTOOLTIP_SETOKBUTTONCALLBACK_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void SetDataInternal(::MX::Data::ITBGItemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ITBGItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UITBGITEMTOOLTIP_SETDATAINTERNAL_OFFSET))(arg, nullptr);
		}

	};

