#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class TutorialFailureContentType; }

#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCELREPOSITORY_SELECT_CONTENTS_OFFSET UNITYSDK_OFFSET(0x1CAC3C0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCELREPOSITORY_SELECTFIRST_CONTENTS_OFFSET UNITYSDK_OFFSET(0x1CAC710)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CACA70)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1CACAB0)
#define MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCELREPOSITORY_SELECT_CONTENTSS_OFFSET UNITYSDK_OFFSET(0x1CACC20)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TutorialFailureImageExcelRepository_TypeDefinitionIndex = 19658;

	class TutorialFailureImageExcelRepository : public <co_Retry>d__39
	{
	public:
		Il2CppObject* Select_Contents(::FlatData::TutorialFailureContentType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TutorialFailureContentType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCELREPOSITORY_SELECT_CONTENTS_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* SelectFirst_Contents(::FlatData::TutorialFailureContentType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::TutorialFailureContentType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCELREPOSITORY_SELECTFIRST_CONTENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_Contentss(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TUTORIALFAILUREIMAGEEXCELREPOSITORY_SELECT_CONTENTSS_OFFSET))(arg, arg, nullptr);
		}

	};
}

