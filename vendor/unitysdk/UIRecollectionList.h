#pragma once
#include "unitysdk.h"

class UIRecollectionListController;

#define UIRECOLLECTIONLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x27ABB50)
#define UIRECOLLECTIONLIST_CO_LOADING_OFFSET UNITYSDK_OFFSET(0x27ABB60)
#define UIRECOLLECTIONLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x27ABBC0)

	inline static constexpr unsigned int UIRecollectionList_TypeDefinitionIndex = 7501;

	class UIRecollectionList : public Il2CppObject
	{
	public:
		UIRecollectionListController* listController; // 0xD8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLIST_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLIST_SETDATA_OFFSET))(arg, nullptr);
		}

	};

