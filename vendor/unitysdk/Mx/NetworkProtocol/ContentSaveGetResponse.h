#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ContentSaveDB; }
namespace MX::GameLogic::DBModel { class EventContentChangeDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_GET_HASVALIDDATA_OFFSET UNITYSDK_OFFSET(0xF414A0)
#define MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_SET_EVENTCONTENTCHANGEDB_OFFSET UNITYSDK_OFFSET(0xF414B0)
#define MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF414C0)
#define MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_GET_EVENTCONTENTCHANGEDB_OFFSET UNITYSDK_OFFSET(0xF414D0)
#define MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF414E0)
#define MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_GET_CONTENTSAVEDB_OFFSET UNITYSDK_OFFSET(0xF414F0)
#define MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_SET_CONTENTSAVEDB_OFFSET UNITYSDK_OFFSET(0xF41500)
#define MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_SET_HASVALIDDATA_OFFSET UNITYSDK_OFFSET(0xF41510)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ContentSaveGetResponse_TypeDefinitionIndex = 11582;

	class ContentSaveGetResponse : public Il2CppObject
	{
	public:
		::System::Boolean _HasValidData_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ContentSaveDB* _ContentSaveDB_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::EventContentChangeDB* _EventContentChangeDB_k__BackingField; // 0x60

		::System::Boolean get_HasValidData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_GET_HASVALIDDATA_OFFSET))(nullptr);
		}

		::System::Void set_EventContentChangeDB(::MX::GameLogic::DBModel::EventContentChangeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentChangeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_SET_EVENTCONTENTCHANGEDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentChangeDB* get_EventContentChangeDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentChangeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_GET_EVENTCONTENTCHANGEDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ContentSaveDB* get_ContentSaveDB()
		{
			return ((::MX::GameLogic::DBModel::ContentSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_GET_CONTENTSAVEDB_OFFSET))(nullptr);
		}

		::System::Void set_ContentSaveDB(::MX::GameLogic::DBModel::ContentSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ContentSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_SET_CONTENTSAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_HasValidData(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONTENTSAVEGETRESPONSE_SET_HASVALIDDATA_OFFSET))(arg, nullptr);
		}

	};
}

