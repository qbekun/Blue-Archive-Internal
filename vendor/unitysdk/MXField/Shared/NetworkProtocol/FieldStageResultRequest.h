#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_SET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xE6EE30)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6EE40)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_GET_FIELDSEASONID_OFFSET UNITYSDK_OFFSET(0xE6EE50)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xE6EE60)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_SET_PASSCHECKCHARACTER_OFFSET UNITYSDK_OFFSET(0xE6EE70)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_GET_PASSCHECKCHARACTER_OFFSET UNITYSDK_OFFSET(0xE6EE80)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_SET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xE6EE90)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_GET_SUMMARY_OFFSET UNITYSDK_OFFSET(0xE6EEA0)

namespace MXField::Shared::NetworkProtocol
{
	inline static constexpr unsigned int FieldStageResultRequest_TypeDefinitionIndex = 10536;

	class FieldStageResultRequest : public Il2CppObject
	{
	public:
		::System::Int64 _FieldSeasonId_k__BackingField; // 0x40
		::System::Boolean _PassCheckCharacter_k__BackingField; // 0x48
		::MX::Logic::Battles::Summary::BattleSummary* _Summary_k__BackingField; // 0x50

		::System::Void set_FieldSeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_SET_FIELDSEASONID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_FieldSeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_GET_FIELDSEASONID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_PassCheckCharacter(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_SET_PASSCHECKCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PassCheckCharacter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_GET_PASSCHECKCHARACTER_OFFSET))(nullptr);
		}

		::System::Void set_Summary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_SET_SUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_Summary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSTAGERESULTREQUEST_GET_SUMMARY_OFFSET))(nullptr);
		}

	};
}

