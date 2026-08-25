#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGINFODBSCHEMA_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B94A50)
#define MX_DATA_EXCEL_MINIGAMECCGINFODBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B94A60)
#define MX_DATA_EXCEL_MINIGAMECCGINFODBSCHEMA_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1B94A70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGInfoDBSchema_TypeDefinitionIndex = 18476;

	class MinigameCCGInfoDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x20

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFODBSCHEMA_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFODBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGINFODBSCHEMA_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

