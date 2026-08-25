#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B25E40)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B26140)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B26180)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B26580)
#define MX_DATA_EXCEL_FIXEDSTRATEGYEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B266F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int FixedStrategyExcelRepository_TypeDefinitionIndex = 18002;

	class FixedStrategyExcelRepository : public ::MXUnderCover::UCParticle
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_FIXEDSTRATEGYEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

