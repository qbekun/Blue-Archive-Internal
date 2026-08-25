#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestInfoDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONRESPONSE_SET_CONQUESTECHELONDBS_OFFSET UNITYSDK_OFFSET(0xF40400)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONRESPONSE_GET_CONQUESTINFODB_OFFSET UNITYSDK_OFFSET(0xF40410)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF40420)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONRESPONSE_SET_CONQUESTINFODB_OFFSET UNITYSDK_OFFSET(0xF40430)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONRESPONSE_GET_CONQUESTECHELONDBS_OFFSET UNITYSDK_OFFSET(0xF40440)
#define MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF40450)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ConquestConquerDeployEchelonResponse_TypeDefinitionIndex = 11550;

	class ConquestConquerDeployEchelonResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ConquestEchelonDBs_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::ConquestInfoDB* _ConquestInfoDB_k__BackingField; // 0x58

		::System::Void set_ConquestEchelonDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONRESPONSE_SET_CONQUESTECHELONDBS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::ConquestInfoDB* get_ConquestInfoDB()
		{
			return ((::MX::GameLogic::DBModel::ConquestInfoDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONRESPONSE_GET_CONQUESTINFODB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ConquestInfoDB(::MX::GameLogic::DBModel::ConquestInfoDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConquestInfoDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONRESPONSE_SET_CONQUESTINFODB_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConquestEchelonDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONRESPONSE_GET_CONQUESTECHELONDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CONQUESTCONQUERDEPLOYECHELONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

