#pragma once
#include "unitysdk.h"

class UIScrollView;
class UIGrid;
class UIPopup_Option_Toggle_Dynamic_Part;

#define UIPOPUP_OPTION_TOGGLE_DYNAMIC_RESETUILAYOUT_OFFSET UNITYSDK_OFFSET(0x271A720)
#define UIPOPUP_OPTION_TOGGLE_DYNAMIC_INSTANTIATEPARTUI_OFFSET UNITYSDK_OFFSET(0x271A8E0)
#define UIPOPUP_OPTION_TOGGLE_DYNAMIC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x271AA90)
#define UIPOPUP_OPTION_TOGGLE_DYNAMIC_ONTOGGLE_OFFSET UNITYSDK_OFFSET(0x271AF40)
#define UIPOPUP_OPTION_TOGGLE_DYNAMIC_.CTOR_OFFSET UNITYSDK_OFFSET(0x271B050)

	inline static constexpr unsigned int UIPopup_Option_Toggle_Dynamic_TypeDefinitionIndex = 7155;

	class UIPopup_Option_Toggle_Dynamic : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x28
		UIGrid* grid; // 0x30
		UIPopup_Option_Toggle_Dynamic_Part* partPrototype; // 0x38
		Il2CppObject* partInstances; // 0x40
		Il2CppObject* toggleToValueMapping; // 0x48

		::System::Void ResetUILayout()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TOGGLE_DYNAMIC_RESETUILAYOUT_OFFSET))(nullptr);
		}

		::System::Void InstantiatePartUI(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TOGGLE_DYNAMIC_INSTANTIATEPARTUI_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Object* arg, ::System::Collections::IList* arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			((::System::Void(*)(::System::Object*, ::System::Collections::IList*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TOGGLE_DYNAMIC_INITIALIZE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void OnToggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TOGGLE_DYNAMIC_ONTOGGLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_OPTION_TOGGLE_DYNAMIC_.CTOR_OFFSET))(nullptr);
		}

	};

