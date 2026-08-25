#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_VIDEO_GLOBALEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CB0700)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCELREPOSITORY_SELECT_VIDEOIDS_OFFSET UNITYSDK_OFFSET(0x1CB0870)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCELREPOSITORY_SELECT_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1CB0C70)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCELREPOSITORY_SELECTFIRST_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1CB0F70)
#define MX_DATA_EXCEL_VIDEO_GLOBALEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CB1290)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int Video_GlobalExcelRepository_TypeDefinitionIndex = 19679;

	class Video_GlobalExcelRepository : public HighlightMaterialInfo
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_VideoIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCELREPOSITORY_SELECT_VIDEOIDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_VideoId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCELREPOSITORY_SELECT_VIDEOID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_VideoId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCELREPOSITORY_SELECTFIRST_VIDEOID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

