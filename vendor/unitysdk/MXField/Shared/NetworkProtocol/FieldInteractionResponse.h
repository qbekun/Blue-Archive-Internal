#pragma once
#include "../../../unitysdk.h"

namespace MXField::Shared::Model { class FieldInteractionDB; }
namespace MXField::Shared::Model { class FieldCharacterDB; }
namespace MXField::Shared::Model { class FieldMasteryDB; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xE6EA70)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xE6EA80)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_SET_MASTERYDB_OFFSET UNITYSDK_OFFSET(0xE6EA90)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_SET_INTERACTIONDB_OFFSET UNITYSDK_OFFSET(0xE6EAA0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_GET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xE6EAB0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_GET_MASTERYDB_OFFSET UNITYSDK_OFFSET(0xE6EAC0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xE6EAD0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xE6EAE0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_SET_CHARACTERDB_OFFSET UNITYSDK_OFFSET(0xE6EAF0)
#define MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_GET_INTERACTIONDB_OFFSET UNITYSDK_OFFSET(0xE6EB00)

namespace MXField::Shared::NetworkProtocol
{
	inline static constexpr unsigned int FieldInteractionResponse_TypeDefinitionIndex = 10527;

	class FieldInteractionResponse : public Il2CppObject
	{
	public:
		::MXField::Shared::Model::FieldInteractionDB* _InteractionDB_k__BackingField; // 0x50
		::MXField::Shared::Model::FieldCharacterDB* _CharacterDB_k__BackingField; // 0x58
		::MXField::Shared::Model::FieldMasteryDB* _MasteryDB_k__BackingField; // 0x60
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x68

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_MasteryDB(::MXField::Shared::Model::FieldMasteryDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldMasteryDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_SET_MASTERYDB_OFFSET))(arg, nullptr);
		}

		::System::Void set_InteractionDB(::MXField::Shared::Model::FieldInteractionDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldInteractionDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_SET_INTERACTIONDB_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Model::FieldCharacterDB* get_CharacterDB()
		{
			return ((::MXField::Shared::Model::FieldCharacterDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_GET_CHARACTERDB_OFFSET))(nullptr);
		}

		::MXField::Shared::Model::FieldMasteryDB* get_MasteryDB()
		{
			return ((::MXField::Shared::Model::FieldMasteryDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_GET_MASTERYDB_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDB(::MXField::Shared::Model::FieldCharacterDB* arg)
		{
			((::System::Void(*)(::MXField::Shared::Model::FieldCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_SET_CHARACTERDB_OFFSET))(arg, nullptr);
		}

		::MXField::Shared::Model::FieldInteractionDB* get_InteractionDB()
		{
			return ((::MXField::Shared::Model::FieldInteractionDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_SHARED_NETWORKPROTOCOL_FIELDINTERACTIONRESPONSE_GET_INTERACTIONDB_OFFSET))(nullptr);
		}

	};
}

