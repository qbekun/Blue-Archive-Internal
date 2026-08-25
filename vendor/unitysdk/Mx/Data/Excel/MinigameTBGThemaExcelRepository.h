#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TBGThemaType; }

#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C0C120)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_THEMAINDEX_THEMATYPE_OFFSET UNITYSDK_OFFSET(0x1C0C290)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCELREPOSITORY_SELECT_EVENTCONTENTID_THEMAINDEX_THEMATYPE_OFFSET UNITYSDK_OFFSET(0x1C0C7B0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCELREPOSITORY_SELECT_EVENTCONTENTID_THEMAINDEX_THEMATYPE_OFFSET UNITYSDK_OFFSET(0x1C0CCC0)
#define MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D300)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGThemaExcelRepository_TypeDefinitionIndex = 18914;

	class MinigameTBGThemaExcelRepository : public <>c__DisplayClass4_2
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_EventContentId_ThemaIndex_ThemaType(::System::Int64 arg, ::System::Int32 arg, ::FlatData::TBGThemaType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::FlatData::TBGThemaType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCELREPOSITORY_SELECTFIRST_EVENTCONTENTID_THEMAINDEX_THEMATYPE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_ThemaIndex_ThemaType(::System::Int64 arg, ::System::Int32 arg, ::FlatData::TBGThemaType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Int32, ::FlatData::TBGThemaType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCELREPOSITORY_SELECT_EVENTCONTENTID_THEMAINDEX_THEMATYPE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		Il2CppObject* Select_EventContentId_ThemaIndex_ThemaType(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCELREPOSITORY_SELECT_EVENTCONTENTID_THEMAINDEX_THEMATYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGTHEMAEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

