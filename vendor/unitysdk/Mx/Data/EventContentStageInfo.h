#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EventContentType; }
namespace MX::Data { class EventContentSeasonInfo; }
namespace MX::Data::Excel { class EventContentStageExcel; }
namespace MX::GameLogic::Parcel { class ParcelCost; }

#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_PREVSTAGESUBEVENTID_OFFSET UNITYSDK_OFFSET(0x183EBB0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_STAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x183EBC0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_STAGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x183EBD0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183EBE0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_SHOWCLEARDECKBUTTON_OFFSET UNITYSDK_OFFSET(0x183EBF0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_CHALLENGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x183EC10)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_USECONTENTSAVE_OFFSET UNITYSDK_OFFSET(0x183EC20)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x183EC30)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_BUFFCONTENTID_OFFSET UNITYSDK_OFFSET(0x183EC40)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_OPENDATE_OFFSET UNITYSDK_OFFSET(0x183EC50)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_OPENCONDITIONSCENARIOID_OFFSET UNITYSDK_OFFSET(0x183EC60)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_BUFFCONTENTID_OFFSET UNITYSDK_OFFSET(0x183EC70)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GETSTAGENUMBER_OFFSET UNITYSDK_OFFSET(0x183EC80)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_PREVSTAGEID_OFFSET UNITYSDK_OFFSET(0x183EC90)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_OPENEVENTPOINT_OFFSET UNITYSDK_OFFSET(0x183ECA0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_ISDEFEATBATTLE_OFFSET UNITYSDK_OFFSET(0x183ECB0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_USECONTENTSAVE_OFFSET UNITYSDK_OFFSET(0x183ECC0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_OPENEVENTPOINT_OFFSET UNITYSDK_OFFSET(0x183ECD0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_STARGOALS_OFFSET UNITYSDK_OFFSET(0x183ECE0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_INSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0x183ECF0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_OPENCONDITIONCONTENTID_OFFSET UNITYSDK_OFFSET(0x183ED00)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_PREVSTAGESUBEVENTID_OFFSET UNITYSDK_OFFSET(0x183ED10)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_OPENCONDITIONSCENARIOID_OFFSET UNITYSDK_OFFSET(0x183ED20)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_CHALLENGEDISPLAY_OFFSET UNITYSDK_OFFSET(0x183ED30)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_STAGEHINT_OFFSET UNITYSDK_OFFSET(0x183ED40)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_ISDEFEATBATTLE_OFFSET UNITYSDK_OFFSET(0x183ED50)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_STARGOALS_OFFSET UNITYSDK_OFFSET(0x183ED60)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_STAGEHINT_OFFSET UNITYSDK_OFFSET(0x183ED80)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_PREVSTAGEID_OFFSET UNITYSDK_OFFSET(0x183ED90)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_OPENCONDITIONCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x183EDA0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_GET_OPENDATE_OFFSET UNITYSDK_OFFSET(0x183EDB0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x183EDC0)
#define MX_DATA_EVENTCONTENTSTAGEINFO_SET_INSTANTCLEAR_OFFSET UNITYSDK_OFFSET(0x183FCB0)

namespace MX::Data
{
	inline static constexpr unsigned int EventContentStageInfo_TypeDefinitionIndex = 15779;

	class EventContentStageInfo : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x138
		::System::Int32 _StageDisplay_k__BackingField; // 0x140
		::System::Int64 _PrevStageId_k__BackingField; // 0x148
		::System::DateTime* _OpenDate_k__BackingField; // 0x150
		::System::Int64 _OpenEventPoint_k__BackingField; // 0x158
		::System::Boolean _InstantClear_k__BackingField; // 0x160
		::System::Int64 _BuffContentId_k__BackingField; // 0x168
		::System::Boolean _ChallengeDisplay_k__BackingField; // 0x170
		::System::Int64 _OpenConditionScenarioId_k__BackingField; // 0x178
		::System::Int64 _PrevStageSubEventId_k__BackingField; // 0x180
		::FlatData::EventContentType* _OpenConditionContentType_k__BackingField; // 0x188
		::System::Int64 _OpenConditionContentId_k__BackingField; // 0x190
		::System::Boolean _IsDefeatBattle_k__BackingField; // 0x198
		Il2CppObject* _StarGoals_k__BackingField; // 0x1A0
		::System::UInt32 _StageHint_k__BackingField; // 0x1A8
		::System::Boolean _UseContentSave_k__BackingField; // 0x1AC

		::System::Int64 get_PrevStageSubEventId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_PREVSTAGESUBEVENTID_OFFSET))(nullptr);
		}

		::System::Void set_StageDisplay(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_STAGEDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_StageDisplay()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_STAGEDISPLAY_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowClearDeckButton()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_SHOWCLEARDECKBUTTON_OFFSET))(nullptr);
		}

		::System::Boolean get_ChallengeDisplay()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_CHALLENGEDISPLAY_OFFSET))(nullptr);
		}

		::System::Boolean get_UseContentSave()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_USECONTENTSAVE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BuffContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_BUFFCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_OpenDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_OPENDATE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OpenConditionScenarioId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_OPENCONDITIONSCENARIOID_OFFSET))(nullptr);
		}

		::System::Void set_BuffContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_BUFFCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::String* GetStageNumber()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GETSTAGENUMBER_OFFSET))(nullptr);
		}

		::System::Void set_PrevStageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_PREVSTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_OpenEventPoint()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_OPENEVENTPOINT_OFFSET))(nullptr);
		}

		::System::Void set_IsDefeatBattle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_ISDEFEATBATTLE_OFFSET))(arg, nullptr);
		}

		::System::Void set_UseContentSave(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_USECONTENTSAVE_OFFSET))(arg, nullptr);
		}

		::System::Void set_OpenEventPoint(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_OPENEVENTPOINT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_StarGoals()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_STARGOALS_OFFSET))(nullptr);
		}

		::System::Boolean get_InstantClear()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_INSTANTCLEAR_OFFSET))(nullptr);
		}

		::System::Int64 get_OpenConditionContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_OPENCONDITIONCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_PrevStageSubEventId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_PREVSTAGESUBEVENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_OpenConditionScenarioId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_OPENCONDITIONSCENARIOID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ChallengeDisplay(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_CHALLENGEDISPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageHint(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_STAGEHINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDefeatBattle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_ISDEFEATBATTLE_OFFSET))(nullptr);
		}

		::System::Void set_StarGoals(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_STARGOALS_OFFSET))(arg, nullptr);
		}

		::System::UInt32 get_StageHint()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_STAGEHINT_OFFSET))(nullptr);
		}

		::System::Int64 get_PrevStageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_PREVSTAGEID_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_OpenConditionContentType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_OPENCONDITIONCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::DateTime* get_OpenDate()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_GET_OPENDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::EventContentSeasonInfo* arg, ::MX::Data::Excel::EventContentStageExcel* arg, Il2CppObject* arg, ::MX::GameLogic::Parcel::ParcelCost* arg, ::System::String* str)
		{
			((::System::Void(*)(::MX::Data::EventContentSeasonInfo*, ::MX::Data::Excel::EventContentStageExcel*, Il2CppObject*, ::MX::GameLogic::Parcel::ParcelCost*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_.CTOR_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Void set_InstantClear(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EVENTCONTENTSTAGEINFO_SET_INSTANTCLEAR_OFFSET))(arg, nullptr);
		}

	};
}

