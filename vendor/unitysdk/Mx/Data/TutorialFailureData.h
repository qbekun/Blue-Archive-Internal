#pragma once
#include "../../unitysdk.h"

namespace FlatData { class TutorialFailureContentType; }

#define MX_DATA_TUTORIALFAILUREDATA_SELECTCOMMONIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1963DA0)
#define MX_DATA_TUTORIALFAILUREDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1963EE0)
#define MX_DATA_TUTORIALFAILUREDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x1963EF0)
#define MX_DATA_TUTORIALFAILUREDATA_SELECTIMAGEEXCEL_OFFSET UNITYSDK_OFFSET(0x1963F30)
#define MX_DATA_TUTORIALFAILUREDATA_GETALLIMAGEEXCELOFTHISCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x19642C0)

namespace MX::Data
{
	inline static constexpr unsigned int TutorialFailureData_TypeDefinitionIndex = 16433;

	class TutorialFailureData : public Il2CppObject
	{
	public:
		Il2CppObject* SelectCommonImageExcel()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TUTORIALFAILUREDATA_SELECTCOMMONIMAGEEXCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TUTORIALFAILUREDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TUTORIALFAILUREDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		Il2CppObject* SelectImageExcel(::FlatData::TutorialFailureContentType* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::FlatData::TutorialFailureContentType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TUTORIALFAILUREDATA_SELECTIMAGEEXCEL_OFFSET))(arg, str, nullptr);
		}

		Il2CppObject* GetAllImageExcelOfThisContentType(::FlatData::TutorialFailureContentType* arg, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::FlatData::TutorialFailureContentType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TUTORIALFAILUREDATA_GETALLIMAGEEXCELOFTHISCONTENTTYPE_OFFSET))(arg, str, nullptr);
		}

	};
}

