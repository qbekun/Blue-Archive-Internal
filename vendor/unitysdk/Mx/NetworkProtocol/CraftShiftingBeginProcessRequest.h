#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_SET_RECIPEID_OFFSET UNITYSDK_OFFSET(0xF41E60)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_GET_RECIPEID_OFFSET UNITYSDK_OFFSET(0xF41E70)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41E80)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF41E90)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_SET_CONSUMEREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF41EA0)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xF41EB0)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF41EC0)
#define MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_GET_CONSUMEREQUESTDB_OFFSET UNITYSDK_OFFSET(0xF41ED0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CraftShiftingBeginProcessRequest_TypeDefinitionIndex = 11607;

	class CraftShiftingBeginProcessRequest : public Il2CppObject
	{
	public:
		::System::Int64 _SlotId_k__BackingField; // 0x40
		::System::Int64 _RecipeId_k__BackingField; // 0x48
		::MX::GameLogic::DBModel::ConsumeRequestDB* _ConsumeRequestDB_k__BackingField; // 0x50

		::System::Void set_RecipeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_SET_RECIPEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RecipeId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_GET_RECIPEID_OFFSET))(nullptr);
		}

		::System::Int64 get_SlotId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_GET_SLOTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeRequestDB(::MX::GameLogic::DBModel::ConsumeRequestDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_SET_CONSUMEREQUESTDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_SlotId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* get_ConsumeRequestDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CRAFTSHIFTINGBEGINPROCESSREQUEST_GET_CONSUMEREQUESTDB_OFFSET))(nullptr);
		}

	};
}

