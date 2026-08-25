#pragma once
#include "unitysdk.h"

#define UIPOPUP_OPTION_PC_TITLE_GET_INSERTLANGUAGETABATLAST_OFFSET UNITYSDK_OFFSET(0x2724EA0)
#define UIPOPUP_OPTION_PC_TITLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2724EB0)

	inline static constexpr unsigned int UIPopup_Option_PC_Title_TypeDefinitionIndex = 7168;

	class UIPopup_Option_PC_Title : public Il2CppObject
	{
	public:
		::System::Boolean get_InsertLanguageTabAtLast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_PC_TITLE_GET_INSERTLANGUAGETABATLAST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_PC_TITLE_.CTOR_OFFSET))(nullptr);
		}

	};

