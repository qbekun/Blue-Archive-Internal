#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1C9B3A0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1C9B6C0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1C9BAC0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BDC0)
#define MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C9BE00)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TacticalSupportSystemExcelRepository_TypeDefinitionIndex = 19571;

	class TacticalSupportSystemExcelRepository : public CameraBackup
	{
	public:
		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICALSUPPORTSYSTEMEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

