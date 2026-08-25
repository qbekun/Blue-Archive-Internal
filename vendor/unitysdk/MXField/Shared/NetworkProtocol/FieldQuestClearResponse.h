#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldQuestDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDQUESTCLEARRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xE6EB90)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDQUESTCLEARRESPONSE_GET_QUEST_OFFSET UNITYSDK_OFFSET(0xE6EBA0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDQUESTCLEARRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xE6EBB0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDQUESTCLEARRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6EBC0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDQUESTCLEARRESPONSE_SET_QUEST_OFFSET UNITYSDK_OFFSET(0xE6EBD0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDQUESTCLEARRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xE6EBE0)

namespace MXField::Shared::NetworkProtocol
{
	inline static constexpr unsigned int FieldQuestClearResponse_TypeDefinitionIndex = 10529;

	class FieldQuestClearResponse : public Il2CppObject
	{
	public:
		::MXField::Shared::Model::FieldQuestDB* _Quest_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDQUESTCLEARRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Model::FieldQuestDB* get_Quest()
		{
			return ((::MXField::Shared::Model::FieldQuestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDQUESTCLEARRESPONSE_GET_QUEST_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDQUESTCLEARRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDQUESTCLEARRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Quest(::MXField::Shared::Model::FieldQuestDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldQuestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDQUESTCLEARRESPONSE_SET_QUEST_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDQUESTCLEARRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

