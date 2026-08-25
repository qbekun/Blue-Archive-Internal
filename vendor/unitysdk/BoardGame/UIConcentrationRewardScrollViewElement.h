#pragma once
#include "../unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace UnityEngine { class Transform; }
namespace MX::Data { class EventContentConcentrationRewardInfo; }

#define BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xE12760)
#define BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWELEMENT__SETDATA_G__GETTITLETEXT|6_0_OFFSET UNITYSDK_OFFSET(0xE128A0)
#define BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xE12A80)
#define BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWELEMENT_ONCLICKSHOWALL_OFFSET UNITYSDK_OFFSET(0xE12AC0)
#define BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xE12CC0)

namespace BoardGame
{
	inline static constexpr unsigned int UIConcentrationRewardScrollViewElement_TypeDefinitionIndex = 10300;

	class UIConcentrationRewardScrollViewElement : public ::System::Xml::XmlNamespaceManager
	{
	public:
		UILabel* titleLabel; // 0x28
		::Il2CppArray<::System::Object*>* rewardParcel; // 0x30
		::UnityEngine::GameObject* dim; // 0x38
		MXButton* showAllButton; // 0x40
		::UnityEngine::Transform* showAllButtonRoot; // 0x48

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::String* _SetData_g__GetTitleText|6_0(<>c__DisplayClass6_0&* arg)
		{
			return ((::System::String*(*)(<>c__DisplayClass6_0&*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWELEMENT__SETDATA_G__GETTITLETEXT|6_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickShowAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWELEMENT_ONCLICKSHOWALL_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentConcentrationRewardInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentConcentrationRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONREWARDSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};
}

