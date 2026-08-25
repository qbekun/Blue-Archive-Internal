#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGLEVELDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B95CC0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELDBSCHEMA_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1B95CD0)
#define MX_DATA_EXCEL_MINIGAMECCGLEVELDBSCHEMA_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0x1B95CE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGLevelDBSchema_TypeDefinitionIndex = 18483;

	class MinigameCCGLevelDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _LevelId_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_LevelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELDBSCHEMA_GET_LEVELID_OFFSET))(nullptr);
		}

		::System::Void set_LevelId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGLEVELDBSCHEMA_SET_LEVELID_OFFSET))(arg, nullptr);
		}

	};
}

