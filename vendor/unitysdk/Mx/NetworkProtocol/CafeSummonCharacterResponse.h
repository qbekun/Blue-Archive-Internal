#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CafeDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF14090)
#define MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERRESPONSE_GET_CAFEDBS_OFFSET UNITYSDK_OFFSET(0xF140A0)
#define MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERRESPONSE_SET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF140B0)
#define MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERRESPONSE_SET_CAFEDBS_OFFSET UNITYSDK_OFFSET(0xF140C0)
#define MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF140D0)
#define MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERRESPONSE_GET_CAFEDB_OFFSET UNITYSDK_OFFSET(0xF140E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeSummonCharacterResponse_TypeDefinitionIndex = 11393;

	class CafeSummonCharacterResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CafeDB* _CafeDB_k__BackingField; // 0x50
		Il2CppObject* _CafeDBs_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_CafeDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERRESPONSE_GET_CAFEDBS_OFFSET))(nullptr);
		}

		::System::Void set_CafeDB(::MX::GameLogic::DBModel::CafeDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CafeDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERRESPONSE_SET_CAFEDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_CafeDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERRESPONSE_SET_CAFEDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CafeDB* get_CafeDB()
		{
			return ((::MX::GameLogic::DBModel::CafeDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFESUMMONCHARACTERRESPONSE_GET_CAFEDB_OFFSET))(nullptr);
		}

	};
}

