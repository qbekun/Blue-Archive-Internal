#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentBoxGachaDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPREFRESHRESPONSE_GET_BOXGACHAGROUPIDBYCOUNT_OFFSET UNITYSDK_OFFSET(0xF454F0)
#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPREFRESHRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45500)
#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPREFRESHRESPONSE_SET_BOXGACHADB_OFFSET UNITYSDK_OFFSET(0xF45510)
#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPREFRESHRESPONSE_SET_BOXGACHAGROUPIDBYCOUNT_OFFSET UNITYSDK_OFFSET(0xF45520)
#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPREFRESHRESPONSE_GET_BOXGACHADB_OFFSET UNITYSDK_OFFSET(0xF45530)
#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPREFRESHRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45540)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentBoxGachaShopRefreshResponse_TypeDefinitionIndex = 11738;

	class EventContentBoxGachaShopRefreshResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentBoxGachaDB* _BoxGachaDB_k__BackingField; // 0x50
		Il2CppObject* _BoxGachaGroupIdByCount_k__BackingField; // 0x58

		Il2CppObject* get_BoxGachaGroupIdByCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPREFRESHRESPONSE_GET_BOXGACHAGROUPIDBYCOUNT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPREFRESHRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_BoxGachaDB(::MX::GameLogic::DBModel::EventContentBoxGachaDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentBoxGachaDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPREFRESHRESPONSE_SET_BOXGACHADB_OFFSET))(arg, nullptr);
		}

		::System::Void set_BoxGachaGroupIdByCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPREFRESHRESPONSE_SET_BOXGACHAGROUPIDBYCOUNT_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EventContentBoxGachaDB* get_BoxGachaDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentBoxGachaDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPREFRESHRESPONSE_GET_BOXGACHADB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPREFRESHRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

