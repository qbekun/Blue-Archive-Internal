#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GACHACRAFTNODEDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B31AC0)
#define MX_DATA_EXCEL_GACHACRAFTNODEDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B31AD0)
#define MX_DATA_EXCEL_GACHACRAFTNODEDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B31AE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaCraftNodeDBSchema_TypeDefinitionIndex = 18053;

	class GachaCraftNodeDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _ID_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_ID(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACRAFTNODEDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

