#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MailSortingRule; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MAILLISTREQUEST_GET_MAILSORTINGRULE_OFFSET UNITYSDK_OFFSET(0xF479E0)
#define MX_NETWORKPROTOCOL_MAILLISTREQUEST_SET_PIVOTINDEX_OFFSET UNITYSDK_OFFSET(0xF479F0)
#define MX_NETWORKPROTOCOL_MAILLISTREQUEST_GET_PIVOTTIME_OFFSET UNITYSDK_OFFSET(0xF47A00)
#define MX_NETWORKPROTOCOL_MAILLISTREQUEST_SET_ISDESCENDING_OFFSET UNITYSDK_OFFSET(0xF47A10)
#define MX_NETWORKPROTOCOL_MAILLISTREQUEST_GET_ISREADMAIL_OFFSET UNITYSDK_OFFSET(0xF47A20)
#define MX_NETWORKPROTOCOL_MAILLISTREQUEST_SET_MAILSORTINGRULE_OFFSET UNITYSDK_OFFSET(0xF47A30)
#define MX_NETWORKPROTOCOL_MAILLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47A40)
#define MX_NETWORKPROTOCOL_MAILLISTREQUEST_SET_ISREADMAIL_OFFSET UNITYSDK_OFFSET(0xF47A50)
#define MX_NETWORKPROTOCOL_MAILLISTREQUEST_GET_ISDESCENDING_OFFSET UNITYSDK_OFFSET(0xF47A60)
#define MX_NETWORKPROTOCOL_MAILLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47A70)
#define MX_NETWORKPROTOCOL_MAILLISTREQUEST_GET_PIVOTINDEX_OFFSET UNITYSDK_OFFSET(0xF47A80)
#define MX_NETWORKPROTOCOL_MAILLISTREQUEST_SET_PIVOTTIME_OFFSET UNITYSDK_OFFSET(0xF47A90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MailListRequest_TypeDefinitionIndex = 11837;

	class MailListRequest : public Il2CppObject
	{
	public:
		::System::Boolean _IsReadMail_k__BackingField; // 0x40
		::System::DateTime* _PivotTime_k__BackingField; // 0x48
		::System::Int64 _PivotIndex_k__BackingField; // 0x50
		::FlatData::MailSortingRule* _mailSortingRule_k__BackingField; // 0x58
		::System::Boolean _IsDescending_k__BackingField; // 0x5C

		::FlatData::MailSortingRule* get_mailSortingRule()
		{
			return ((::FlatData::MailSortingRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTREQUEST_GET_MAILSORTINGRULE_OFFSET))(nullptr);
		}

		::System::Void set_PivotIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTREQUEST_SET_PIVOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::DateTime* get_PivotTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTREQUEST_GET_PIVOTTIME_OFFSET))(nullptr);
		}

		::System::Void set_IsDescending(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTREQUEST_SET_ISDESCENDING_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReadMail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTREQUEST_GET_ISREADMAIL_OFFSET))(nullptr);
		}

		::System::Void set_mailSortingRule(::FlatData::MailSortingRule* arg)
		{
			((::System::Void(*)(::FlatData::MailSortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTREQUEST_SET_MAILSORTINGRULE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsReadMail(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTREQUEST_SET_ISREADMAIL_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDescending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTREQUEST_GET_ISDESCENDING_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_PivotIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTREQUEST_GET_PIVOTINDEX_OFFSET))(nullptr);
		}

		::System::Void set_PivotTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MAILLISTREQUEST_SET_PIVOTTIME_OFFSET))(arg, nullptr);
		}

	};
}

