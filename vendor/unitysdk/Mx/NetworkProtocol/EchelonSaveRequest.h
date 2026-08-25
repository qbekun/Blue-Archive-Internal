#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_GET_ECHELONDB_OFFSET UNITYSDK_OFFSET(0xF42560)
#define MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_GET_ASSISTUSEINFOS_OFFSET UNITYSDK_OFFSET(0xF42570)
#define MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF42580)
#define MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_SET_ECHELONDB_OFFSET UNITYSDK_OFFSET(0xF42590)
#define MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF425A0)
#define MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF425B0)
#define MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_SET_ASSISTUSEINFOS_OFFSET UNITYSDK_OFFSET(0xF425C0)
#define MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF425D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int EchelonSaveRequest_TypeDefinitionIndex = 11631;

	class EchelonSaveRequest : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EchelonDB* _EchelonDB_k__BackingField; // 0x40
		Il2CppObject* _AssistUseInfos_k__BackingField; // 0x48
		::System::Boolean _IsPractice_k__BackingField; // 0x50

		::MX::GameLogic::DBModel::EchelonDB* get_EchelonDB()
		{
			return ((::MX::GameLogic::DBModel::EchelonDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_GET_ECHELONDB_OFFSET))(nullptr);
		}

		Il2CppObject* get_AssistUseInfos()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_GET_ASSISTUSEINFOS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EchelonDB(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_SET_ECHELONDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_AssistUseInfos(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_SET_ASSISTUSEINFOS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ECHELONSAVEREQUEST_GET_ISPRACTICE_OFFSET))(nullptr);
		}

	};
}

