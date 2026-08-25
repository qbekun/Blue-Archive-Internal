#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountAttachmentDB; }
class AttachmentEmblemObject;
namespace MX::NetworkProtocol { class ResponsePacket; }
namespace MX::NetworkProtocol { class AttachmentGetResponse; }

#define ATTACHMENTOBJECT_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1820600)
#define ATTACHMENTOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x18278C0)
#define ATTACHMENTOBJECT_SYNC_EMBLEMPACKET_OFFSET UNITYSDK_OFFSET(0x182D630)
#define ATTACHMENTOBJECT_GET_ATTACHMENTDB_OFFSET UNITYSDK_OFFSET(0x182D750)
#define ATTACHMENTOBJECT_SYNCLOGIN_OFFSET UNITYSDK_OFFSET(0x182D760)
#define ATTACHMENTOBJECT_GET_EMBLEM_OFFSET UNITYSDK_OFFSET(0x182D790)
#define ATTACHMENTOBJECT_SET_EMBLEM_OFFSET UNITYSDK_OFFSET(0x182D7A0)
#define ATTACHMENTOBJECT_SET_ATTACHMENTDB_OFFSET UNITYSDK_OFFSET(0x182D7B0)

	inline static constexpr unsigned int AttachmentObject_TypeDefinitionIndex = 1315;

	class AttachmentObject : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountAttachmentDB* _AttachmentDB_k__BackingField; // 0x10
		AttachmentEmblemObject* _Emblem_k__BackingField; // 0x18

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTOBJECT_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Sync_EmblemPacket(::MX::NetworkProtocol::ResponsePacket* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ResponsePacket*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTOBJECT_SYNC_EMBLEMPACKET_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::AccountAttachmentDB* get_AttachmentDB()
		{
			return ((::MX::GameLogic::DBModel::AccountAttachmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTOBJECT_GET_ATTACHMENTDB_OFFSET))(nullptr);
		}

		::System::Void SyncLogin(::MX::NetworkProtocol::AttachmentGetResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::AttachmentGetResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTOBJECT_SYNCLOGIN_OFFSET))(arg, nullptr);
		}

		AttachmentEmblemObject* get_Emblem()
		{
			return ((AttachmentEmblemObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTOBJECT_GET_EMBLEM_OFFSET))(nullptr);
		}

		::System::Void set_Emblem(AttachmentEmblemObject* arg)
		{
			((::System::Void(*)(AttachmentEmblemObject*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTOBJECT_SET_EMBLEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_AttachmentDB(::MX::GameLogic::DBModel::AccountAttachmentDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountAttachmentDB*, ::PVOID))((::PBYTE)hIl2Cpp + ATTACHMENTOBJECT_SET_ATTACHMENTDB_OFFSET))(arg, nullptr);
		}

	};

