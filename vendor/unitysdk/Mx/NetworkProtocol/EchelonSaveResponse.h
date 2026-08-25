#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ECHELONSAVERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF425E0)
#define MX_NETWORKPROTOCOL_ECHELONSAVERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF425F0)
#define MX_NETWORKPROTOCOL_ECHELONSAVERESPONSE_GET_ECHELONDB_OFFSET UNITYSDK_OFFSET(0xF42600)
#define MX_NETWORKPROTOCOL_ECHELONSAVERESPONSE_SET_ECHELONDB_OFFSET UNITYSDK_OFFSET(0xF42610)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EchelonSaveResponse_TypeDefinitionIndex = 11632;

	class EchelonSaveResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EchelonDB* _EchelonDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONSAVERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONSAVERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EchelonDB* get_EchelonDB()
		{
			return ((::MX::GameLogic::DBModel::EchelonDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONSAVERESPONSE_GET_ECHELONDB_OFFSET))(nullptr);
		}

		::System::Void set_EchelonDB(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONSAVERESPONSE_SET_ECHELONDB_OFFSET))(arg, nullptr);
		}

	};
}

