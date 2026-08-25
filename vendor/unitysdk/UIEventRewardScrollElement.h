#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace MX::Data { class EventContentStageTotalRewardInfo; }
class UIScrollView;

#define UIEVENTREWARDSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x245F590)
#define UIEVENTREWARDSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x245F5D0)
#define UIEVENTREWARDSCROLLELEMENT_SETDRAGSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x245FAD0)

	inline static constexpr unsigned int UIEventRewardScrollElement_TypeDefinitionIndex = 5597;

	class UIEventRewardScrollElement : public ::System::Xml::XmlQualifiedName
	{
	public:
		UILabel* titleLabel; // 0x28
		::Il2CppArray<::System::Object*>* rewardParcelCards; // 0x30
		::UnityEngine::GameObject* disableRoot; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentStageTotalRewardInfo* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentStageTotalRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetDragScrollView(UIScrollView* arg)
		{
			((::System::Void(*)(UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTREWARDSCROLLELEMENT_SETDRAGSCROLLVIEW_OFFSET))(arg, nullptr);
		}

	};

