#pragma once
#include "unitysdk.h"

class UIDragScrollView;
class UIWidget;
class UIScrollView;
namespace UnityEngine { class Transform; }
class UIPanel;

#define LISTPOPULATORUNIT_GET_ITEMDATAINDEX_OFFSET UNITYSDK_OFFSET(0xC10FC0)
#define LISTPOPULATORUNIT_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xC10FD0)
#define LISTPOPULATORUNIT_SET_ITEMDATAINDEX_OFFSET UNITYSDK_OFFSET(0xC10FE0)
#define LISTPOPULATORUNIT_SETBEHAVIOR_OFFSET UNITYSDK_OFFSET(0xC10FF0)
#define LISTPOPULATORUNIT_INIT_OFFSET UNITYSDK_OFFSET(0xC11090)
#define LISTPOPULATORUNIT_GET_CURRENTMOMENTUM_OFFSET UNITYSDK_OFFSET(0xC110A0)
#define LISTPOPULATORUNIT_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xC110E0)
#define LISTPOPULATORUNIT_INITVISIBILITY_OFFSET UNITYSDK_OFFSET(0xC112D0)
#define LISTPOPULATORUNIT_SETITEMDATAINDEX_OFFSET UNITYSDK_OFFSET(0xC11340)
#define LISTPOPULATORUNIT_GETHEIGHT_OFFSET UNITYSDK_OFFSET(0xC11350)
#define LISTPOPULATORUNIT_GET_POOLINDEX_OFFSET UNITYSDK_OFFSET(0xC11370)
#define LISTPOPULATORUNIT_CHECKVISIBILTY_OFFSET UNITYSDK_OFFSET(0xC11380)
#define LISTPOPULATORUNIT_GET_PANEL_OFFSET UNITYSDK_OFFSET(0xC11250)
#define LISTPOPULATORUNIT_GET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xC113D0)
#define LISTPOPULATORUNIT_SET_POOLINDEX_OFFSET UNITYSDK_OFFSET(0xC11450)
#define LISTPOPULATORUNIT_UPDATE_OFFSET UNITYSDK_OFFSET(0xC11460)
#define LISTPOPULATORUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xC11590)

	inline static constexpr unsigned int ListPopulatorUnit_TypeDefinitionIndex = 8841;

	class ListPopulatorUnit : public Il2CppObject
	{
	public:
		::System::Int32 _ItemDataIndex_k__BackingField; // 0x18
		::System::Int32 _PoolIndex_k__BackingField; // 0x1C
		::System::Boolean isVisible; // 0x20
		UIDragScrollView* dragScrollView; // 0x28
		UIWidget* visibilityWidget; // 0x30
		UIScrollView* populatorScrollView; // 0x38
		Il2CppObject* visibilityChangeAction; // 0x40
		::UnityEngine::Transform* myTransfrom; // 0x48

		::System::Int32 get_ItemDataIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_GET_ITEMDATAINDEX_OFFSET))(nullptr);
		}

		UIScrollView* get_ScrollView()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_GET_SCROLLVIEW_OFFSET))(nullptr);
		}

		::System::Void set_ItemDataIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_SET_ITEMDATAINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void SetBehavior(UIScrollView* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(UIScrollView*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_SETBEHAVIOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_INIT_OFFSET))(nullptr);
		}

		::System::Single get_CurrentMomentum()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_GET_CURRENTMOMENTUM_OFFSET))(nullptr);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_ISVISIBLE_OFFSET))(nullptr);
		}

		::System::Void InitVisibility()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_INITVISIBILITY_OFFSET))(nullptr);
		}

		::System::Void SetItemDataIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_SETITEMDATAINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_GETHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_PoolIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_GET_POOLINDEX_OFFSET))(nullptr);
		}

		::System::Void CheckVisibilty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_CHECKVISIBILTY_OFFSET))(nullptr);
		}

		UIPanel* get_Panel()
		{
			return ((UIPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_GET_PANEL_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_MyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_GET_MYTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void set_PoolIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_SET_POOLINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

