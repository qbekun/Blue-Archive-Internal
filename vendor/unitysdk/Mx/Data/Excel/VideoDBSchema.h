#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_VIDEODBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1CAF150)
#define MX_DATA_EXCEL_VIDEODBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF160)
#define MX_DATA_EXCEL_VIDEODBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CAF170)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VideoDBSchema_TypeDefinitionIndex = 19667;

	class VideoDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEODBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEODBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEODBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

	};
}

