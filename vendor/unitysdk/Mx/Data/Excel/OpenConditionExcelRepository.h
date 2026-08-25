#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class OpenConditionContent; }

#define MX_DATA_EXCEL_OPENCONDITIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C20BC0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCELREPOSITORY_SELECTFIRST_OPENCONDITIONCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C20D30)
#define MX_DATA_EXCEL_OPENCONDITIONEXCELREPOSITORY_SELECT_OPENCONDITIONCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1C21090)
#define MX_DATA_EXCEL_OPENCONDITIONEXCELREPOSITORY_SELECT_OPENCONDITIONCONTENTTYPES_OFFSET UNITYSDK_OFFSET(0x1C213E0)
#define MX_DATA_EXCEL_OPENCONDITIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C217E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int OpenConditionExcelRepository_TypeDefinitionIndex = 19001;

	class OpenConditionExcelRepository : public <>c__DisplayClass5_0
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_OpenConditionContentType(::FlatData::OpenConditionContent* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::OpenConditionContent*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCELREPOSITORY_SELECTFIRST_OPENCONDITIONCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_OpenConditionContentType(::FlatData::OpenConditionContent* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::OpenConditionContent*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCELREPOSITORY_SELECT_OPENCONDITIONCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_OpenConditionContentTypes(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCELREPOSITORY_SELECT_OPENCONDITIONCONTENTTYPES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_OPENCONDITIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

