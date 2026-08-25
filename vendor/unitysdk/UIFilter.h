#pragma once
#include "unitysdk.h"

class UIFilterGroup;
class UITable;

#define UIFILTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAF4070)
#define UIFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xAF4120)
#define UIFILTER_REFRESHCURRENTGROUPS_OFFSET UNITYSDK_OFFSET(0xAF41A0)
#define UIFILTER_GET_FILTERGROUPS_OFFSET UNITYSDK_OFFSET(0xAF4570)
#define UIFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xAF4580)
#define UIFILTER_REPOSITION_OFFSET UNITYSDK_OFFSET(0xAF4080)
#define UIFILTER_GET_CURRENTGROUPS_OFFSET UNITYSDK_OFFSET(0xAF4620)
#define UIFILTER_SET_CURRENTGROUPS_OFFSET UNITYSDK_OFFSET(0xAF4630)
#define UIFILTER_SET_FILTERGROUPS_OFFSET UNITYSDK_OFFSET(0xAF4640)

	inline static constexpr unsigned int UIFilter_TypeDefinitionIndex = 8137;

	class UIFilter : public Il2CppObject
	{
	public:
		UIFilterGroup* filterGroupPrefab; // 0x18
		UITable* filterGroupTable; // 0x20
		Il2CppObject* _FilterGroups_k__BackingField; // 0x28
		Il2CppObject* _CurrentGroups_k__BackingField; // 0x30

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshCurrentGroups(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTER_REFRESHCURRENTGROUPS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_FilterGroups()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTER_GET_FILTERGROUPS_OFFSET))(nullptr);
		}

		::System::Void Init(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTER_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void Reposition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTER_REPOSITION_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentGroups()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTER_GET_CURRENTGROUPS_OFFSET))(nullptr);
		}

		::System::Void set_CurrentGroups(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTER_SET_CURRENTGROUPS_OFFSET))(arg, nullptr);
		}

		::System::Void set_FilterGroups(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTER_SET_FILTERGROUPS_OFFSET))(arg, nullptr);
		}

	};

