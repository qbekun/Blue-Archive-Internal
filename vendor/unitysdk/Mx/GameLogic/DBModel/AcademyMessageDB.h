#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_MESSAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE0EB0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_SELECTEDMESSAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE0EC0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_ISREAD_OFFSET UNITYSDK_OFFSET(0xFE0ED0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_MESSAGESERVERID_OFFSET UNITYSDK_OFFSET(0xFE0EE0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE0EF0)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_ISREAD_OFFSET UNITYSDK_OFFSET(0xFE0F00)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xFE0F10)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE0F20)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xFE0F30)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_SELECTEDMESSAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE0F40)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_MESSAGESERVERID_OFFSET UNITYSDK_OFFSET(0xFE0F50)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_MESSAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xFE0F60)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0xFE0F70)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_MESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xFE0F80)
#define MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE0F90)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int AcademyMessageDB_TypeDefinitionIndex = 12466;

	class AcademyMessageDB : public Il2CppObject
	{
	public:
		::System::Int64 _MessageServerId_k__BackingField; // 0x10
		::System::Int64 _MessageGroupId_k__BackingField; // 0x18
		::System::Int64 _MessageUniqueId_k__BackingField; // 0x20
		::System::Int64 _SelectedMessageUniqueId_k__BackingField; // 0x28
		::System::Int64 _CharacterServerId_k__BackingField; // 0x30
		::System::Int64 _CharacterUniqueId_k__BackingField; // 0x38
		::System::Boolean _IsRead_k__BackingField; // 0x40

		::System::Void set_MessageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_MESSAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SelectedMessageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_SELECTEDMESSAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_ISREAD_OFFSET))(nullptr);
		}

		::System::Void set_MessageServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_MESSAGESERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_CharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_CHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_IsRead(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_ISREAD_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MessageGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_MESSAGEGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_CharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_CHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_CHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void set_SelectedMessageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_SELECTEDMESSAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_MessageServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_MESSAGESERVERID_OFFSET))(nullptr);
		}

		::System::Int64 get_MessageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_MESSAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_GET_CHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_MessageGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_SET_MESSAGEGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_ACADEMYMESSAGEDB_.CTOR_OFFSET))(nullptr);
		}

	};
}

