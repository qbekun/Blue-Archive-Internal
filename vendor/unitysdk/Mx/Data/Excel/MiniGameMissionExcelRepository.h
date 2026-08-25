#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1BC3090)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BC3490)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1BC3600)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1BC3900)
#define MX_DATA_EXCEL_MINIGAMEMISSIONEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3C20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameMissionExcelRepository_TypeDefinitionIndex = 18701;

	class MiniGameMissionExcelRepository : public <co_InternalInvoke>d__1
	{
	public:
		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMEMISSIONEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

