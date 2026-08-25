#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMETBGOBJECTDBSCHEMA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C08260)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C08270)
#define MX_DATA_EXCEL_MINIGAMETBGOBJECTDBSCHEMA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C08280)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGObjectDBSchema_TypeDefinitionIndex = 18895;

	class MinigameTBGObjectDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x20

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTDBSCHEMA_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGOBJECTDBSCHEMA_GET_UNIQUEID_OFFSET))(nullptr);
		}

	};
}

