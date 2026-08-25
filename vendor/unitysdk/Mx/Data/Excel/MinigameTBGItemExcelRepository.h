#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C06D60)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C07060)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C070A0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1C073C0)
#define MX_DATA_EXCEL_MINIGAMETBGITEMEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C077C0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameTBGItemExcelRepository_TypeDefinitionIndex = 18893;

	class MinigameTBGItemExcelRepository : public <<co_InternalInvoke>g__UseToProp|1>d
	{
	public:
		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMETBGITEMEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

