#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_VIDEO_GLOBALDBSCHEMA_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1CB06D0)
#define MX_DATA_EXCEL_VIDEO_GLOBALDBSCHEMA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CB06E0)
#define MX_DATA_EXCEL_VIDEO_GLOBALDBSCHEMA_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1CB06F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int Video_GlobalDBSchema_TypeDefinitionIndex = 19674;

	class Video_GlobalDBSchema : public ::TriInspector::InfoBoxAttribute
	{
	public:
		::System::Int64 _VideoId_k__BackingField; // 0x20

		::System::Void set_VideoId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALDBSCHEMA_SET_VIDEOID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALDBSCHEMA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_VideoId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_VIDEO_GLOBALDBSCHEMA_GET_VIDEOID_OFFSET))(nullptr);
		}

	};
}

