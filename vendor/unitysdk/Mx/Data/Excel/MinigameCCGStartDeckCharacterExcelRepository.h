#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1BA4F30)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1BA50A0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCELREPOSITORY_SELECTFIRST_CCGID_OFFSET UNITYSDK_OFFSET(0x1BA50E0)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCELREPOSITORY_SELECT_CCGID_OFFSET UNITYSDK_OFFSET(0x1BA5400)
#define MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCELREPOSITORY_SELECT_CCGIDS_OFFSET UNITYSDK_OFFSET(0x1BA5700)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MinigameCCGStartDeckCharacterExcelRepository_TypeDefinitionIndex = 18571;

	class MinigameCCGStartDeckCharacterExcelRepository : public ::MXUnderCover::UCConditionEntity
	{
	public:
		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* SelectFirst_CCGId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCELREPOSITORY_SELECTFIRST_CCGID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CCGId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCELREPOSITORY_SELECT_CCGID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_CCGIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MINIGAMECCGSTARTDECKCHARACTEREXCELREPOSITORY_SELECT_CCGIDS_OFFSET))(arg, arg, nullptr);
		}

	};
}

