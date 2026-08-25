#pragma once
#include "unitysdk.h"

#define UIFILTERSORTOPTIONLISTBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xAFA530)
#define UIFILTERSORTOPTIONLISTBASE_SET_EXCEPTEDFILTERTABS_OFFSET UNITYSDK_OFFSET(0xAFF2A0)
#define UIFILTERSORTOPTIONLISTBASE_GET_EXCEPTEDFILTERTABS_OFFSET UNITYSDK_OFFSET(0xAFF2B0)
#define UIFILTERSORTOPTIONLISTBASE_LOADANDSETTABS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIFILTERSORTOPTIONLISTBASE_SAVEFILTER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIFILTERSORTOPTIONLISTBASE_SETEXCEPTEDFILTER_OFFSET UNITYSDK_OFFSET(0xAFC3B0)
#define UIFILTERSORTOPTIONLISTBASE_RESETALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UIFILTERSORTOPTIONLISTBASE_RESTOREFILTER_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UIFilterSortOptionListBase_TypeDefinitionIndex = 8172;

	class UIFilterSortOptionListBase : public Il2CppObject
	{
	public:
		Il2CppObject* _ExceptedFilterTabs_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTOPTIONLISTBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ExceptedFilterTabs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTOPTIONLISTBASE_SET_EXCEPTEDFILTERTABS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExceptedFilterTabs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTOPTIONLISTBASE_GET_EXCEPTEDFILTERTABS_OFFSET))(nullptr);
		}

		::System::Void LoadAndSetTabs()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTOPTIONLISTBASE_LOADANDSETTABS_OFFSET))(nullptr);
		}

		::System::Void SaveFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTOPTIONLISTBASE_SAVEFILTER_OFFSET))(nullptr);
		}

		::System::Void SetExceptedFilter(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTOPTIONLISTBASE_SETEXCEPTEDFILTER_OFFSET))(arg, nullptr);
		}

		::System::Void ResetAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTOPTIONLISTBASE_RESETALL_OFFSET))(nullptr);
		}

		::System::Void RestoreFilter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFILTERSORTOPTIONLISTBASE_RESTOREFILTER_OFFSET))(nullptr);
		}

	};

