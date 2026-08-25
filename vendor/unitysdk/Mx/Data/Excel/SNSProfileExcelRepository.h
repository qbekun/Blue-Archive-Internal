#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_SNSPROFILEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C8F140)
#define MX_DATA_EXCEL_SNSPROFILEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C8F440)
#define MX_DATA_EXCEL_SNSPROFILEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C8F5B0)
#define MX_DATA_EXCEL_SNSPROFILEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F9B0)
#define MX_DATA_EXCEL_SNSPROFILEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C8F9F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int SNSProfileExcelRepository_TypeDefinitionIndex = 19508;

	class SNSProfileExcelRepository : public TemporaryDataInternal
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SNSPROFILEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

	};
}

