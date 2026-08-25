#pragma once
#include "../../unitysdk.h"

namespace FlatData { class EchelonType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3EFA0)
#define MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_SET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xF3EFB0)
#define MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3EFC0)
#define MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_SET_PENDINGASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF3EFD0)
#define MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_GET_PENDINGASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF3EFE0)
#define MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF3EFF0)
#define MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF3F000)
#define MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_GET_ECHELONTYPE_OFFSET UNITYSDK_OFFSET(0xF3F010)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClanAllAssistListRequest_TypeDefinitionIndex = 11524;

	class ClanAllAssistListRequest : public Il2CppObject
	{
	public:
		::FlatData::EchelonType* _EchelonType_k__BackingField; // 0x40
		Il2CppObject* _PendingAssistUseInfo_k__BackingField; // 0x48
		::System::Boolean _IsPractice_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EchelonType(::FlatData::EchelonType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_SET_ECHELONTYPE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_PendingAssistUseInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_SET_PENDINGASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PendingAssistUseInfo()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_GET_PENDINGASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::FlatData::EchelonType* get_EchelonType()
		{
			return ((::FlatData::EchelonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLANALLASSISTLISTREQUEST_GET_ECHELONTYPE_OFFSET))(nullptr);
		}

	};
}

