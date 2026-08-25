#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1B90570)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1B90870)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1B909E0)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1B90A20)
#define MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1B90D40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGCharacterExcelRepository_TypeDefinitionIndex = 18457;

	class MinigameCCGCharacterExcelRepository : public FadeInOut
	{
	public:
		Il2CppObject* Select_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_Id(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_Ids(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGCHARACTEREXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

