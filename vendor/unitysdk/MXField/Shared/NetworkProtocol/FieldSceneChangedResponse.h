#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldCharacterDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSCENECHANGEDRESPONSE_GET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xE6EC70)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSCENECHANGEDRESPONSE_SET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xE6EC80)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSCENECHANGEDRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6EC90)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSCENECHANGEDRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xE6ECA0)

namespace MXField::Shared::NetworkProtocol
{
	inline static constexpr unsigned int FieldSceneChangedResponse_TypeDefinitionIndex = 10531;

	class FieldSceneChangedResponse : public Il2CppObject
	{
	public:
		::MXField::Shared::Model::FieldCharacterDB* _CharacterDB_k__BackingField; // 0x50

		::MXField::Shared::Model::FieldCharacterDB* get_CharacterDB()
		{
			return ((::MXField::Shared::Model::FieldCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSCENECHANGEDRESPONSE_GET_CHARACTERDB_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDB(::MXField::Shared::Model::FieldCharacterDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSCENECHANGEDRESPONSE_SET_CHARACTERDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSCENECHANGEDRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDSCENECHANGEDRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

