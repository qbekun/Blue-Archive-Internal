#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGENEMYDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B917A0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B917B0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B917C0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B917D0)
#define MX_DATA_EXCEL_MINIGAMECCGENEMYDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B917E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGEnemyDBSchema_TypeDefinitionIndex = 18459;

	class MinigameCCGEnemyDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20
		::System::Int64 _GroupId_k__BackingField; // 0x28

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGENEMYDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

