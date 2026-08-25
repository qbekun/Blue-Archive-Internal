#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AcademyDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACADEMYGETINFORESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0EAA0)
#define MX_NETWORKPROTOCOL_ACADEMYGETINFORESPONSE_GET_ACADEMYLOCATIONDBS_OFFSET UNITYSDK_OFFSET(0xF0EAC0)
#define MX_NETWORKPROTOCOL_ACADEMYGETINFORESPONSE_GET_ACADEMYDB_OFFSET UNITYSDK_OFFSET(0xF0EAD0)
#define MX_NETWORKPROTOCOL_ACADEMYGETINFORESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0EAE0)
#define MX_NETWORKPROTOCOL_ACADEMYGETINFORESPONSE_SET_ACADEMYDB_OFFSET UNITYSDK_OFFSET(0xF0EAF0)
#define MX_NETWORKPROTOCOL_ACADEMYGETINFORESPONSE_SET_ACADEMYLOCATIONDBS_OFFSET UNITYSDK_OFFSET(0xF0EB00)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AcademyGetInfoResponse_TypeDefinitionIndex = 11224;

	class AcademyGetInfoResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AcademyDB* _AcademyDB_k__BackingField; // 0x50
		Il2CppObject* _AcademyLocationDBs_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYGETINFORESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_AcademyLocationDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYGETINFORESPONSE_GET_ACADEMYLOCATIONDBS_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::AcademyDB* get_AcademyDB()
		{
			return ((::MX::GameLogic::DBModel::AcademyDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYGETINFORESPONSE_GET_ACADEMYDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYGETINFORESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_AcademyDB(::MX::GameLogic::DBModel::AcademyDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AcademyDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYGETINFORESPONSE_SET_ACADEMYDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_AcademyLocationDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACADEMYGETINFORESPONSE_SET_ACADEMYLOCATIONDBS_OFFSET))(arg, nullptr);
		}

	};
}

