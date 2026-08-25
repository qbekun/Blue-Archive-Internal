#pragma once
#include "unitysdk.h"

class UIIdCardBackgroundListController;
class IdCardBackgroundListElementData;

#define UIIDCARDBACKGROUNDLISTELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2577150)
#define UIIDCARDBACKGROUNDLISTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2577670)
#define UIIDCARDBACKGROUNDLISTELEMENT_GET_LISTCONTOLLER_OFFSET UNITYSDK_OFFSET(0x25775B0)

	inline static constexpr unsigned int UIIdCardBackgroundListElement_TypeDefinitionIndex = 6173;

	class UIIdCardBackgroundListElement : public ::System::Xml::XPath::XPathResultType
	{
	public:
		UIIdCardBackgroundListController* _ListContoller; // 0x28
		Il2CppObject* bgUnits; // 0x30

		::System::Void SetData(IdCardBackgroundListElementData* arg)
		{
			((::System::Void(*)(IdCardBackgroundListElementData*, ::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTELEMENT_.CTOR_OFFSET))(nullptr);
		}

		UIIdCardBackgroundListController* get_ListContoller()
		{
			return ((UIIdCardBackgroundListController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIIDCARDBACKGROUNDLISTELEMENT_GET_LISTCONTOLLER_OFFSET))(nullptr);
		}

	};

