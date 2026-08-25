#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class FriendDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14330)
#define MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_SET_ALLOWCOPY_OFFSET UNITYSDK_OFFSET(0xF14340)
#define MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_SET_FRIENDDB_OFFSET UNITYSDK_OFFSET(0xF14350)
#define MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_SET_CAFEDBS_OFFSET UNITYSDK_OFFSET(0xF14360)
#define MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_GET_ALLOWCOPY_OFFSET UNITYSDK_OFFSET(0xF14370)
#define MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_GET_CAFEDBS_OFFSET UNITYSDK_OFFSET(0xF14380)
#define MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_GET_FRIENDDB_OFFSET UNITYSDK_OFFSET(0xF14390)
#define MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF143A0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeTravelResponse_TypeDefinitionIndex = 11401;

	class CafeTravelResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::FriendDB* _FriendDB_k__BackingField; // 0x50
		Il2CppObject* _CafeDBs_k__BackingField; // 0x58
		::System::Boolean _AllowCopy_k__BackingField; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AllowCopy(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_SET_ALLOWCOPY_OFFSET))(arg, nullptr);
		}

		::System::Void set_FriendDB(::MX::GameLogic::DBModel::FriendDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FriendDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_SET_FRIENDDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_CafeDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_SET_CAFEDBS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllowCopy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_GET_ALLOWCOPY_OFFSET))(nullptr);
		}

		Il2CppObject* get_CafeDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_GET_CAFEDBS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::FriendDB* get_FriendDB()
		{
			return ((::MX::GameLogic::DBModel::FriendDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_GET_FRIENDDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

