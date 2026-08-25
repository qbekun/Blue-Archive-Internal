#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class FixedStrategyExcel; }

#define MX_DATA_FIXEDSTRATEGYINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0x1848910)
#define MX_DATA_FIXEDSTRATEGYINFO_SET_FIXEDECHELONDATALIST_OFFSET UNITYSDK_OFFSET(0x1848920)
#define MX_DATA_FIXEDSTRATEGYINFO_SET_ID_OFFSET UNITYSDK_OFFSET(0x1848930)
#define MX_DATA_FIXEDSTRATEGYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1848940)
#define MX_DATA_FIXEDSTRATEGYINFO_GET_FIXEDECHELONDATALIST_OFFSET UNITYSDK_OFFSET(0x1848D10)

namespace MX::Data
{
	inline static constexpr unsigned int FixedStrategyInfo_TypeDefinitionIndex = 15826;

	class FixedStrategyInfo : public Il2CppObject
	{
	public:
		::System::Int64 _Id_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _FixedEchelonDataList_k__BackingField; // 0x18

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDSTRATEGYINFO_GET_ID_OFFSET))(nullptr);
		}

		::System::Void set_FixedEchelonDataList(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDSTRATEGYINFO_SET_FIXEDECHELONDATALIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_Id(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDSTRATEGYINFO_SET_ID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::Excel::FixedStrategyExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::FixedStrategyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDSTRATEGYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_FixedEchelonDataList()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_FIXEDSTRATEGYINFO_GET_FIXEDECHELONDATALIST_OFFSET))(nullptr);
		}

	};
}

