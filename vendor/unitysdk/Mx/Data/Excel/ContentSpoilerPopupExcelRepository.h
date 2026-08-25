#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ContentType; }

#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCELREPOSITORY_SELECT_CONTENTTYPES_OFFSET UNITYSDK_OFFSET(0x1A70860)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCELREPOSITORY_SELECTFIRST_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A70C60)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A70FC0)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCELREPOSITORY_SELECT_CONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1A71130)
#define MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A71480)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ContentSpoilerPopupExcelRepository_TypeDefinitionIndex = 17329;

	class ContentSpoilerPopupExcelRepository : public ::FlatData::ProductTagType
	{
	public:
		Il2CppObject* Select_ContentTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCELREPOSITORY_SELECT_CONTENTTYPES_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ContentType(::FlatData::ContentType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCELREPOSITORY_SELECTFIRST_CONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_ContentType(::FlatData::ContentType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ContentType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCELREPOSITORY_SELECT_CONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONTENTSPOILERPOPUPEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

