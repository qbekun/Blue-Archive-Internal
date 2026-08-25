#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ClanDB; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CLANSETTINGRESPONSEMESSAGE_SET_CLANDB_OFFSET UNITYSDK_OFFSET(0x1F2B0C0)
#define CLANSETTINGRESPONSEMESSAGE_GET_CLANDB_OFFSET UNITYSDK_OFFSET(0x1F2B0D0)
#define CLANSETTINGRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2ADA0)

	inline static constexpr unsigned int ClanSettingResponseMessage_TypeDefinitionIndex = 2205;

	class ClanSettingResponseMessage : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ClanDB* _ClanDB_k__BackingField; // 0x20

		::System::Void set_ClanDB(::MX::GameLogic::DBModel::ClanDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGRESPONSEMESSAGE_SET_CLANDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ClanDB* get_ClanDB()
		{
			return ((::MX::GameLogic::DBModel::ClanDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGRESPONSEMESSAGE_GET_CLANDB_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::GameLogic::DBModel::ClanDB* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::GameLogic::DBModel::ClanDB*, ::PVOID))((::PBYTE)hIl2Cpp + CLANSETTINGRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

