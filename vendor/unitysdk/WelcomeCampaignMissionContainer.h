#pragma once
#include "unitysdk.h"

#define WELCOMECAMPAIGNMISSIONCONTAINER_GET_ISMISSIONTOASTREADY_OFFSET UNITYSDK_OFFSET(0x1EF0DD0)
#define WELCOMECAMPAIGNMISSIONCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EF0DE0)
#define WELCOMECAMPAIGNMISSIONCONTAINER_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1EF1480)
#define WELCOMECAMPAIGNMISSIONCONTAINER_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1EF1560)
#define WELCOMECAMPAIGNMISSIONCONTAINER_SET_ISMISSIONTOASTREADY_OFFSET UNITYSDK_OFFSET(0x1EF1570)
#define WELCOMECAMPAIGNMISSIONCONTAINER_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1EF1580)
#define WELCOMECAMPAIGNMISSIONCONTAINER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1EF0F10)

	inline static constexpr unsigned int WelcomeCampaignMissionContainer_TypeDefinitionIndex = 1900;

	class WelcomeCampaignMissionContainer : public Il2CppObject
	{
	public:
		::System::Boolean _isMissionToastReady; // 0x10
		Il2CppObject* MissionContentList; // 0x18
		Il2CppObject* MissionHistoryList; // 0x20
		Il2CppObject* MissionProgressList; // 0x28
		::System::Int64 _SeasonId_k__BackingField; // 0x30

		::System::Boolean get_IsMissionToastReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONCONTAINER_GET_ISMISSIONTOASTREADY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONCONTAINER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsComplete(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONCONTAINER_ISCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONCONTAINER_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void set_IsMissionToastReady(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONCONTAINER_SET_ISMISSIONTOASTREADY_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONCONTAINER_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WELCOMECAMPAIGNMISSIONCONTAINER_INITIALIZE_OFFSET))(nullptr);
		}

	};

