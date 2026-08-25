#pragma once
#include "unitysdk.h"

class PopupType;
class UILabel;
class UISprite;
class MXButton;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define HEALPOPUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2295310)
#define HEALPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2295490)
#define HEALPOPUP_OPENHEALPOPUP_OFFSET UNITYSDK_OFFSET(0x2295760)
#define HEALPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x2295D80)
#define HEALPOPUP_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2295D90)
#define HEALPOPUP_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2295E90)
#define HEALPOPUP_HANDELRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x2295F90)
#define HEALPOPUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2296200)

	inline static constexpr unsigned int HealPopup_TypeDefinitionIndex = 4717;

	class HealPopup : public Il2CppObject
	{
	public:
		PopupType* popupType; // 0x18
		UILabel* Title; // 0x20
		UILabel* Desc; // 0x28
		UILabel* Count; // 0x30
		UISprite* CostType; // 0x38
		UILabel* Cost; // 0x40
		UILabel* CountName; // 0x48
		MXButton* ButtonX; // 0x50
		MXButton* ButtonCancel; // 0x58
		MXButton* ButtonOk; // 0x60
		::System::Int64 echelonEntityId; // 0x68
		::System::Int64 characterID; // 0x70

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALPOPUP_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OpenHealPopup(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + HEALPOPUP_OPENHEALPOPUP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALPOPUP_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALPOPUP_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Boolean HandelResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + HEALPOPUP_HANDELRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALPOPUP_ONENABLE_OFFSET))(nullptr);
		}

	};

