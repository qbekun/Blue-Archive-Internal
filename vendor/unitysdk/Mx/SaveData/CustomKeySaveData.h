#pragma once
#include "../../unitysdk.h"

namespace FlatData { class DisplayGroupType; }

#define MX_SAVEDATA_CUSTOMKEYSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D2A4E0)
#define MX_SAVEDATA_CUSTOMKEYSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D2A560)
#define MX_SAVEDATA_CUSTOMKEYSAVEDATA_SET_OFFSET UNITYSDK_OFFSET(0x1D2A8A0)
#define MX_SAVEDATA_CUSTOMKEYSAVEDATA_SAVE_OFFSET UNITYSDK_OFFSET(0x1D2AFE0)
#define MX_SAVEDATA_CUSTOMKEYSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D2B240)
#define MX_SAVEDATA_CUSTOMKEYSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D2B290)
#define MX_SAVEDATA_CUSTOMKEYSAVEDATA_GETKEYS_OFFSET UNITYSDK_OFFSET(0x1D2BA20)
#define MX_SAVEDATA_CUSTOMKEYSAVEDATA_HASDUPLICATEKEY_OFFSET UNITYSDK_OFFSET(0x1D2BC10)
#define MX_SAVEDATA_CUSTOMKEYSAVEDATA_GETMOVEKEY_OFFSET UNITYSDK_OFFSET(0x1D2C3E0)
#define MX_SAVEDATA_CUSTOMKEYSAVEDATA_RESET_OFFSET UNITYSDK_OFFSET(0x1D2C870)
#define MX_SAVEDATA_CUSTOMKEYSAVEDATA_GETDEFAULT_OFFSET UNITYSDK_OFFSET(0x1D2A5F0)
#define MX_SAVEDATA_CUSTOMKEYSAVEDATA_CHANGEKEY_OFFSET UNITYSDK_OFFSET(0x1D2AC60)

namespace MX::SaveData
{
	inline static constexpr unsigned int CustomKeySaveData_TypeDefinitionIndex = 20057;

	class CustomKeySaveData : public Il2CppObject
	{
	public:
		Il2CppObject* _customKeys; // 0x10
		Il2CppObject* _changedKeys; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CUSTOMKEYSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CUSTOMKEYSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void Set(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CUSTOMKEYSAVEDATA_SET_OFFSET))(str, arg, nullptr);
		}

		::System::Void Save()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CUSTOMKEYSAVEDATA_SAVE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CUSTOMKEYSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CUSTOMKEYSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetKeys(::System::String* str)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CUSTOMKEYSAVEDATA_GETKEYS_OFFSET))(str, nullptr);
		}

		::System::Boolean HasDuplicateKey(::System::String* str, Il2CppObject* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, Il2CppObject*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CUSTOMKEYSAVEDATA_HASDUPLICATEKEY_OFFSET))(str, arg, arg, nullptr);
		}

		Il2CppObject* GetMoveKey(::FlatData::DisplayGroupType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::DisplayGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CUSTOMKEYSAVEDATA_GETMOVEKEY_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CUSTOMKEYSAVEDATA_RESET_OFFSET))(nullptr);
		}

		Il2CppObject* GetDefault()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CUSTOMKEYSAVEDATA_GETDEFAULT_OFFSET))(nullptr);
		}

		::System::Void ChangeKey(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CUSTOMKEYSAVEDATA_CHANGEKEY_OFFSET))(str, arg, nullptr);
		}

	};
}

