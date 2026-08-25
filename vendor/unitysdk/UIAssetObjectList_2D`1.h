#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class MXButton;
class UILabel;
class UIScrollView;
class UIPanel;

#define UIASSETOBJECTLIST_2D`1_GET_SCROLLPANEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_GET_ISMULTISELECTABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_GET_CURSELECTED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_GET_TOTALDATACOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_GET_SHOWREPRESENTATIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_SET_SHOWREPRESENTATIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_AWAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_START_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_LOADUNIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_SETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_SETDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_GETCELLDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_SETDATALIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_GETDATALIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_SETUI_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_SETCALLBACKLISTENER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_OPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_ONCLICKFILTERBUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_ONCLICKSORTBUTTON_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_INITIALIZEITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_RESIZEPOOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIASSETOBJECTLIST_2D`1__SETDATALIST_B__38_1_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UIAssetObjectList_2D`1_TypeDefinitionIndex = 4326;

	class UIAssetObjectList_2D`1 : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* MyRootGameObject; // 0x0
		MXButton* FilterButton; // 0x0
		MXButton* SortButton; // 0x0
		UILabel* CardCountText; // 0x0
		MXButton* CloseButton; // 0x0
		::System::String* cellUnitPrefPath; // 0x0
		::System::Int32 cellBufferSize; // 0x0
		::System::Int32 ItemInOneCell; // 0x0
		UIScrollView* scrollView; // 0x0
		::System::Boolean initialized; // 0x0
		::System::Action* onCloseButtonClickCallback; // 0x0
		::System::Action* onFilterButtonClickCallback; // 0x0
		::System::Action* onSortButtonClickCallback; // 0x0
		Il2CppObject* unit; // 0x0
		Il2CppObject* cellData; // 0x0
		::System::Boolean isMultiSelectable; // 0x0
		Il2CppObject* curSelected; // 0x0
		::System::Boolean IsOpen; // 0x0
		::System::Boolean _ShowRepresentative_k__BackingField; // 0x0

		UIPanel* get_ScrollPanel()
		{
			return ((UIPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_GET_SCROLLPANEL_OFFSET))(nullptr);
		}

		::System::Int64 get_First()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_GET_FIRST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultiSelectable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_GET_ISMULTISELECTABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurSelected()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_GET_CURSELECTED_OFFSET))(nullptr);
		}

		::System::Int32 get_TotalDataCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_GET_TOTALDATACOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowRepresentative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_GET_SHOWREPRESENTATIVE_OFFSET))(nullptr);
		}

		::System::Void set_ShowRepresentative(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_SET_SHOWREPRESENTATIVE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_START_OFFSET))(nullptr);
		}

		::System::Void LoadUnit(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_LOADUNIT_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_SETDATA_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCellData()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_GETCELLDATA_OFFSET))(nullptr);
		}

		::System::Void SetDataList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_SETDATALIST_OFFSET))(nullptr);
		}

		Il2CppObject* GetDataList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_GETDATALIST_OFFSET))(nullptr);
		}

		::System::Void SetUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_SETUI_OFFSET))(nullptr);
		}

		::System::Void SetCallbackListener(::System::Action* arg, ::System::Action* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_SETCALLBACKLISTENER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Open()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_OPEN_OFFSET))(nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_CLOSE_OFFSET))(nullptr);
		}

		::System::Void OnClickFilterButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_ONCLICKFILTERBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnClickSortButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_ONCLICKSORTBUTTON_OFFSET))(nullptr);
		}

		::System::Void InitializeItem(::UnityEngine::GameObject* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_INITIALIZEITEM_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ResizePool()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_RESIZEPOOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 _SetDataList_b__38_1(Il2CppObject* arg)
		{
			return ((::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIASSETOBJECTLIST_2D`1__SETDATALIST_B__38_1_OFFSET))(arg, nullptr);
		}

	};

