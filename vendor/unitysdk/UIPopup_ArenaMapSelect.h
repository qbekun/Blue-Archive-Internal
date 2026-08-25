#pragma once
#include "unitysdk.h"

class UIScrollView;
class UIWrapContent;
class MXButton;
class ArenaMapElement;
namespace UnityEngine { class GameObject; }

#define UIPOPUP_ARENAMAPSELECT_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x2200360)
#define UIPOPUP_ARENAMAPSELECT_REFRESH_OFFSET UNITYSDK_OFFSET(0x2200460)
#define UIPOPUP_ARENAMAPSELECT_RESETSCROLL_OFFSET UNITYSDK_OFFSET(0x2200550)
#define UIPOPUP_ARENAMAPSELECT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2200780)
#define UIPOPUP_ARENAMAPSELECT_SET_MAPCONTENTS_OFFSET UNITYSDK_OFFSET(0x2200970)
#define UIPOPUP_ARENAMAPSELECT_CHANGEMAP_OFFSET UNITYSDK_OFFSET(0x2200990)
#define UIPOPUP_ARENAMAPSELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2200D70)
#define UIPOPUP_ARENAMAPSELECT_SETDATA_OFFSET UNITYSDK_OFFSET(0x21FF4C0)
#define UIPOPUP_ARENAMAPSELECT_GET_MAPCONTENTS_OFFSET UNITYSDK_OFFSET(0x2201700)
#define UIPOPUP_ARENAMAPSELECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2201710)
#define UIPOPUP_ARENAMAPSELECT_LOADARENAMAPTABLE_OFFSET UNITYSDK_OFFSET(0x2200DF0)

	inline static constexpr unsigned int UIPopup_ArenaMapSelect_TypeDefinitionIndex = 4295;

	class UIPopup_ArenaMapSelect : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0xD8
		UIWrapContent* wrapContent; // 0xE0
		MXButton* closeButton; // 0xE8
		::System::Int64 currentRank; // 0xF0
		ArenaMapElement* currentMap; // 0xF8
		::System::Int64 currentMapId; // 0x100
		Il2CppObject* _MapContents_k__BackingField; // 0x108

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAMAPSELECT_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void Refresh(::UnityEngine::GameObject* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAMAPSELECT_REFRESH_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ResetScroll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAMAPSELECT_RESETSCROLL_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAMAPSELECT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void set_MapContents(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAMAPSELECT_SET_MAPCONTENTS_OFFSET))(arg, nullptr);
		}

		::System::Void ChangeMap(ArenaMapElement* arg)
		{
			((::System::Void(*)(ArenaMapElement*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAMAPSELECT_CHANGEMAP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAMAPSELECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAMAPSELECT_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* get_MapContents()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAMAPSELECT_GET_MAPCONTENTS_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAMAPSELECT_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void LoadArenaMapTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ARENAMAPSELECT_LOADARENAMAPTABLE_OFFSET))(nullptr);
		}

	};

