#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class IssueAlertTypeCode; }

#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_ISSUEALERTID_OFFSET UNITYSDK_OFFSET(0x1001440)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_URL_OFFSET UNITYSDK_OFFSET(0x1001450)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1001460)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_ENDDATE_OFFSET UNITYSDK_OFFSET(0x1001470)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1001480)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x1001490)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_.CTOR_OFFSET UNITYSDK_OFFSET(0x10014A0)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x10014B0)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_PUBLISHID_OFFSET UNITYSDK_OFFSET(0x10014C0)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_ISSUEALERTTYPE_OFFSET UNITYSDK_OFFSET(0x10014D0)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_SUBJECT_OFFSET UNITYSDK_OFFSET(0x10014E0)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_URL_OFFSET UNITYSDK_OFFSET(0x10014F0)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_PUBLISHID_OFFSET UNITYSDK_OFFSET(0x1001500)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_ISSUEALERTTYPE_OFFSET UNITYSDK_OFFSET(0x1001510)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_ISSUEALERTID_OFFSET UNITYSDK_OFFSET(0x1001520)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1001530)
#define MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_STARTDATE_OFFSET UNITYSDK_OFFSET(0x1001540)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int IssueAlertInfoDB_TypeDefinitionIndex = 12638;

	class IssueAlertInfoDB : public Il2CppObject
	{
	public:
		::System::Int32 _IssueAlertId_k__BackingField; // 0x10
		::MX::GameLogic::DBModel::IssueAlertTypeCode* _IssueAlertType_k__BackingField; // 0x14
		::System::DateTime* _StartDate_k__BackingField; // 0x18
		::System::DateTime* _EndDate_k__BackingField; // 0x20
		::System::Byte _DisplayOrder_k__BackingField; // 0x28
		::System::Int32 _PublishId_k__BackingField; // 0x2C
		::System::String* _Url_k__BackingField; // 0x30
		::System::String* _Subject_k__BackingField; // 0x38

		::System::Int32 get_IssueAlertId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_ISSUEALERTID_OFFSET))(nullptr);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_URL_OFFSET))(nullptr);
		}

		::System::Void set_EndDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_ENDDATE_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_EndDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_ENDDATE_OFFSET))(nullptr);
		}

		::System::Void set_DisplayOrder(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_DISPLAYORDER_OFFSET))(arg, nullptr);
		}

		::System::Void set_Subject(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_SUBJECT_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StartDate(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_STARTDATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PublishId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_PUBLISHID_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::IssueAlertTypeCode* get_IssueAlertType()
		{
			return ((::MX::GameLogic::DBModel::IssueAlertTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_ISSUEALERTTYPE_OFFSET))(nullptr);
		}

		::System::String* get_Subject()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_SUBJECT_OFFSET))(nullptr);
		}

		::System::Void set_Url(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_URL_OFFSET))(str, nullptr);
		}

		::System::Void set_PublishId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_PUBLISHID_OFFSET))(arg, nullptr);
		}

		::System::Void set_IssueAlertType(::MX::GameLogic::DBModel::IssueAlertTypeCode* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::IssueAlertTypeCode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_ISSUEALERTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IssueAlertId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_SET_ISSUEALERTID_OFFSET))(arg, nullptr);
		}

		::System::Byte get_DisplayOrder()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::DateTime* get_StartDate()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ISSUEALERTINFODB_GET_STARTDATE_OFFSET))(nullptr);
		}

	};
}

