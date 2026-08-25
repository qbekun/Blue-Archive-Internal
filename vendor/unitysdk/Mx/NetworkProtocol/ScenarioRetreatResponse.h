#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIORETREATRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4E330)
#define MX_NETWORKPROTOCOL_SCENARIORETREATRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4E340)
#define MX_NETWORKPROTOCOL_SCENARIORETREATRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4E350)
#define MX_NETWORKPROTOCOL_SCENARIORETREATRESPONSE_GET_RELEASEDECHELONNUMBERS_OFFSET UNITYSDK_OFFSET(0xF4E360)
#define MX_NETWORKPROTOCOL_SCENARIORETREATRESPONSE_SET_RELEASEDECHELONNUMBERS_OFFSET UNITYSDK_OFFSET(0xF4E370)
#define MX_NETWORKPROTOCOL_SCENARIORETREATRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF4E380)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioRetreatResponse_TypeDefinitionIndex = 12092;

	class ScenarioRetreatResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ReleasedEchelonNumbers_k__BackingField; // 0x50
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORETREATRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORETREATRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORETREATRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_ReleasedEchelonNumbers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORETREATRESPONSE_GET_RELEASEDECHELONNUMBERS_OFFSET))(nullptr);
		}

		::System::Void set_ReleasedEchelonNumbers(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORETREATRESPONSE_SET_RELEASEDECHELONNUMBERS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIORETREATRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

