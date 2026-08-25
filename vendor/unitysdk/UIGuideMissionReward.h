#pragma once
#include "unitysdk.h"

class UITexture;
namespace UnityEngine { class GameObject; }
class UILabel;
class ButtonActivator;
namespace MX::Data { class GuideMissionSeasonInfo; }

#define UIGUIDEMISSIONREWARD_SET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x25C8740)
#define UIGUIDEMISSIONREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x25C8750)
#define UIGUIDEMISSIONREWARD_ONCLICKRECEIVE_OFFSET UNITYSDK_OFFSET(0x25C8760)
#define UIGUIDEMISSIONREWARD_GET_SEASONINFO_OFFSET UNITYSDK_OFFSET(0x25C89A0)
#define UIGUIDEMISSIONREWARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x25C89B0)
#define UIGUIDEMISSIONREWARD_REFRESHDATECOUNT_OFFSET UNITYSDK_OFFSET(0x25C7BE0)
#define UIGUIDEMISSIONREWARD_REFRESH_OFFSET UNITYSDK_OFFSET(0x25C59F0)
#define UIGUIDEMISSIONREWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x25C89C0)

	inline static constexpr unsigned int UIGuideMissionReward_TypeDefinitionIndex = 6322;

	class UIGuideMissionReward : public Il2CppObject
	{
	public:
		UITexture* itemRewardTexture; // 0x18
		::UnityEngine::GameObject* characterRewardRoot; // 0x20
		UITexture* characterRewardTexture; // 0x28
		UILabel* rewardAmountLabel; // 0x30
		UILabel* dateCountLabel; // 0x38
		UILabel* lockIndicatorLabel; // 0x40
		::Il2CppArray<::System::Object*>* requirmentParcelImages; // 0x48
		::Il2CppArray<::System::Object*>* requirementLabels; // 0x50
		ButtonActivator* receiveButton; // 0x58
		UILabel* inactiveButtonLabel; // 0x60
		::MX::Data::GuideMissionSeasonInfo* _SeasonInfo_k__BackingField; // 0x68

		::System::Void set_SeasonInfo(::MX::Data::GuideMissionSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::GuideMissionSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONREWARD_SET_SEASONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONREWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickReceive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONREWARD_ONCLICKRECEIVE_OFFSET))(nullptr);
		}

		::MX::Data::GuideMissionSeasonInfo* get_SeasonInfo()
		{
			return ((::MX::Data::GuideMissionSeasonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONREWARD_GET_SEASONINFO_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONREWARD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void RefreshDateCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONREWARD_REFRESHDATECOUNT_OFFSET))(nullptr);
		}

		::System::Void Refresh()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONREWARD_REFRESH_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIGUIDEMISSIONREWARD_AWAKE_OFFSET))(nullptr);
		}

	};

