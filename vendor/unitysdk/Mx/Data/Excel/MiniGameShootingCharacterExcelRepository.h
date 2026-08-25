#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1BFADC0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BFB1C0)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BFB330)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCELREPOSITORY_SELECT_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1BFB650)
#define MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BFB950)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MiniGameShootingCharacterExcelRepository_TypeDefinitionIndex = 18837;

	class MiniGameShootingCharacterExcelRepository : public BehaviorTreePlayAndStop
	{
	public:
		Il2CppObject* Select_UniqueIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCELREPOSITORY_SELECT_UNIQUEIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCELREPOSITORY_SELECTFIRST_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_UniqueId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCELREPOSITORY_SELECT_UNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMESHOOTINGCHARACTEREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

