#pragma once
#include "unitysdk.h"

class UILabel;
class UIScrollView;
class UIGrid;

#define UIPOPUP_SHOWPARCELLISTALL_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xB1B620)
#define UIPOPUP_SHOWPARCELLISTALL_GET_GRID_OFFSET UNITYSDK_OFFSET(0xB1B690)
#define UIPOPUP_SHOWPARCELLISTALL_GET_PARCELCARDS_OFFSET UNITYSDK_OFFSET(0xB1B700)
#define UIPOPUP_SHOWPARCELLISTALL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB1B7B0)
#define UIPOPUP_SHOWPARCELLISTALL_SETDATA_OFFSET UNITYSDK_OFFSET(0xB1B900)
#define UIPOPUP_SHOWPARCELLISTALL_SETDATA_OFFSET UNITYSDK_OFFSET(0xB1C7E0)
#define UIPOPUP_SHOWPARCELLISTALL_.CTOR_OFFSET UNITYSDK_OFFSET(0xB1CCB0)

	inline static constexpr unsigned int UIPopup_ShowParcelListAll_TypeDefinitionIndex = 8236;

	class UIPopup_ShowParcelListAll : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0xD8
		UIScrollView* _scrollView; // 0xE0
		UIGrid* _grid; // 0xE8
		Il2CppObject* _parcelCards; // 0xF0

		UIScrollView* get_scrollView()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SHOWPARCELLISTALL_GET_SCROLLVIEW_OFFSET))(nullptr);
		}

		UIGrid* get_grid()
		{
			return ((UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SHOWPARCELLISTALL_GET_GRID_OFFSET))(nullptr);
		}

		Il2CppObject* get_parcelCards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SHOWPARCELLISTALL_GET_PARCELCARDS_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SHOWPARCELLISTALL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str, Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SHOWPARCELLISTALL_SETDATA_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void SetData(::System::String* str, Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SHOWPARCELLISTALL_SETDATA_OFFSET))(str, arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_SHOWPARCELLISTALL_.CTOR_OFFSET))(nullptr);
		}

	};

