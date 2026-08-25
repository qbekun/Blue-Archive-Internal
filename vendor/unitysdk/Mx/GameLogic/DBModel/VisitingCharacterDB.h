#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class VisitingCharacterDB; }

#define MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1012560)
#define MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1012570)
#define MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1012580)
#define MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0x1012590)
#define MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10125A0)
#define MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1012630)
#define MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1012660)
#define MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x10126E0)
#define MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_.CTOR_OFFSET UNITYSDK_OFFSET(0x1012730)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int VisitingCharacterDB_TypeDefinitionIndex = 12747;

	class VisitingCharacterDB : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x10
		::System::Int64 _ServerId_k__BackingField; // 0x18

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MX::GameLogic::DBModel::VisitingCharacterDB* arg)
		{
			return ((::System::Boolean(*)(::MX::GameLogic::DBModel::VisitingCharacterDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_VISITINGCHARACTERDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

