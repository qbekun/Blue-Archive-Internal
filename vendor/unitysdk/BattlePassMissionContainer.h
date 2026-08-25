#pragma once
#include "unitysdk.h"

namespace FlatData { class OpenConditionContent; }

#define BATTLEPASSMISSIONCONTAINER_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x182D7C0)
#define BATTLEPASSMISSIONCONTAINER_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0x182D7D0)
#define BATTLEPASSMISSIONCONTAINER_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0x182D8B0)
#define BATTLEPASSMISSIONCONTAINER_SET_ISMISSIONTOASTREADY_OFFSET UNITYSDK_OFFSET(0x182D8C0)
#define BATTLEPASSMISSIONCONTAINER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x182D980)
#define BATTLEPASSMISSIONCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x182DDF0)
#define BATTLEPASSMISSIONCONTAINER_GET_ISMISSIONTOASTREADY_OFFSET UNITYSDK_OFFSET(0x182DF60)

	inline static constexpr unsigned int BattlePassMissionContainer_TypeDefinitionIndex = 1317;

	class BattlePassMissionContainer : public Il2CppObject
	{
	public:
		::System::Boolean isMissionToastReady; // 0x10
		::FlatData::OpenConditionContent* openConditionContent; // 0x14
		Il2CppObject* MissionContentList; // 0x18
		Il2CppObject* MissionHistoryList; // 0x20
		Il2CppObject* MissionProgressList; // 0x28
		Il2CppObject* CurrentMissionContentList; // 0x30
		::System::Int64 _BattlePassId_k__BackingField; // 0x38

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONCONTAINER_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsComplete(::System::Int64 arg)
		{
			return ((::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONCONTAINER_ISCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONCONTAINER_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::System::Void set_IsMissionToastReady(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONCONTAINER_SET_ISMISSIONTOASTREADY_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONCONTAINER_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONCONTAINER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMissionToastReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BATTLEPASSMISSIONCONTAINER_GET_ISMISSIONTOASTREADY_OFFSET))(nullptr);
		}

	};

