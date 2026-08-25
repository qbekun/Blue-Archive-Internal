#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_STICKERGROUPDBSCHEMA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C94BD0)
#define MX_DATA_EXCEL_STICKERGROUPDBSCHEMA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C94BE0)
#define MX_DATA_EXCEL_STICKERGROUPDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C94BF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int StickerGroupDBSchema_TypeDefinitionIndex = 19538;

	class StickerGroupDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x20

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPDBSCHEMA_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPDBSCHEMA_GET_ID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_STICKERGROUPDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

	};
}

