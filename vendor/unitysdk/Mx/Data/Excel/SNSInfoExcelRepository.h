#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SNSINFOEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C8C6A0)
#define MX_DATA_EXCEL_SNSINFOEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C8C9A0)
#define MX_DATA_EXCEL_SNSINFOEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C8CDA0)
#define MX_DATA_EXCEL_SNSINFOEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C8CDE0)
#define MX_DATA_EXCEL_SNSINFOEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C8CF50)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SNSInfoExcelRepository_TypeDefinitionIndex = 19494;

	class SNSInfoExcelRepository : public SkillEffected
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSINFOEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

