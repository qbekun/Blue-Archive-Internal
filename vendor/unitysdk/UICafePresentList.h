#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UIGrid;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UICAFEPRESENTLIST_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x2282DD0)
#define UICAFEPRESENTLIST_ONGIVEGIFTPROCESSEND_OFFSET UNITYSDK_OFFSET(0x22740B0)
#define UICAFEPRESENTLIST_HANDLEGIVEGIFTRESULTMESSAGE_OFFSET UNITYSDK_OFFSET(0x2282F20)
#define UICAFEPRESENTLIST_GET_SLOTCOUNTS_OFFSET UNITYSDK_OFFSET(0x2282ED0)
#define UICAFEPRESENTLIST_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x2283600)
#define UICAFEPRESENTLIST_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x2282DE0)
#define UICAFEPRESENTLIST_SET_MAXPAGE_OFFSET UNITYSDK_OFFSET(0x2283610)
#define UICAFEPRESENTLIST_SETLIST_OFFSET UNITYSDK_OFFSET(0x2282F40)
#define UICAFEPRESENTLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0x2277B90)
#define UICAFEPRESENTLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x2283840)
#define UICAFEPRESENTLIST_CANCELDRAGGINGSLOT_OFFSET UNITYSDK_OFFSET(0x2276D20)
#define UICAFEPRESENTLIST_ONCLICKPREV_OFFSET UNITYSDK_OFFSET(0x2283A40)
#define UICAFEPRESENTLIST_GET_MAXPAGE_OFFSET UNITYSDK_OFFSET(0x2283A60)
#define UICAFEPRESENTLIST_ONCLICKNEXT_OFFSET UNITYSDK_OFFSET(0x2283A70)
#define UICAFEPRESENTLIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2283A90)
#define UICAFEPRESENTLIST_SET_CURRENTPAGE_OFFSET UNITYSDK_OFFSET(0x2283C10)
#define UICAFEPRESENTLIST_SETACTIVENAVIGATIONBUTTONS_OFFSET UNITYSDK_OFFSET(0x2283540)
#define UICAFEPRESENTLIST_GET_CURRENTPAGE_OFFSET UNITYSDK_OFFSET(0x2283C20)
#define UICAFEPRESENTLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x2283C30)

	inline static constexpr unsigned int UICafePresentList_TypeDefinitionIndex = 4669;

	class UICafePresentList : public Il2CppObject
	{
	public:
		MXButton* prevButton; // 0x18
		MXButton* nextButton; // 0x20
		::UnityEngine::GameObject* noGiftMessage; // 0x28
		UIGrid* presentGrid; // 0x30
		Il2CppObject* slots; // 0x38
		::System::Int32 _CurrentPage_k__BackingField; // 0x40
		::System::Int32 _MaxPage_k__BackingField; // 0x44
		::System::Int32 _ItemCount_k__BackingField; // 0x48

		::System::Void set_ItemCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_SET_ITEMCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void OnGiveGiftProcessEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_ONGIVEGIFTPROCESSEND_OFFSET))(nullptr);
		}

		::System::Boolean HandleGiveGiftResultMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_HANDLEGIVEGIFTRESULTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SlotCounts()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_GET_SLOTCOUNTS_OFFSET))(nullptr);
		}

		::System::Int32 get_ItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_GET_ITEMCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Slots()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_GET_SLOTS_OFFSET))(nullptr);
		}

		::System::Void set_MaxPage(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_SET_MAXPAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_SETLIST_OFFSET))(nullptr);
		}

		::System::Void SetData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_SETDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CancelDraggingSlot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_CANCELDRAGGINGSLOT_OFFSET))(nullptr);
		}

		::System::Void OnClickPrev()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_ONCLICKPREV_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxPage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_GET_MAXPAGE_OFFSET))(nullptr);
		}

		::System::Void OnClickNext()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_ONCLICKNEXT_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void set_CurrentPage(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_SET_CURRENTPAGE_OFFSET))(arg, nullptr);
		}

		::System::Void SetActiveNavigationButtons()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_SETACTIVENAVIGATIONBUTTONS_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_GET_CURRENTPAGE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEPRESENTLIST_AWAKE_OFFSET))(nullptr);
		}

	};

