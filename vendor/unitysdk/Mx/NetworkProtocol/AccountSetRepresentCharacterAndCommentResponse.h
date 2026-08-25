#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::DBModel { class AccountDB; }
namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ACCOUNTSETREPRESENTCHARACTERANDCOMMENTRESPONSE_GET_ACCOUNTDB_OFFSET UNITYSDK_OFFSET(0xF0F740)
#define MX_NETWORKPROTOCOL_ACCOUNTSETREPRESENTCHARACTERANDCOMMENTRESPONSE_GET_REPRESENTCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF0F750)
#define MX_NETWORKPROTOCOL_ACCOUNTSETREPRESENTCHARACTERANDCOMMENTRESPONSE_SET_REPRESENTCHARACTERDB_OFFSET UNITYSDK_OFFSET(0xF0F760)
#define MX_NETWORKPROTOCOL_ACCOUNTSETREPRESENTCHARACTERANDCOMMENTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF0F770)
#define MX_NETWORKPROTOCOL_ACCOUNTSETREPRESENTCHARACTERANDCOMMENTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF0F780)
#define MX_NETWORKPROTOCOL_ACCOUNTSETREPRESENTCHARACTERANDCOMMENTRESPONSE_SET_ACCOUNTDB_OFFSET UNITYSDK_OFFSET(0xF0F790)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int AccountSetRepresentCharacterAndCommentResponse_TypeDefinitionIndex = 11242;

	class AccountSetRepresentCharacterAndCommentResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::AccountDB* _AccountDB_k__BackingField; // 0x50
		::MX::GameLogic::DBModel::CharacterDB* _RepresentCharacterDB_k__BackingField; // 0x58

		::MX::GameLogic::DBModel::AccountDB* get_AccountDB()
		{
			return ((::MX::GameLogic::DBModel::AccountDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETREPRESENTCHARACTERANDCOMMENTRESPONSE_GET_ACCOUNTDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::CharacterDB* get_RepresentCharacterDB()
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETREPRESENTCHARACTERANDCOMMENTRESPONSE_GET_REPRESENTCHARACTERDB_OFFSET))(nullptr);
		}

		::System::Void set_RepresentCharacterDB(::MX::GameLogic::DBModel::CharacterDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::CharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETREPRESENTCHARACTERANDCOMMENTRESPONSE_SET_REPRESENTCHARACTERDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETREPRESENTCHARACTERANDCOMMENTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETREPRESENTCHARACTERANDCOMMENTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_AccountDB(::MX::GameLogic::DBModel::AccountDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::AccountDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ACCOUNTSETREPRESENTCHARACTERANDCOMMENTRESPONSE_SET_ACCOUNTDB_OFFSET))(arg, nullptr);
		}

	};
}

