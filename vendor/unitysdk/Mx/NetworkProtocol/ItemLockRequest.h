#pragma once
#include "../../unitysdk.h"

namespace FlatData { class ParcelType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ITEMLOCKREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF47740)
#define MX_NETWORKPROTOCOL_ITEMLOCKREQUEST_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0xF47750)
#define MX_NETWORKPROTOCOL_ITEMLOCKREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF47760)
#define MX_NETWORKPROTOCOL_ITEMLOCKREQUEST_GET_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF47770)
#define MX_NETWORKPROTOCOL_ITEMLOCKREQUEST_SET_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0xF47780)
#define MX_NETWORKPROTOCOL_ITEMLOCKREQUEST_SET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0xF47790)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ItemLockRequest_TypeDefinitionIndex = 11829;

	class ItemLockRequest : public Il2CppObject
	{
	public:
		::FlatData::ParcelType* _TargetType_k__BackingField; // 0x40
		Il2CppObject* _UniqueIds_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLOCKREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_TargetType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLOCKREQUEST_GET_TARGETTYPE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLOCKREQUEST_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_UniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLOCKREQUEST_GET_UNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Void set_UniqueIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLOCKREQUEST_SET_UNIQUEIDS_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetType(::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ITEMLOCKREQUEST_SET_TARGETTYPE_OFFSET))(arg, nullptr);
		}

	};
}

