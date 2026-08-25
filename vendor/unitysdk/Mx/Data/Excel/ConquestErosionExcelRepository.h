#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class ConquestErosionType; }

#define MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1A54C80)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1A54FE0)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1A55300)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1A55600)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECTFIRST_EROSIONTYPE_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A55A00)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECT_EROSIONTYPE_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A55E40)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECT_EROSIONTYPE_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A56270)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECTFIRST_EROSIONTYPE_EVENTCONTENTID_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A56810)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECT_EROSIONTYPE_EVENTCONTENTID_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A56D40)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECT_EROSIONTYPE_EVENTCONTENTID_STEPINDEX_OFFSET UNITYSDK_OFFSET(0x1A57250)
#define MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1A57890)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ConquestErosionExcelRepository_TypeDefinitionIndex = 17215;

	class ConquestErosionExcelRepository : public ::FlatData::ScenarioZoomAnchors
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ErosionType_EventContentId(::FlatData::ConquestErosionType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ConquestErosionType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECTFIRST_EROSIONTYPE_EVENTCONTENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ErosionType_EventContentId(::FlatData::ConquestErosionType* arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ConquestErosionType*, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECT_EROSIONTYPE_EVENTCONTENTID_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ErosionType_EventContentId(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECT_EROSIONTYPE_EVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ErosionType_EventContentId_StepIndex(::FlatData::ConquestErosionType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ConquestErosionType*, ::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECTFIRST_EROSIONTYPE_EVENTCONTENTID_STEPINDEX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ErosionType_EventContentId_StepIndex(::FlatData::ConquestErosionType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::ConquestErosionType*, ::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECT_EROSIONTYPE_EVENTCONTENTID_STEPINDEX_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_ErosionType_EventContentId_StepIndex(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_SELECT_EROSIONTYPE_EVENTCONTENTID_STEPINDEX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CONQUESTEROSIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

