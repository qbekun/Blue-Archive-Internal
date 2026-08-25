#pragma once
#include "../../../unitysdk.h"

#define MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xFE5B70)
#define MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_GET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFE5B80)
#define MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_SET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0xFE5B90)
#define MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_SET_SERVERID_OFFSET UNITYSDK_OFFSET(0xFE5BA0)
#define MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_.CTOR_OFFSET UNITYSDK_OFFSET(0xFE5BB0)
#define MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xFE5BC0)
#define MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_GET_PRESETNAME_OFFSET UNITYSDK_OFFSET(0xFE5BD0)
#define MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xFE5BE0)
#define MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xFE5BF0)

namespace MX::GameLogic::DBModel
{
	inline static constexpr unsigned int CafePresetDB_TypeDefinitionIndex = 12501;

	class CafePresetDB : public Il2CppObject
	{
	public:
		::System::Int64 _ServerId_k__BackingField; // 0x10
		::System::Int32 _SlotId_k__BackingField; // 0x18
		::System::String* _PresetName_k__BackingField; // 0x20
		::System::Boolean _IsEmpty_k__BackingField; // 0x28

		::System::Void set_SlotId(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_SET_SLOTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_GET_SERVERID_OFFSET))(nullptr);
		}

		::System::Void set_PresetName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_SET_PRESETNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_ServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_SET_SERVERID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_GET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::String* get_PresetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_GET_PRESETNAME_OFFSET))(nullptr);
		}

		::System::Void set_IsEmpty(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_SET_ISEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_DBMODEL_CAFEPRESETDB_GET_SLOTID_OFFSET))(nullptr);
		}

	};
}

