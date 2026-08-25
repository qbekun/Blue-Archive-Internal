#pragma once
#include "unitysdk.h"

class UILabel;
class UIGrid;
namespace UnityEngine { class GameObject; }
class UIArenaRewardDetail;
namespace MX::Data { class ArenaRewardInfo; }

#define UIARENAREWARDELEMENT_SETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x21F8880)
#define UIARENAREWARDELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x21F8CF0)
#define UIARENAREWARDELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x21F8D30)
#define UIARENAREWARDELEMENT_SETPARCELCARDS_OFFSET UNITYSDK_OFFSET(0x21F8EE0)

	inline static constexpr unsigned int UIArenaRewardElement_TypeDefinitionIndex = 4273;

	class UIArenaRewardElement : public ::System::Xml::OpenedHost
	{
	public:
		UILabel* descriptionLabel; // 0x28
		UILabel* timeRewardLabel; // 0x30
		UIGrid* rewardGrid; // 0x38
		::UnityEngine::GameObject* attackRewardObject; // 0x40
		::UnityEngine::GameObject* defenseRewardObject; // 0x48
		::UnityEngine::GameObject* rankRewardObject; // 0x50
		::UnityEngine::GameObject* timeRewardObject; // 0x58
		::Il2CppArray<::System::Object*>* parcelCards; // 0x60
		UIArenaRewardDetail* uiReward; // 0x68

		::System::Void SetDescription(::MX::Data::ArenaRewardInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ArenaRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDELEMENT_SETDESCRIPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::ArenaRewardInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ArenaRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetParcelCards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIARENAREWARDELEMENT_SETPARCELCARDS_OFFSET))(arg, nullptr);
		}

	};

