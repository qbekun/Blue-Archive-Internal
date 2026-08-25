#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFEOPENRESPONSE_SET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF14270)
#define MX_NETWORKPROTOCOL_CAFEOPENRESPONSE_GET_FURNITUREDBS_OFFSET UNITYSDK_OFFSET(0xF14280)
#define MX_NETWORKPROTOCOL_CAFEOPENRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14290)
#define MX_NETWORKPROTOCOL_CAFEOPENRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF142A0)
#define MX_NETWORKPROTOCOL_CAFEOPENRESPONSE_SET_OPENEDCAFEDB_OFFSET UNITYSDK_OFFSET(0xF142B0)
#define MX_NETWORKPROTOCOL_CAFEOPENRESPONSE_GET_OPENEDCAFEDB_OFFSET UNITYSDK_OFFSET(0xF142C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeOpenResponse_TypeDefinitionIndex = 11399;

	class CafeOpenResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CafeDB* _OpenedCafeDB_k__BackingField; // 0x50
		Il2CppObject* _FurnitureDBs_k__BackingField; // 0x58

		::System::Void set_FurnitureDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEOPENRESPONSE_SET_FURNITUREDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FurnitureDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEOPENRESPONSE_GET_FURNITUREDBS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEOPENRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEOPENRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_OpenedCafeDB(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEOPENRESPONSE_SET_OPENEDCAFEDB_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* get_OpenedCafeDB()
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFEOPENRESPONSE_GET_OPENEDCAFEDB_OFFSET))(nullptr);
		}

	};
}

