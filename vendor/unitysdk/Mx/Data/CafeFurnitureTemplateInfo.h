#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class FurnitureTemplateExcel; }

#define MX_DATA_CAFEFURNITURETEMPLATEINFO_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1832160)
#define MX_DATA_CAFEFURNITURETEMPLATEINFO_GET_ELEMENTS_OFFSET UNITYSDK_OFFSET(0x1832170)
#define MX_DATA_CAFEFURNITURETEMPLATEINFO_GET_TEMPLATEEXCEL_OFFSET UNITYSDK_OFFSET(0x1832180)
#define MX_DATA_CAFEFURNITURETEMPLATEINFO_GET_THUMBNAILIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1832190)
#define MX_DATA_CAFEFURNITURETEMPLATEINFO_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0x18321A0)
#define MX_DATA_CAFEFURNITURETEMPLATEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18321B0)

namespace MX::Data
{
	inline static constexpr unsigned int CafeFurnitureTemplateInfo_TypeDefinitionIndex = 15729;

	class CafeFurnitureTemplateInfo : public Il2CppObject
	{
	public:
		::System::Int64 _TemplateId_k__BackingField; // 0x10
		::System::String* _ThumbnailImagePath_k__BackingField; // 0x18
		::System::String* _ImagePath_k__BackingField; // 0x20
		::MX::Data::Excel::FurnitureTemplateExcel* _TemplateExcel_k__BackingField; // 0x28
		Il2CppObject* _Elements_k__BackingField; // 0x38

		::System::String* get_ImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEFURNITURETEMPLATEINFO_GET_IMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* get_Elements()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEFURNITURETEMPLATEINFO_GET_ELEMENTS_OFFSET))(nullptr);
		}

		::MX::Data::Excel::FurnitureTemplateExcel* get_TemplateExcel()
		{
			return (return (::MX::Data::Excel::FurnitureTemplateExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEFURNITURETEMPLATEINFO_GET_TEMPLATEEXCEL_OFFSET))(nullptr);
		}

		::System::String* get_ThumbnailImagePath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEFURNITURETEMPLATEINFO_GET_THUMBNAILIMAGEPATH_OFFSET))(nullptr);
		}

		::System::Int64 get_TemplateId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEFURNITURETEMPLATEINFO_GET_TEMPLATEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CAFEFURNITURETEMPLATEINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

