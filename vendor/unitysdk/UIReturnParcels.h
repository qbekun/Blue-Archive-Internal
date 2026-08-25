#pragma once
#include "unitysdk.h"

class UIGrid;

#define UIRETURNPARCELS_SETPARCELS_OFFSET UNITYSDK_OFFSET(0x27ADA10)
#define UIRETURNPARCELS_.CTOR_OFFSET UNITYSDK_OFFSET(0x27ADDF0)
#define UIRETURNPARCELS_GET_PARCELCARDS_OFFSET UNITYSDK_OFFSET(0x27ADD40)
#define UIRETURNPARCELS_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x27ADE00)
#define UIRETURNPARCELS_SETDATA_OFFSET UNITYSDK_OFFSET(0x27ADE20)

	inline static constexpr unsigned int UIReturnParcels_TypeDefinitionIndex = 7508;

	class UIReturnParcels : public Il2CppObject
	{
	public:
		UIGrid* parcelsGrid; // 0xD8
		Il2CppObject* parcelCards; // 0xE0

		::System::Void SetParcels(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIRETURNPARCELS_SETPARCELS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRETURNPARCELS_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParcelCards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRETURNPARCELS_GET_PARCELCARDS_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRETURNPARCELS_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIRETURNPARCELS_SETDATA_OFFSET))(arg, nullptr);
		}

	};

