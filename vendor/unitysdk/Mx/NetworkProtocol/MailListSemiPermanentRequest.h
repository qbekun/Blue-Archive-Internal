#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MailSortingRule; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_GET_ISREADMAIL_OFFSET UNITYSDK_OFFSET(0xF47C40)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_SET_ISDESCENDING_OFFSET UNITYSDK_OFFSET(0xF47C50)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_SET_MAILSORTINGRULE_OFFSET UNITYSDK_OFFSET(0xF47C60)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_GET_PIVOTINDEX_OFFSET UNITYSDK_OFFSET(0xF47C70)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_GET_PIVOTTIME_OFFSET UNITYSDK_OFFSET(0xF47C80)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47C90)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_GET_ISDESCENDING_OFFSET UNITYSDK_OFFSET(0xF47CA0)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47CB0)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_SET_PIVOTINDEX_OFFSET UNITYSDK_OFFSET(0xF47CC0)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_SET_ISREADMAIL_OFFSET UNITYSDK_OFFSET(0xF47CD0)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_GET_MAILSORTINGRULE_OFFSET UNITYSDK_OFFSET(0xF47CE0)
#define MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_SET_PIVOTTIME_OFFSET UNITYSDK_OFFSET(0xF47CF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MailListSemiPermanentRequest_TypeDefinitionIndex = 11843;

	class MailListSemiPermanentRequest : public Il2CppObject
	{
	public:
		::System::Boolean _IsReadMail_k__BackingField; // 0x40
		::System::DateTime* _PivotTime_k__BackingField; // 0x48
		::System::Int64 _PivotIndex_k__BackingField; // 0x50
		::FlatData::MailSortingRule* _mailSortingRule_k__BackingField; // 0x58
		::System::Boolean _IsDescending_k__BackingField; // 0x5C

		::System::Boolean get_IsReadMail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_GET_ISREADMAIL_OFFSET))(nullptr);
		}

		::System::Void set_IsDescending(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_SET_ISDESCENDING_OFFSET))(arg, nullptr);
		}

		::System::Void set_mailSortingRule(::FlatData::MailSortingRule* arg)
		{
			((::System::Void(*)(::FlatData::MailSortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_SET_MAILSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PivotIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_GET_PIVOTINDEX_OFFSET))(nullptr);
		}

		::System::DateTime* get_PivotTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_GET_PIVOTTIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDescending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_GET_ISDESCENDING_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_PivotIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_SET_PIVOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsReadMail(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_SET_ISREADMAIL_OFFSET))(arg, nullptr);
		}

		::FlatData::MailSortingRule* get_mailSortingRule()
		{
			return ((::FlatData::MailSortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_GET_MAILSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void set_PivotTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTSEMIPERMANENTREQUEST_SET_PIVOTTIME_OFFSET))(arg, nullptr);
		}

	};
}

