#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CAFERANKDBSCHEMA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x19FBF70)
#define MX_DATA_EXCEL_CAFERANKDBSCHEMA_SET_CAFEID_OFFSET UNITYSDK_OFFSET(0x19FBF80)
#define MX_DATA_EXCEL_CAFERANKDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19FBF90)
#define MX_DATA_EXCEL_CAFERANKDBSCHEMA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x19FBFA0)
#define MX_DATA_EXCEL_CAFERANKDBSCHEMA_GET_CAFEID_OFFSET UNITYSDK_OFFSET(0x19FBFB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CafeRankDBSchema_TypeDefinitionIndex = 16855;

	class CafeRankDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _CafeId_k__BackingField; // 0x20
		::System::Int64 _Rank_k__BackingField; // 0x28

		::System::Void set_Rank(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKDBSCHEMA_SET_RANK_OFFSET))(arg, nullptr);
		}

		::System::Void set_CafeId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKDBSCHEMA_SET_CAFEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_Rank()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKDBSCHEMA_GET_RANK_OFFSET))(nullptr);
		}

		::System::Int64 get_CafeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFERANKDBSCHEMA_GET_CAFEID_OFFSET))(nullptr);
		}

	};
}

