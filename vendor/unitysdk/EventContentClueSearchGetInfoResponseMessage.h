#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClueSearchSaveDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define EVENTCONTENTCLUESEARCHGETINFORESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F65FA0)
#define EVENTCONTENTCLUESEARCHGETINFORESPONSEMESSAGE_GET_SAVEDB_OFFSET UNITYSDK_OFFSET(0x1F662F0)

	inline static constexpr unsigned int EventContentClueSearchGetInfoResponseMessage_TypeDefinitionIndex = 2437;

	class EventContentClueSearchGetInfoResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClueSearchSaveDB* _SaveDB_k__BackingField; // 0x20

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::GameLogic::DBModel::ClueSearchSaveDB* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::GameLogic::DBModel::ClueSearchSaveDB*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHGETINFORESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::ClueSearchSaveDB* get_SaveDB()
		{
			return ((::MX::GameLogic::DBModel::ClueSearchSaveDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTCLUESEARCHGETINFORESPONSEMESSAGE_GET_SAVEDB_OFFSET))(nullptr);
		}

	};

