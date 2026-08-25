#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TUTORIALEXCELREPOSITORY_SELECTFIRST_ID_OFFSET UNITYSDK_OFFSET(0x1CAAE50)
#define MX_DATA_EXCEL_TUTORIALEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CAB170)
#define MX_DATA_EXCEL_TUTORIALEXCELREPOSITORY_SELECT_ID_OFFSET UNITYSDK_OFFSET(0x1CAB2E0)
#define MX_DATA_EXCEL_TUTORIALEXCELREPOSITORY_SELECT_IDS_OFFSET UNITYSDK_OFFSET(0x1CAB5E0)
#define MX_DATA_EXCEL_TUTORIALEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB9E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TutorialExcelRepository_TypeDefinitionIndex = 19651;

	class TutorialExcelRepository : public <co_CreateStage>d__37
	{
	public:
		Il2CppObject* SelectFirst_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCELREPOSITORY_SELECTFIRST_ID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_ID(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCELREPOSITORY_SELECT_ID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_IDs(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCELREPOSITORY_SELECT_IDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

