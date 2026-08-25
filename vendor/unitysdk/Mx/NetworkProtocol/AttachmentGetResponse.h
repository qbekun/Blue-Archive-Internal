#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ATTACHMENTGETRESPONSE_GET_ACCOUNTATTACHMENTDB_OFFSET UNITYSDK_OFFSET(0xF11460)
#define MX_NETWORKPROTOCOL_ATTACHMENTGETRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11470)
#define MX_NETWORKPROTOCOL_ATTACHMENTGETRESPONSE_SET_ACCOUNTATTACHMENTDB_OFFSET UNITYSDK_OFFSET(0xF11480)
#define MX_NETWORKPROTOCOL_ATTACHMENTGETRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11490)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AttachmentGetResponse_TypeDefinitionIndex = 11308;

	class AttachmentGetResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountAttachmentDB* _AccountAttachmentDB_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::AccountAttachmentDB* get_AccountAttachmentDB()
		{
			return ((::MX::GameLogic::DBModel::AccountAttachmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTGETRESPONSE_GET_ACCOUNTATTACHMENTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTGETRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AccountAttachmentDB(::MX::GameLogic::DBModel::AccountAttachmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountAttachmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTGETRESPONSE_SET_ACCOUNTATTACHMENTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTGETRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

