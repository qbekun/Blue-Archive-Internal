#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
class UIDiceRaceRewardScrollController;
namespace MX::Data { class EventContentDiceRaceLapRewardInfo; }
class UIScrollView;

#define UIDICERACEREWARDSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D7BA0)
#define UIDICERACEREWARDSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x23D7BE0)
#define UIDICERACEREWARDSCROLLELEMENT_SETDRAGSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x23D7FB0)

	inline static constexpr unsigned int UIDiceRaceRewardScrollElement_TypeDefinitionIndex = 5349;

	class UIDiceRaceRewardScrollElement : public ::System::Xml::XmlNodeOrder
	{
	public:
		UILabel* titleLabel; // 0x28
		::Il2CppArray<::System::Object*>* rewardParcelCards; // 0x30
		::UnityEngine::GameObject* disableRoot; // 0x38
		::UnityEngine::Transform* rewardTag; // 0x40
		UIDiceRaceRewardScrollController* uiDiceRacerewardInfo; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIDICERACEREWARDSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentDiceRaceLapRewardInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentDiceRaceLapRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIDICERACEREWARDSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetDragScrollView(UIScrollView* arg)
		{
			((::System::Void(*)(UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UIDICERACEREWARDSCROLLELEMENT_SETDRAGSCROLLVIEW_OFFSET))(arg, nullptr);
		}

	};

