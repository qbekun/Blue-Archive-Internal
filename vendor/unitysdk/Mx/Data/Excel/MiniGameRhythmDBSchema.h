#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMERHYTHMDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BC8360)
#define MX_DATA_EXCEL_MINIGAMERHYTHMDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BC8370)
#define MX_DATA_EXCEL_MINIGAMERHYTHMDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BC8380)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameRhythmDBSchema_TypeDefinitionIndex = 18720;

	class MiniGameRhythmDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x20

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMERHYTHMDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

