#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF115C0)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF115D0)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHRESPONSE_SET_ATTACHMENTDB_OFFSET UNITYSDK_OFFSET(0xF115E0)
#define MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHRESPONSE_GET_ATTACHMENTDB_OFFSET UNITYSDK_OFFSET(0xF115F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AttachmentEmblemAttachResponse_TypeDefinitionIndex = 11314;

	class AttachmentEmblemAttachResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountAttachmentDB* _AttachmentDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AttachmentDB(::MX::GameLogic::DBModel::AccountAttachmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountAttachmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHRESPONSE_SET_ATTACHMENTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountAttachmentDB* get_AttachmentDB()
		{
			return ((::MX::GameLogic::DBModel::AccountAttachmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ATTACHMENTEMBLEMATTACHRESPONSE_GET_ATTACHMENTDB_OFFSET))(nullptr);
		}

	};
}

