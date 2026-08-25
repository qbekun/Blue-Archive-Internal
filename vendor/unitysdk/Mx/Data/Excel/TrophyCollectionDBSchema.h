#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TROPHYCOLLECTIONDBSCHEMA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CA8380)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CA8390)
#define MX_DATA_EXCEL_TROPHYCOLLECTIONDBSCHEMA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CA83A0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TrophyCollectionDBSchema_TypeDefinitionIndex = 19632;

	class TrophyCollectionDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _GroupId_k__BackingField; // 0x20

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONDBSCHEMA_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_GroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TROPHYCOLLECTIONDBSCHEMA_SET_GROUPID_OFFSET))(arg, nullptr);
		}

	};
}

