#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEDBSCHEMA_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x1B97060)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B97070)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEDBSCHEMA_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1B97080)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEDBSCHEMA_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x1B97090)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELNODEDBSCHEMA_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1B970A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGLevelNodeDBSchema_TypeDefinitionIndex = 18490;

	class MinigameCCGLevelNodeDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _LevelId_k__BackingField; // 0x20
		::System::Int64 _NodeId_k__BackingField; // 0x28

		::System::Void set_NodeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEDBSCHEMA_SET_NODEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEDBSCHEMA_GET_LEVELID_OFFSET))(nullptr);
		}

		::System::Int64 get_NodeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEDBSCHEMA_GET_NODEID_OFFSET))(nullptr);
		}

		::System::Void set_LevelId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELNODEDBSCHEMA_SET_LEVELID_OFFSET))(arg, nullptr);
		}

	};
}

