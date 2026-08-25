#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class UISprite;
class UICafeRankUpPopup;
namespace UnityEngine { class GameObject; }
class UIPopup_Option_Toggle;
class CafeOption;
namespace MX::SaveData { class OptionType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define CAFEBASEINFOTAB_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x225B000)
#define CAFEBASEINFOTAB_SET_CAFEOPTION_OFFSET UNITYSDK_OFFSET(0x225B260)
#define CAFEBASEINFOTAB_SETCAFEOPTIONS_OFFSET UNITYSDK_OFFSET(0x225B270)
#define CAFEBASEINFOTAB_.CTOR_OFFSET UNITYSDK_OFFSET(0x225B4F0)
#define CAFEBASEINFOTAB_GET_CAFEOPTION_OFFSET UNITYSDK_OFFSET(0x225B500)
#define CAFEBASEINFOTAB_AWAKE_OFFSET UNITYSDK_OFFSET(0x225B510)
#define CAFEBASEINFOTAB_ONENABLE_OFFSET UNITYSDK_OFFSET(0x225B630)
#define CAFEBASEINFOTAB_ONCHANGEDCAFEOPTION_OFFSET UNITYSDK_OFFSET(0x225BB90)
#define CAFEBASEINFOTAB_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x225B820)
#define CAFEBASEINFOTAB_HANDLECAFEINFOSYNCMESSAGE_OFFSET UNITYSDK_OFFSET(0x225BC10)
#define CAFEBASEINFOTAB_ONCLICKRANKUP_OFFSET UNITYSDK_OFFSET(0x225BC20)

	inline static constexpr unsigned int CafeBaseInfoTab_TypeDefinitionIndex = 4558;

	class CafeBaseInfoTab : public Il2CppObject
	{
	public:
		UILabel* rankLabel; // 0x18
		UILabel* comfortLabel; // 0x20
		MXButton* rankUpButton; // 0x28
		UISprite* rankUpYellowDot; // 0x30
		UICafeRankUpPopup* rankupPopup; // 0x38
		::UnityEngine::GameObject* CafeOptionsRoot; // 0x40
		UIPopup_Option_Toggle* FurnitureBubbleOption; // 0x48
		CafeOption* _CafeOption_k__BackingField; // 0x50

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEBASEINFOTAB_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_CafeOption(CafeOption* arg)
		{
			((::System::Void(*)(CafeOption*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEBASEINFOTAB_SET_CAFEOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void SetCafeOptions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEBASEINFOTAB_SETCAFEOPTIONS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEBASEINFOTAB_.CTOR_OFFSET))(nullptr);
		}

		CafeOption* get_CafeOption()
		{
			return ((CafeOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEBASEINFOTAB_GET_CAFEOPTION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEBASEINFOTAB_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEBASEINFOTAB_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnChangedCafeOption(::MX::SaveData::OptionType* arg, ::System::Object* arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::MX::SaveData::OptionType*, ::System::Object*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CAFEBASEINFOTAB_ONCHANGEDCAFEOPTION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void RefreshInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEBASEINFOTAB_REFRESHINFO_OFFSET))(nullptr);
		}

		::System::Boolean HandleCafeInfoSyncMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEBASEINFOTAB_HANDLECAFEINFOSYNCMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickRankUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEBASEINFOTAB_ONCLICKRANKUP_OFFSET))(nullptr);
		}

	};

