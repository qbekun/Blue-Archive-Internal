#pragma once
#include "unitysdk.h"

#define UIPOPUP_OPTION_TITLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2724EC0)
#define UIPOPUP_OPTION_TITLE_GET_INSERTLANGUAGETABATLAST_OFFSET UNITYSDK_OFFSET(0x2724ED0)

	inline static constexpr unsigned int UIPopup_Option_Title_TypeDefinitionIndex = 7169;

	class UIPopup_Option_Title : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TITLE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_InsertLanguageTabAtLast()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TITLE_GET_INSERTLANGUAGETABATLAST_OFFSET))(nullptr);
		}

	};

