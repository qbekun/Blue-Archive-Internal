#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_LOADINGIMAGEEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B75CD0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B75FD0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B762F0)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B76330)
#define MX_DATA_EXCEL_LOADINGIMAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B76730)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int LoadingImageExcelRepository_TypeDefinitionIndex = 18352;

	class LoadingImageExcelRepository : public ShowDialogEmoji
	{
	public:
		Il2CppObject* Select_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_IDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_LOADINGIMAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

