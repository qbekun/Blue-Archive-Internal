#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class KeyMappingExcel; }
namespace FlatData { class DisplayGroupType; }
namespace UnityEngine { class KeyCode; }
namespace MX::Data::Excel { class KeyMappingTabExcel&; }

#define MX_DATA_KEYMAPPINGDATA_GETKEYMAPPINGDATA_OFFSET UNITYSDK_OFFSET(0x184F7B0)
#define MX_DATA_KEYMAPPINGDATA_GETKEYMAPPINGNONEFOCUSVALUE_OFFSET UNITYSDK_OFFSET(0x184F800)
#define MX_DATA_KEYMAPPINGDATA_CONVERTTARGETKEYCODETOKEYS_OFFSET UNITYSDK_OFFSET(0x184F8B0)
#define MX_DATA_KEYMAPPINGDATA_GETCONTROLLERICONPATHS_OFFSET UNITYSDK_OFFSET(0x184FAF0)
#define MX_DATA_KEYMAPPINGDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x184FD10)
#define MX_DATA_KEYMAPPINGDATA_GETDISPLAYGROUPSTRING_OFFSET UNITYSDK_OFFSET(0x1851EF0)
#define MX_DATA_KEYMAPPINGDATA_SETDATA_OFFSET UNITYSDK_OFFSET(0x1852010)
#define MX_DATA_KEYMAPPINGDATA_GETENABLECUSTOMKEYMAPPINGDATAS_OFFSET UNITYSDK_OFFSET(0x1852140)
#define MX_DATA_KEYMAPPINGDATA_CONVERTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1852290)
#define MX_DATA_KEYMAPPINGDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1852420)
#define MX_DATA_KEYMAPPINGDATA_TRYGETKEYMAPPINGTABDATA_OFFSET UNITYSDK_OFFSET(0x1852470)
#define MX_DATA_KEYMAPPINGDATA_CONTAINSINPOPUPTABLE_OFFSET UNITYSDK_OFFSET(0x1852500)
#define MX_DATA_KEYMAPPINGDATA_ISCUSTOMABLE_OFFSET UNITYSDK_OFFSET(0x1852580)
#define MX_DATA_KEYMAPPINGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18525D0)
#define MX_DATA_KEYMAPPINGDATA_PREPAREINITIALDATA_OFFSET UNITYSDK_OFFSET(0x184FED0)
#define MX_DATA_KEYMAPPINGDATA__CONVERTDISPLAYNAME_G__REMOVEWORD|23_0_OFFSET UNITYSDK_OFFSET(0x1852390)
#define MX_DATA_KEYMAPPINGDATA_GETHAVEKEYCODEKEYMAPPINGDATAS_OFFSET UNITYSDK_OFFSET(0x1852F20)

namespace MX::Data
{
	inline static constexpr unsigned int KeyMappingData_TypeDefinitionIndex = 15852;

	class KeyMappingData : public Il2CppObject
	{
	public:
		Il2CppObject* keyMappingTable; // 0x28
		Il2CppObject* keyPopupDatas; // 0x30
		Il2CppObject* _keyMappingDisplayGroups; // 0x38
		Il2CppObject* _keyDisplayInfos; // 0x40
		Il2CppObject* controllerIconImageDatas; // 0x48
		Il2CppObject* _keyMappingTabs; // 0x50
		Il2CppObject* _keyMappingNoneFocus; // 0x58
		Il2CppObject* _useableKeyCodes; // 0x60

		::MX::Data::Excel::KeyMappingExcel* GetKeyMappingData(::System::String* str)
		{
			return (return (::MX::Data::Excel::KeyMappingExcel*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_GETKEYMAPPINGDATA_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetKeyMappingNoneFocusValue(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_GETKEYMAPPINGNONEFOCUSVALUE_OFFSET))(str, nullptr);
		}

		Il2CppObject* ConvertTargetKeyCodeToKeys(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_CONVERTTARGETKEYCODETOKEYS_OFFSET))(str, nullptr);
		}

		Il2CppObject* GetControllerIconPaths(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_GETCONTROLLERICONPATHS_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::String* GetDisplayGroupString(::FlatData::DisplayGroupType* arg)
		{
			return (return (::System::String*(*)(::FlatData::DisplayGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_GETDISPLAYGROUPSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::String* str, ::System::String* str, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_SETDATA_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* GetEnableCustomKeyMappingDatas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_GETENABLECUSTOMKEYMAPPINGDATAS_OFFSET))(nullptr);
		}

		::System::String* ConvertDisplayName(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_CONVERTDISPLAYNAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_CONTAINS_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetKeyMappingTabData(::System::String* str, ::MX::Data::Excel::KeyMappingTabExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::Data::Excel::KeyMappingTabExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_TRYGETKEYMAPPINGTABDATA_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean ContainsInPopupTable(::System::String* str, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_CONTAINSINPOPUPTABLE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean IsCustomable(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_ISCUSTOMABLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PrepareInitialData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_PREPAREINITIALDATA_OFFSET))(nullptr);
		}

		::System::String* _ConvertDisplayName_g__RemoveWord|23_0(::UnityEngine::KeyCode* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA__CONVERTDISPLAYNAME_G__REMOVEWORD|23_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetHaveKeycodeKeyMappingDatas()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_KEYMAPPINGDATA_GETHAVEKEYCODEKEYMAPPINGDATAS_OFFSET))(nullptr);
		}

	};
}

