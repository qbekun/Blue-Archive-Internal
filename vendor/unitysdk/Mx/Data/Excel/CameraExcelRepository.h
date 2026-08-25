#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_CAMERAEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19FD9A0)
#define MX_DATA_EXCEL_CAMERAEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19FDB10)
#define MX_DATA_EXCEL_CAMERAEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19FDB50)
#define MX_DATA_EXCEL_CAMERAEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x19FDE70)
#define MX_DATA_EXCEL_CAMERAEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x19FE170)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CameraExcelRepository_TypeDefinitionIndex = 16867;

	class CameraExcelRepository : public ::FlatData::MissionResetType
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAMERAEXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

