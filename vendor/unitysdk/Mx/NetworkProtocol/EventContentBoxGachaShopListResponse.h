#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EventContentBoxGachaDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF45330)
#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF45340)
#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTRESPONSE_GET_BOXGACHADB_OFFSET UNITYSDK_OFFSET(0xF45350)
#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTRESPONSE_GET_BOXGACHAGROUPIDBYCOUNT_OFFSET UNITYSDK_OFFSET(0xF45360)
#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTRESPONSE_SET_BOXGACHADB_OFFSET UNITYSDK_OFFSET(0xF45370)
#define MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTRESPONSE_SET_BOXGACHAGROUPIDBYCOUNT_OFFSET UNITYSDK_OFFSET(0xF45380)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EventContentBoxGachaShopListResponse_TypeDefinitionIndex = 11734;

	class EventContentBoxGachaShopListResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EventContentBoxGachaDB* _BoxGachaDB_k__BackingField; // 0x50
		Il2CppObject* _BoxGachaGroupIdByCount_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EventContentBoxGachaDB* get_BoxGachaDB()
		{
			return ((::MX::GameLogic::DBModel::EventContentBoxGachaDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTRESPONSE_GET_BOXGACHADB_OFFSET))(nullptr);
		}

		Il2CppObject* get_BoxGachaGroupIdByCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTRESPONSE_GET_BOXGACHAGROUPIDBYCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_BoxGachaDB(::MX::GameLogic::DBModel::EventContentBoxGachaDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EventContentBoxGachaDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTRESPONSE_SET_BOXGACHADB_OFFSET))(arg, nullptr);
		}

		::System::Void set_BoxGachaGroupIdByCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_EVENTCONTENTBOXGACHASHOPLISTRESPONSE_SET_BOXGACHAGROUPIDBYCOUNT_OFFSET))(arg, nullptr);
		}

	};
}

