#pragma once
#include "../../../unitysdk.h"

namespace NPA::Ex::Steam { class NXPSteamErrorCode; }

namespace NPA::Ex::Steam
{
	inline static constexpr unsigned int NXPSteamErrorCode_TypeDefinitionIndex = 26071;

	class NXPSteamErrorCode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::Ex::Steam::NXPSteamErrorCode* OK; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* NETWORK_UNAVAILABLE; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* BASE; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* STEAM_DLL_NOT_LOADED; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* STEAM_PLATFORM_INVALID; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* STEAM_PLATFORM_INIT_FAILURE; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* STEAMSHARED_NOT_LOADED; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* STEAM_USERS_INVALID; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* STEAM_USERS_NOT_LOGGED_ON; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* TICKET_NO_CONNECTION; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* TICKET_EMPTY; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* TICK_DISABLED; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* STEAM_API_RESULT_BUILD_FAILED; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* STEAM_INIT_FAILED; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* TICKET_RESULT_BASE; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* FAILED_GET_ITEM_DEFINITION_COUNT; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* FAILED_GET_ITEM_DEFINITION_ID; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* INVALID_TRANS_ID_RECEIVED; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* FAILED_START_PURCHASE; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* FAILED_REQUEST_PRICES; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* PENDING_INVENTORY_CACHING; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* INVALID_PRODUCT_INFO; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* CANCELED_PURCHASE; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* DISABLE_OVERLAY; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* FAILED_TO_GET_PRODUCT_LIST; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* ALREADY_STARTED_PURCHASE; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* BEING_CACHED_DLC_PRODUCT; // 0x0
		::NPA::Ex::Steam::NXPSteamErrorCode* MAIN_STEAM_APP_IS_NOT_PUBLISHED; // 0x0

	};
}

