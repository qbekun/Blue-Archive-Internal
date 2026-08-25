#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ConquestObjectType; }

#define MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A61400)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A61660)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A61980)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A61C80)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_CONQUESTOBJECTTYPE_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A62080)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_SELECT_EVENTCONTENTID_CONQUESTOBJECTTYPE_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A625A0)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_SELECT_EVENTCONTENTID_CONQUESTOBJECTTYPE_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A62AB0)
#define MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A630F0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestObjectExcelRepository_TypeDefinitionIndex = 17263;

	class ConquestObjectExcelRepository : public ::FlatData::ShopCategoryType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_ConquestObjectType_StepIndex(::System::Int64 arg, ::FlatData::ConquestObjectType* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::ConquestObjectType*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_CONQUESTOBJECTTYPE_STEPINDEX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_ConquestObjectType_StepIndex(::System::Int64 arg, ::FlatData::ConquestObjectType* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::FlatData::ConquestObjectType*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_SELECT_EVENTCONTENTID_CONQUESTOBJECTTYPE_STEPINDEX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_ConquestObjectType_StepIndex(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_SELECT_EVENTCONTENTID_CONQUESTOBJECTTYPE_STEPINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTOBJECTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

