#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MailType; }
namespace FlatData { class DefaultMailExcel; }

#define MX_DATA_DEFAULTMAILINFO_SET_SENDPERIODFROM_OFFSET UNITYSDK_OFFSET(0x183CA80)
#define MX_DATA_DEFAULTMAILINFO_SET_SENDPERIODTO_OFFSET UNITYSDK_OFFSET(0x183CA90)
#define MX_DATA_DEFAULTMAILINFO_SET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0x183CAA0)
#define MX_DATA_DEFAULTMAILINFO_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0x183CAB0)
#define MX_DATA_DEFAULTMAILINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x183CAC0)
#define MX_DATA_DEFAULTMAILINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x183CAD0)
#define MX_DATA_DEFAULTMAILINFO_SET_REWARDS_OFFSET UNITYSDK_OFFSET(0x183CAE0)
#define MX_DATA_DEFAULTMAILINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x183CAF0)
#define MX_DATA_DEFAULTMAILINFO_GET_SENDPERIODTO_OFFSET UNITYSDK_OFFSET(0x183CDB0)
#define MX_DATA_DEFAULTMAILINFO_GET_SENDPERIODFROM_OFFSET UNITYSDK_OFFSET(0x183CDC0)
#define MX_DATA_DEFAULTMAILINFO_GET_MAILTYPE_OFFSET UNITYSDK_OFFSET(0x183CDD0)

namespace MX::Data
{
	inline static constexpr unsigned int DefaultMailInfo_TypeDefinitionIndex = 15773;

	class DefaultMailInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::FlatData::MailType* _MailType_k__BackingField; // 0x18
		::System::DateTime* _SendPeriodFrom_k__BackingField; // 0x20
		::System::DateTime* _SendPeriodTo_k__BackingField; // 0x28
		Il2CppObject* _Rewards_k__BackingField; // 0x30

		::System::Void set_SendPeriodFrom(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTMAILINFO_SET_SENDPERIODFROM_OFFSET))(arg, nullptr);
		}

		::System::Void set_SendPeriodTo(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTMAILINFO_SET_SENDPERIODTO_OFFSET))(arg, nullptr);
		}

		::System::Void set_MailType(::FlatData::MailType* arg)
		{
			((::System::Void(*)(::FlatData::MailType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTMAILINFO_SET_MAILTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rewards()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTMAILINFO_GET_REWARDS_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTMAILINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTMAILINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void set_Rewards(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTMAILINFO_SET_REWARDS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::FlatData::DefaultMailExcel* arg)
		{
			((::System::Void(*)(::FlatData::DefaultMailExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTMAILINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_SendPeriodTo()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTMAILINFO_GET_SENDPERIODTO_OFFSET))(nullptr);
		}

		::System::DateTime* get_SendPeriodFrom()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTMAILINFO_GET_SENDPERIODFROM_OFFSET))(nullptr);
		}

		::FlatData::MailType* get_MailType()
		{
			return (return (::FlatData::MailType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_DEFAULTMAILINFO_GET_MAILTYPE_OFFSET))(nullptr);
		}

	};
}

