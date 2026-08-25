#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_VIDEOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CAF180)
#define MX_DATA_EXCEL_VIDEOEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1CAF2F0)
#define MX_DATA_EXCEL_VIDEOEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1CAF5F0)
#define MX_DATA_EXCEL_VIDEOEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1CAF910)
#define MX_DATA_EXCEL_VIDEOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CAFD10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int VideoExcelRepository_TypeDefinitionIndex = 19672;

	class VideoExcelRepository : public ::MXUnderCover::UCGameHandler
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

