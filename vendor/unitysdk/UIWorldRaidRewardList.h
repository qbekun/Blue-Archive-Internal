#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
namespace MX::Data { class WorldRaidBossGroupInfo; }
namespace MX::Data { class WorldRaidStageRewardInfo; }

#define UIWORLDRAIDREWARDLIST_SET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0xC07A80)
#define UIWORLDRAIDREWARDLIST_ISDIMON_OFFSET UNITYSDK_OFFSET(0xC07A90)
#define UIWORLDRAIDREWARDLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xC07AB0)
#define UIWORLDRAIDREWARDLIST_GET_REWARDCARDS_OFFSET UNITYSDK_OFFSET(0xC07AF0)
#define UIWORLDRAIDREWARDLIST_GET_GROUPINFO_OFFSET UNITYSDK_OFFSET(0xC07B70)
#define UIWORLDRAIDREWARDLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0xC07B80)

	inline static constexpr unsigned int UIWorldRaidRewardList_TypeDefinitionIndex = 8795;

	class UIWorldRaidRewardList : public ::System::Xml::Serialization::XmlAttributeOverrides
	{
	public:
		UILabel* TitleLabel; // 0x28
		::Il2CppArray<::System::Object*>* rewardCards; // 0x30
		::UnityEngine::GameObject* Dim; // 0x38
		::UnityEngine::GameObject* Grid; // 0x40
		::MX::Data::WorldRaidBossGroupInfo* _GroupInfo_k__BackingField; // 0x48

		::System::Void set_GroupInfo(::MX::Data::WorldRaidBossGroupInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WorldRaidBossGroupInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDREWARDLIST_SET_GROUPINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDimOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDREWARDLIST_ISDIMON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDREWARDLIST_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_RewardCards()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDREWARDLIST_GET_REWARDCARDS_OFFSET))(nullptr);
		}

		::MX::Data::WorldRaidBossGroupInfo* get_GroupInfo()
		{
			return ((::MX::Data::WorldRaidBossGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDREWARDLIST_GET_GROUPINFO_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::WorldRaidStageRewardInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WorldRaidStageRewardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDREWARDLIST_SETDATA_OFFSET))(arg, nullptr);
		}

	};

