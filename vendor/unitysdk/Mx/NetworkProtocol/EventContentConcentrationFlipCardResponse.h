#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentConcentrationSaveDB; }
namespace MX::GameLogic::DBModel { class EventContentConcentrationCardDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_SET_SECOND_OFFSET UNITYSDK_OFFSET(0xF462D0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_GET_SECOND_OFFSET UNITYSDK_OFFSET(0xF462E0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_GET_FIRST_OFFSET UNITYSDK_OFFSET(0xF462F0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46300)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF46310)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46320)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_SET_FIRST_OFFSET UNITYSDK_OFFSET(0xF46330)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_SET_SAVEDB_OFFSET UNITYSDK_OFFSET(0xF46340)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF46350)
#define MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF46360)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentConcentrationFlipCardResponse_TypeDefinitionIndex = 11776;

	class EventContentConcentrationFlipCardResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* _SaveDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::EventContentConcentrationCardDB* _First_k__BackingField; // 0x58
		::MX::GameLogic::DBModel::EventContentConcentrationCardDB* _Second_k__BackingField; // 0x60
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x68

		::System::Void set_Second(::MX::GameLogic::DBModel::EventContentConcentrationCardDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentConcentrationCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_SET_SECOND_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentConcentrationCardDB* get_Second()
		{
			return ((::MX::GameLogic::DBModel::EventContentConcentrationCardDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_GET_SECOND_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentConcentrationCardDB* get_First()
		{
			return ((::MX::GameLogic::DBModel::EventContentConcentrationCardDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_GET_FIRST_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentConcentrationSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_GET_SAVEDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_First(::MX::GameLogic::DBModel::EventContentConcentrationCardDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentConcentrationCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_SET_FIRST_OFFSET))(arg, nullptr);
		}

		::System::Void set_SaveDB(::MX::GameLogic::DBModel::EventContentConcentrationSaveDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentConcentrationSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_SET_SAVEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTCONCENTRATIONFLIPCARDRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

	};
}

