#pragma once
#include "unitysdk.h"

class MXToggle;

#define TABCONTROLLER`1_GET_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_SET_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_GET_ISMULTISELECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_GET_ALLOWNONESELECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_GET_CURRENTSELECTLIST_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_AWAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_CHANGEKEYS_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_SETDYNAMICKEYSANDTABS_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_SETTABS_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_SETCANTABFUNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_ONTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_SETTAB_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_SETDISABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_SETDISABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_ONALLTOGGLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_SETALLVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_GETSELECTEDCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_ISALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_INITIALIZETABMAPPING_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TABCONTROLLER`1__SETTABS_B__27_0_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int TabController`1_TypeDefinitionIndex = 3379;

	class TabController`1 : public ::TriInspector::IndentAttribute
	{
	public:
		::System::Boolean _Init_k__BackingField; // 0x0
		::Il2CppArray<::System::Object*>* Tabs; // 0x0
		::Il2CppArray<::System::Object*>* Keys; // 0x0
		MXToggle* All; // 0x0
		Il2CppObject* _Current_k__BackingField; // 0x0
		::Il2CppArray<::System::Object*>* SelectSprite; // 0x0
		Il2CppObject* OnChanged; // 0x0
		Il2CppObject* toggleDic; // 0x0

		::System::Boolean get_Init()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_GET_INIT_OFFSET))(nullptr);
		}

		::System::Void set_Init(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_SET_INIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMultiSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_GET_ISMULTISELECT_OFFSET))(nullptr);
		}

		::System::Boolean get_AllowNoneSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_GET_ALLOWNONESELECT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Current()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void set_Current(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_SET_CURRENT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CurrentSelectList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_GET_CURRENTSELECTLIST_OFFSET))(nullptr);
		}

		MXToggle* get_Item(Il2CppObject* arg)
		{
			return ((MXToggle*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void ChangeKeys(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_CHANGEKEYS_OFFSET))(arg, nullptr);
		}

		::System::Void SetDynamicKeysAndTabs(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_SETDYNAMICKEYSANDTABS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_SETTABS_OFFSET))(nullptr);
		}

		::System::Void SetCanTabFunc(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_SETCANTABFUNC_OFFSET))(arg, nullptr);
		}

		::System::Void OnToggleChanged(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_ONTOGGLECHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetTab(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_SETTAB_OFFSET))(arg, nullptr);
		}

		::System::Void SetDisable(Il2CppObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_SETDISABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetDisable(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_SETDISABLE_OFFSET))(arg, nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void OnAllToggle(MXToggle* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(MXToggle*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_ONALLTOGGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetAllValues(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_SETALLVALUES_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetSelectedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_GETSELECTEDCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean IsAll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_ISALL_OFFSET))(nullptr);
		}

		::System::Void InitializeTabMapping()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_INITIALIZETABMAPPING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SetTabs_b__27_0(::System::Int32 arg)
		{
			return ((::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TABCONTROLLER`1__SETTABS_B__27_0_OFFSET))(arg, nullptr);
		}

	};

