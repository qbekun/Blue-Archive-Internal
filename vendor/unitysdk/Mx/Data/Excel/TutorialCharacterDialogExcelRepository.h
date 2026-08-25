#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9870)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCELREPOSITORY_SELECT_TALKID_OFFSET UNITYSDK_OFFSET(0x1CA98B0)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCELREPOSITORY_SELECTFIRST_TALKID_OFFSET UNITYSDK_OFFSET(0x1CA9BB0)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCELREPOSITORY_SELECT_TALKIDS_OFFSET UNITYSDK_OFFSET(0x1CA9ED0)
#define MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CAA2D0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TutorialCharacterDialogExcelRepository_TypeDefinitionIndex = 19644;

	class TutorialCharacterDialogExcelRepository : public <>c__DisplayClass37_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_TalkId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCELREPOSITORY_SELECT_TALKID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_TalkId(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCELREPOSITORY_SELECTFIRST_TALKID_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* Select_TalkIds(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCELREPOSITORY_SELECT_TALKIDS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALCHARACTERDIALOGEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

	};
}

