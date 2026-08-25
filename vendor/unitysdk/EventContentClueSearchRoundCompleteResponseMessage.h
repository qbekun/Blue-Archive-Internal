#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClueSearchSaveDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTCLUESEARCHROUNDCOMPLETERESPONSEMESSAGE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0x1F668F0)
#define EVENTCONTENTCLUESEARCHROUNDCOMPLETERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F66560)
#define EVENTCONTENTCLUESEARCHROUNDCOMPLETERESPONSEMESSAGE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0x1F66900)

	inline static constexpr unsigned int EventContentClueSearchRoundCompleteResponseMessage_TypeDefinitionIndex = 2440;

	class EventContentClueSearchRoundCompleteResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClueSearchSaveDB* _SaveDB_k__BackingField; // 0x20
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x28

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHROUNDCOMPLETERESPONSEMESSAGE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::GameLogic::DBModel::ClueSearchSaveDB* arg2, ::MX::GameLogic::Parcel::ParcelResultDB* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::GameLogic::DBModel::ClueSearchSaveDB*, ::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHROUNDCOMPLETERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::MX::GameLogic::DBModel::ClueSearchSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::ClueSearchSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHROUNDCOMPLETERESPONSEMESSAGE_GET_SAVEDB_OFFSET))(nullptr);
		}

	};

