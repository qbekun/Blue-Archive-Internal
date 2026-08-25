#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_EMBLEMDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A8B2D0)
#define MX_DATA_EXCEL_EMBLEMDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A8B2E0)
#define MX_DATA_EXCEL_EMBLEMDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A8B2F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EmblemDBSchema_TypeDefinitionIndex = 17428;

	class EmblemDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EMBLEMDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

	};
}

