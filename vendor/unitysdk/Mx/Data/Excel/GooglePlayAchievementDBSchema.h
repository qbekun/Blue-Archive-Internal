#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B3DFF0)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B3E000)
#define MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E010)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GooglePlayAchievementDBSchema_TypeDefinitionIndex = 18115;

	class GooglePlayAchievementDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GOOGLEPLAYACHIEVEMENTDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

