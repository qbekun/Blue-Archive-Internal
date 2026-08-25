#pragma once
#include "unitysdk.h"

#define UIPARCELGRID_SETDATA_OFFSET UNITYSDK_OFFSET(0x2345740)
#define UIPARCELGRID_GET_PARCELCARDS_OFFSET UNITYSDK_OFFSET(0x23458D0)
#define UIPARCELGRID_.CTOR_OFFSET UNITYSDK_OFFSET(0x2345990)

	inline static constexpr unsigned int UIParcelGrid_TypeDefinitionIndex = 4998;

	class UIParcelGrid : public ::System::Xml::DtdParser
	{
	public:
		Il2CppObject* parcelCards; // 0x28

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPARCELGRID_SETDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParcelCards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARCELGRID_GET_PARCELCARDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPARCELGRID_.CTOR_OFFSET))(nullptr);
		}

	};

