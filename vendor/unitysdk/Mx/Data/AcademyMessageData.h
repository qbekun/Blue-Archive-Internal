#pragma once
#include "../../unitysdk.h"

namespace FlatData { class AcademyMessageTypes; }
namespace FlatData { class AcademyMessageConditions; }
namespace MX::Data::Excel { class AcademyMessangerExcel; }

#define MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x180DD10)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0x180DD20)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x180DD30)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0x180DD40)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_NEXTGROUPID_OFFSET UNITYSDK_OFFSET(0x180DD50)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_NEXTGROUPID_OFFSET UNITYSDK_OFFSET(0x180DD60)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_FEEDBACKTIMEMILLIESEC_OFFSET UNITYSDK_OFFSET(0x180DD70)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_FEEDBACKTIMEMILLIESEC_OFFSET UNITYSDK_OFFSET(0x180DD80)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x180DD90)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0x180DDA0)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x180DDB0)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x180DDC0)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGECONDITION_OFFSET UNITYSDK_OFFSET(0x180DDD0)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGECONDITION_OFFSET UNITYSDK_OFFSET(0x180DDE0)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x180DDF0)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x180DE00)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_CONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x180DE10)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_CONDITIONVALUE_OFFSET UNITYSDK_OFFSET(0x180DE20)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_PRECONDITIONGROUPID_OFFSET UNITYSDK_OFFSET(0x180DE30)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_PRECONDITIONGROUPID_OFFSET UNITYSDK_OFFSET(0x180DE40)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_PRECONDITIONSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x180DE50)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_PRECONDITIONSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x180DE60)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0x180DE70)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_PROBABILITY_OFFSET UNITYSDK_OFFSET(0x180DE80)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x180DE90)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x180DEA0)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGEKR_OFFSET UNITYSDK_OFFSET(0x180DEB0)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGEKR_OFFSET UNITYSDK_OFFSET(0x180DEC0)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGEJP_OFFSET UNITYSDK_OFFSET(0x180DED0)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGEJP_OFFSET UNITYSDK_OFFSET(0x180DEE0)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGETH_OFFSET UNITYSDK_OFFSET(0x180DEF0)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGETH_OFFSET UNITYSDK_OFFSET(0x180DF00)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGETW_OFFSET UNITYSDK_OFFSET(0x180DF10)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGETW_OFFSET UNITYSDK_OFFSET(0x180DF20)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGEEN_OFFSET UNITYSDK_OFFSET(0x180DF40)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGEEN_OFFSET UNITYSDK_OFFSET(0x180DF50)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_FAVORSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x180DF70)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_FAVORSCHEDULEID_OFFSET UNITYSDK_OFFSET(0x180DF80)
#define MX_DATA_ACADEMYMESSAGEDATA_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x180DF90)
#define MX_DATA_ACADEMYMESSAGEDATA_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x180DFA0)
#define MX_DATA_ACADEMYMESSAGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x180DFC0)
#define MX_DATA_ACADEMYMESSAGEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x180E050)
#define MX_DATA_ACADEMYMESSAGEDATA_GETMESSAGETEXT_OFFSET UNITYSDK_OFFSET(0x180E1C0)

namespace MX::Data
{
	inline static constexpr unsigned int AcademyMessageData_TypeDefinitionIndex = 15706;

	class AcademyMessageData : public Il2CppObject
	{
	public:
		::System::Int64 _MessageId_k__BackingField; // 0x10
		::System::Int64 _MessageGroupId_k__BackingField; // 0x18
		::System::Int64 _NextGroupId_k__BackingField; // 0x20
		::System::Int64 _FeedbackTimeMilliesec_k__BackingField; // 0x28
		::System::Int64 _CharacterId_k__BackingField; // 0x30
		::FlatData::AcademyMessageTypes* _MessageType_k__BackingField; // 0x38
		::FlatData::AcademyMessageConditions* _MessageCondition_k__BackingField; // 0x3C
		::System::Boolean _IsPermanent_k__BackingField; // 0x40
		::System::Int64 _ConditionValue_k__BackingField; // 0x48
		::System::Int64 _PreConditionGroupId_k__BackingField; // 0x50
		::System::Int64 _PreConditionScheduleId_k__BackingField; // 0x58
		::System::Int64 _Probability_k__BackingField; // 0x60
		::System::String* _ImagePath_k__BackingField; // 0x68
		::System::String* _MessageKr_k__BackingField; // 0x70
		::System::String* _MessageJp_k__BackingField; // 0x78
		::System::String* _MessageTh_k__BackingField; // 0x80
		::System::String* _MessageTw_k__BackingField; // 0x88
		::System::String* _MessageEn_k__BackingField; // 0x90
		::System::Int64 _FavorScheduleId_k__BackingField; // 0x98
		Il2CppObject* _Rewards_k__BackingField; // 0xA0

