#pragma once
#include "unitysdk.h"

class UIExchangeItemInfo;

#define UIEXCHANGEITEMELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2701680)
#define UIEXCHANGEITEMELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x27016C0)

	inline static constexpr unsigned int UIExchangeItemElement_TypeDefinitionIndex = 7078;

	class UIExchangeItemElement : public ::System::Xml::Serialization::XmlArrayAttribute
	{
	public:
		Il2CppObject* items; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEXCHANGEITEMELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(UIExchangeItemInfo* arg)
		{
			((::System::Void(*)(UIExchangeItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIEXCHANGEITEMELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

