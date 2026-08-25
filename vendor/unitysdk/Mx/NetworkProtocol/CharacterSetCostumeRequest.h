#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15FA0)
#define MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMEREQUEST_GET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF15FB0)
#define MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15FC0)
#define MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMEREQUEST_SET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF15FD0)
#define MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMEREQUEST_GET_COSTUMEIDTOSET_OFFSET UNITYSDK_OFFSET(0xF15FE0)
#define MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMEREQUEST_SET_COSTUMEIDTOSET_OFFSET UNITYSDK_OFFSET(0xF15FF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterSetCostumeRequest_TypeDefinitionIndex = 11478;

	class CharacterSetCostumeRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterUniqueId_k__BackingField; // 0x40
		Il2CppObject* _CostumeIdToSet_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMEREQUEST_GET_CHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMEREQUEST_SET_CHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CostumeIdToSet()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMEREQUEST_GET_COSTUMEIDTOSET_OFFSET))(nullptr);
		}

		::System::Void set_CostumeIdToSet(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETCOSTUMEREQUEST_SET_COSTUMEIDTOSET_OFFSET))(arg, nullptr);
		}

	};
}

