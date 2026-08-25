#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ClueSearchSaveDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHSUBMITRESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF465D0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHSUBMITRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF465E0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHSUBMITRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF465F0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHSUBMITRESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF46600)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHSUBMITRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF46610)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHSUBMITRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46620)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentClueSearchSubmitResponse_TypeDefinitionIndex = 11784;

	class EventContentClueSearchSubmitResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClueSearchSaveDB* _SaveDB_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::MX::GameLogic::DBModel::ClueSearchSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::ClueSearchSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHSUBMITRESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHSUBMITRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHSUBMITRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveDB(::MX::GameLogic::DBModel::ClueSearchSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClueSearchSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHSUBMITRESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHSUBMITRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCLUESEARCHSUBMITRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

