#pragma once
#include "../../unitysdk.h"

#define MX_DATA_TUTORIALCHARACTERDIALOGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1963CB0)
#define MX_DATA_TUTORIALCHARACTERDIALOGDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x1963CC0)
#define MX_DATA_TUTORIALCHARACTERDIALOGDATA_GETDIALGLIST_OFFSET UNITYSDK_OFFSET(0x1963D00)

namespace MX::Data
{
	inline static constexpr unsigned int TutorialCharacterDialogData_TypeDefinitionIndex = 16429;

	class TutorialCharacterDialogData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TUTORIALCHARACTERDIALOGDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TUTORIALCHARACTERDIALOGDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetDialgList(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_TUTORIALCHARACTERDIALOGDATA_GETDIALGLIST_OFFSET))(arg, nullptr);
		}

	};
}