		::System::Int64 get_MessageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGEID_OFFSET))(nullptr);
		}

		::System::Void set_MessageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MessageGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_MessageGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_NextGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_NEXTGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_NextGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_NEXTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FeedbackTimeMilliesec()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_FEEDBACKTIMEMILLIESEC_OFFSET))(nullptr);
		}

		::System::Void set_FeedbackTimeMilliesec(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_FEEDBACKTIMEMILLIESEC_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_CHARACTERID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_CHARACTERID_OFFSET))(arg, nullptr);
		}

		::FlatData::AcademyMessageTypes* get_MessageType()
		{
			return (return (::FlatData::AcademyMessageTypes*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGETYPE_OFFSET))(nullptr);
		}

		::System::Void set_MessageType(::FlatData::AcademyMessageTypes* arg)
		{
			((::System::Void(*)(::FlatData::AcademyMessageTypes*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGETYPE_OFFSET))(arg, nullptr);
		}

		::FlatData::AcademyMessageConditions* get_MessageCondition()
		{
			return (return (::FlatData::AcademyMessageConditions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGECONDITION_OFFSET))(nullptr);
		}

		::System::Void set_MessageCondition(::FlatData::AcademyMessageConditions* arg)
		{
			((::System::Void(*)(::FlatData::AcademyMessageConditions*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGECONDITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPermanent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_ISPERMANENT_OFFSET))(nullptr);
		}

		::System::Void set_IsPermanent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_ISPERMANENT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ConditionValue()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_CONDITIONVALUE_OFFSET))(nullptr);
		}

		::System::Void set_ConditionValue(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_CONDITIONVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PreConditionGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_PRECONDITIONGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_PreConditionGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_PRECONDITIONGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PreConditionScheduleId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_PRECONDITIONSCHEDULEID_OFFSET))(nullptr);
		}

		::System::Void set_PreConditionScheduleId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_PRECONDITIONSCHEDULEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Probability()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_PROBABILITY_OFFSET))(nullptr);
		}

		::System::Void set_Probability(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_PROBABILITY_OFFSET))(arg, nullptr);
		}

		::System::String* get_ImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		::System::Void set_ImagePath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_IMAGEPATH_OFFSET))(str, nullptr);
		}

		::System::String* get_MessageKr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGEKR_OFFSET))(nullptr);
		}

		::System::Void set_MessageKr(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGEKR_OFFSET))(str, nullptr);
		}

		::System::String* get_MessageJp()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGEJP_OFFSET))(nullptr);
		}

		::System::Void set_MessageJp(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGEJP_OFFSET))(str, nullptr);
		}

		::System::String* get_MessageTh()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGETH_OFFSET))(nullptr);
		}

		::System::Void set_MessageTh(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGETH_OFFSET))(str, nullptr);
		}

		::System::String* get_MessageTw()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGETW_OFFSET))(nullptr);
		}

		::System::Void set_MessageTw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGETW_OFFSET))(str, nullptr);
		}

		::System::String* get_MessageEn()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_MESSAGEEN_OFFSET))(nullptr);
		}

		::System::Void set_MessageEn(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_MESSAGEEN_OFFSET))(str, nullptr);
		}

		::System::Int64 get_FavorScheduleId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_FAVORSCHEDULEID_OFFSET))(nullptr);
		}

		::System::Void set_FavorScheduleId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_FAVORSCHEDULEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::AcademyMessangerExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::AcademyMessangerExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* GetMessageText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_ACADEMYMESSAGEDATA_GETMESSAGETEXT_OFFSET))(nullptr);
		}

	};
}

