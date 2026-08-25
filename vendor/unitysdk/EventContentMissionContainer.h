#pragma once
#include "unitysdk.h"

namespace FlatData { class OpenConditionContent; }

#define EVENTCONTENTMISSIONCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D122D0)
#define EVENTCONTENTMISSIONCONTAINER_GET_ISMISSIONTOASTREADY_OFFSET UNITYSDK_OFFSET(0x1D135B0)
#define EVENTCONTENTMISSIONCONTAINER_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1D135C0)
#define EVENTCONTENTMISSIONCONTAINER_SET_ISMISSIONTOASTREADY_OFFSET UNITYSDK_OFFSET(0x1D136A0)
#define EVENTCONTENTMISSIONCONTAINER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D13760)
#define EVENTCONTENTMISSIONCONTAINER_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1D13BB0)
#define EVENTCONTENTMISSIONCONTAINER_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1D13BC0)

	inline static constexpr unsigned int EventContentMissionContainer_TypeDefinitionIndex = 1627;

	class EventContentMissionContainer : public Il2CppObject
	{
	public:
		::System::Boolean isMissionToastReady; // 0x10
		::FlatData::OpenConditionContent* openConditionContent; // 0x14
		Il2CppObject* MissionContentList; // 0x18
		Il2CppObject* MissionHistoryList; // 0x20
		Il2CppObject* MissionProgressList; // 0x28
		Il2CppObject* CurrentMissionContentList; // 0x30
		::System::Int64 _EventContentId_k__BackingField; // 0x38

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONCONTAINER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMissionToastReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONCONTAINER_GET_ISMISSIONTOASTREADY_OFFSET))(nullptr);
		}

		::System::Boolean IsComplete(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONCONTAINER_ISCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsMissionToastReady(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONCONTAINER_SET_ISMISSIONTOASTREADY_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONCONTAINER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONCONTAINER_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMISSIONCONTAINER_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};

