#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF40880)
#define MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40890)
#define MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTRESPONSE_GET_CONQUESTEVENTOBJECTDBWRAPPER_OFFSET UNITYSDK_OFFSET(0xF408A0)
#define MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTRESPONSE_SET_CONQUESTEVENTOBJECTDBWRAPPER_OFFSET UNITYSDK_OFFSET(0xF408B0)
#define MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF408C0)
#define MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF408D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestTakeEventObjectResponse_TypeDefinitionIndex = 11558;

	class ConquestTakeEventObjectResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50
		Il2CppObject* _ConquestEventObjectDBWrapper_k__BackingField; // 0x58

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConquestEventObjectDBWrapper()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTRESPONSE_GET_CONQUESTEVENTOBJECTDBWRAPPER_OFFSET))(nullptr);
		}

		::System::Void set_ConquestEventObjectDBWrapper(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTRESPONSE_SET_CONQUESTEVENTOBJECTDBWRAPPER_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTTAKEEVENTOBJECTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

