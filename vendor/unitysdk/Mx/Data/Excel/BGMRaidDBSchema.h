#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_BGMRAIDDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19EFCB0)
#define MX_DATA_EXCEL_BGMRAIDDBSCHEMA_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x19EFCC0)
#define MX_DATA_EXCEL_BGMRAIDDBSCHEMA_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x19EFCD0)
#define MX_DATA_EXCEL_BGMRAIDDBSCHEMA_GET_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0x19EFCE0)
#define MX_DATA_EXCEL_BGMRAIDDBSCHEMA_SET_PHASEINDEX_OFFSET UNITYSDK_OFFSET(0x19EFCF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int BGMRaidDBSchema_TypeDefinitionIndex = 16796;

	class BGMRaidDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _StageId_k__BackingField; // 0x20
		::System::Int64 _PhaseIndex_k__BackingField; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDDBSCHEMA_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDDBSCHEMA_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_PhaseIndex()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDDBSCHEMA_GET_PHASEINDEX_OFFSET))(nullptr);
		}

		::System::Void set_PhaseIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_BGMRAIDDBSCHEMA_SET_PHASEINDEX_OFFSET))(arg, nullptr);
		}

	};
}

