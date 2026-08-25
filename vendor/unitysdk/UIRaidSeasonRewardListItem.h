#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace UnityEngine { class Transform; }
class RaidSeasonRewardListInfo;

#define UIRAIDSEASONREWARDLISTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x27AB1B0)
#define UIRAIDSEASONREWARDLISTITEM_SETDATA_OFFSET UNITYSDK_OFFSET(0x27AB2F0)
#define UIRAIDSEASONREWARDLISTITEM_ONCLICKSHOWALL_OFFSET UNITYSDK_OFFSET(0x27AB8A0)
#define UIRAIDSEASONREWARDLISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x27ABA40)

	inline static constexpr unsigned int UIRaidSeasonRewardListItem_TypeDefinitionIndex = 7500;

	class UIRaidSeasonRewardListItem : public ::System::Xml::Serialization::IXmlTextParser
	{
	public:
		UILabel* Title; // 0x28
		UILabel* Num; // 0x30
		::Il2CppArray<::System::Object*>* UISmallParcel; // 0x38
		::UnityEngine::GameObject* Dim; // 0x40
		::UnityEngine::GameObject* Ranking; // 0x48
		::UnityEngine::GameObject* Point; // 0x50
		::Il2CppArray<::System::Object*>* Tier; // 0x58
		MXButton* ShowAllButton; // 0x60
		::UnityEngine::Transform* ShowAllButtonRoot; // 0x68

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDSEASONREWARDLISTITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(RaidSeasonRewardListInfo* arg)
		{
			((::System::Void(*)(RaidSeasonRewardListInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDSEASONREWARDLISTITEM_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickShowAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDSEASONREWARDLISTITEM_ONCLICKSHOWALL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDSEASONREWARDLISTITEM_.CTOR_OFFSET))(nullptr);
		}

	};

