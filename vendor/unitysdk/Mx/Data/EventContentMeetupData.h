#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MeetupConditionType; }
namespace FlatData { class MeetupConditionPrintType; }
namespace MX::Data::Excel { class EventContentMeetupExcel; }

#define MX_DATA_EVENTCONTENTMEETUPDATA_SET_CONDITIONSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1845750)
#define MX_DATA_EVENTCONTENTMEETUPDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1845760)
#define MX_DATA_EVENTCONTENTMEETUPDATA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1845770)
#define MX_DATA_EVENTCONTENTMEETUPDATA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x1845780)
#define MX_DATA_EVENTCONTENTMEETUPDATA_GET_CONDITIONSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0x1845790)
#define MX_DATA_EVENTCONTENTMEETUPDATA_SET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x18457A0)
#define MX_DATA_EVENTCONTENTMEETUPDATA_SET_CONDITIONPRINTTYPE_OFFSET UNITYSDK_OFFSET(0x18457B0)
#define MX_DATA_EVENTCONTENTMEETUPDATA_SET_CONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x18457C0)
#define MX_DATA_EVENTCONTENTMEETUPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x18457D0)
#define MX_DATA_EVENTCONTENTMEETUPDATA_GET_HASSTAGECLEARCONDITION_OFFSET UNITYSDK_OFFSET(0x18457E0)
#define MX_DATA_EVENTCONTENTMEETUPDATA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x18457F0)
#define MX_DATA_EVENTCONTENTMEETUPDATA_GET_HASSCENARIOCLEARCONDITION_OFFSET UNITYSDK_OFFSET(0x1845800)
#define MX_DATA_EVENTCONTENTMEETUPDATA_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x1845810)
#define MX_DATA_EVENTCONTENTMEETUPDATA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1845920)
#define MX_DATA_EVENTCONTENTMEETUPDATA_GET_CONDITIONPRINTTYPE_OFFSET UNITYSDK_OFFSET(0x1845930)
#define MX_DATA_EVENTCONTENTMEETUPDATA_GET_HASCONDITION_OFFSET UNITYSDK_OFFSET(0x1845940)
#define MX_DATA_EVENTCONTENTMEETUPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1845990)
#define MX_DATA_EVENTCONTENTMEETUPDATA_GET_CONDITIONTYPE_OFFSET UNITYSDK_OFFSET(0x1845AB0)
#define MX_DATA_EVENTCONTENTMEETUPDATA_GET_CONDITIONPARAMETER_OFFSET UNITYSDK_OFFSET(0x1845AC0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentMeetupData_TypeDefinitionIndex = 15806;

	class EventContentMeetupData : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::System::Int64 _EventContentId_k__BackingField; // 0x18
		::System::Int64 _CharacterId_k__BackingField; // 0x20
		::System::Int64 _ConditionScenarioGroupId_k__BackingField; // 0x28
		::FlatData::MeetupConditionType* _ConditionType_k__BackingField; // 0x30
		::Il2CppArray<::System::Object*>* _ConditionParameter_k__BackingField; // 0x38
		::FlatData::MeetupConditionPrintType* _ConditionPrintType_k__BackingField; // 0x40

		::System::Void set_ConditionScenarioGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_SET_CONDITIONSCENARIOGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_ConditionScenarioGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_GET_CONDITIONSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_ConditionType(::FlatData::MeetupConditionType* arg)
		{
			((::System::Void(*)(::FlatData::MeetupConditionType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_SET_CONDITIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConditionPrintType(::FlatData::MeetupConditionPrintType* arg)
		{
			((::System::Void(*)(::FlatData::MeetupConditionPrintType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_SET_CONDITIONPRINTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConditionParameter(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_SET_CONDITIONPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_GET_ID_OFFSET))(nullptr);
		}

		::System::Boolean get_HasStageClearCondition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_GET_HASSTAGECLEARCONDITION_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasScenarioClearCondition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_GET_HASSCENARIOCLEARCONDITION_OFFSET))(nullptr);
		}

		::System::Boolean CheckCondition(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_CHECKCONDITION_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::MeetupConditionPrintType* get_ConditionPrintType()
		{
			return (return (::FlatData::MeetupConditionPrintType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_GET_CONDITIONPRINTTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_HasCondition()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_GET_HASCONDITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::EventContentMeetupExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentMeetupExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::FlatData::MeetupConditionType* get_ConditionType()
		{
			return (return (::FlatData::MeetupConditionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_GET_CONDITIONTYPE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ConditionParameter()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTMEETUPDATA_GET_CONDITIONPARAMETER_OFFSET))(nullptr);
		}

	};
}

