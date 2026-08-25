#pragma once
#include "unitysdk.h"

class UILabel;
class UIGrid;

#define UIPOPUP_WORLDRAID_RESULTITEMALL_GET_GRID_OFFSET UNITYSDK_OFFSET(0xBF2130)
#define UIPOPUP_WORLDRAID_RESULTITEMALL_GET_PARCELCARDS_OFFSET UNITYSDK_OFFSET(0xBF21A0)
#define UIPOPUP_WORLDRAID_RESULTITEMALL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xBF2250)
#define UIPOPUP_WORLDRAID_RESULTITEMALL_SETDATA_OFFSET UNITYSDK_OFFSET(0xBF2340)
#define UIPOPUP_WORLDRAID_RESULTITEMALL_SETDATA_OFFSET UNITYSDK_OFFSET(0xBEB000)
#define UIPOPUP_WORLDRAID_RESULTITEMALL_.CTOR_OFFSET UNITYSDK_OFFSET(0xBF2BF0)

	inline static constexpr unsigned int UIPopup_WorldRaid_ResultItemAll_TypeDefinitionIndex = 8748;

	class UIPopup_WorldRaid_ResultItemAll : public Il2CppObject
	{
	public:
		UILabel* titleLabel; // 0xD8
		UIGrid* _grid; // 0xE0
		Il2CppObject* _parcelCards; // 0xE8

		UIGrid* get_grid()
		{
			return ((UIGrid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_RESULTITEMALL_GET_GRID_OFFSET))(nullptr);
		}

		Il2CppObject* get_parcelCards()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_RESULTITEMALL_GET_PARCELCARDS_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_RESULTITEMALL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_RESULTITEMALL_SETDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetData(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_RESULTITEMALL_SETDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_WORLDRAID_RESULTITEMALL_.CTOR_OFFSET))(nullptr);
		}

	};

