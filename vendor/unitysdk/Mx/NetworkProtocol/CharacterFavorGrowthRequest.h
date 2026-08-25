#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHREQUEST_GET_TARGETCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xF15BA0)
#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15BB0)
#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHREQUEST_GET_CONSUMEITEMDBIDSANDCOUNTS_OFFSET UNITYSDK_OFFSET(0xF15BC0)
#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15BD0)
#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHREQUEST_SET_CONSUMEITEMDBIDSANDCOUNTS_OFFSET UNITYSDK_OFFSET(0xF15BE0)
#define MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHREQUEST_SET_TARGETCHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xF15BF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterFavorGrowthRequest_TypeDefinitionIndex = 11466;

	class CharacterFavorGrowthRequest : public Il2CppObject
	{
	public:
		::System::Int64 _TargetCharacterDBId_k__BackingField; // 0x40
		Il2CppObject* _ConsumeItemDBIdsAndCounts_k__BackingField; // 0x48

		::System::Int64 get_TargetCharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHREQUEST_GET_TARGETCHARACTERDBID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_ConsumeItemDBIdsAndCounts()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHREQUEST_GET_CONSUMEITEMDBIDSANDCOUNTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ConsumeItemDBIdsAndCounts(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHREQUEST_SET_CONSUMEITEMDBIDSANDCOUNTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetCharacterDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERFAVORGROWTHREQUEST_SET_TARGETCHARACTERDBID_OFFSET))(arg, nullptr);
		}

	};
}

