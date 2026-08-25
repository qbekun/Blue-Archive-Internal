#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_GET_NODEID_OFFSET UNITYSDK_OFFSET(0xF3FD20)
#define MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_SET_SIMULATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xF3FD30)
#define MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3FD40)
#define MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_GET_SIMULATIONCOUNT_OFFSET UNITYSDK_OFFSET(0xF3FD50)
#define MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_SET_PARCELIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0xF3FD60)
#define MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3FD70)
#define MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_GET_PARCELIDANDCOUNT_OFFSET UNITYSDK_OFFSET(0xF3FD80)
#define MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_SET_NODEID_OFFSET UNITYSDK_OFFSET(0xF3FD90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftSimulateCheatResponse_TypeDefinitionIndex = 11539;

	class CraftSimulateCheatResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ParcelIdAndCount_k__BackingField; // 0x50
		::System::Int64 _SimulationCount_k__BackingField; // 0x58
		::System::Int64 _NodeId_k__BackingField; // 0x60

		::System::Int64 get_NodeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_GET_NODEID_OFFSET))(nullptr);
		}

		::System::Void set_SimulationCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_SET_SIMULATIONCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_SimulationCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_GET_SIMULATIONCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ParcelIdAndCount(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_SET_PARCELIDANDCOUNT_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParcelIdAndCount()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_GET_PARCELIDANDCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_NodeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSIMULATECHEATRESPONSE_SET_NODEID_OFFSET))(arg, nullptr);
		}

	};
}

