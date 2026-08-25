#pragma once
#include "../../unitysdk.h"

namespace Microsoft::Win32::SafeHandles { class SafeRegistryHandle; }
namespace Microsoft::Win32 { class RegistryKeyPermissionCheck; }
namespace Microsoft::Win32 { class RegistryView; }
namespace Microsoft::Win32 { class RegistryKey; }
namespace Microsoft::Win32 { class RegistryHive; }
namespace Microsoft::Win32 { class RegistryValueOptions; }

#define MICROSOFT_WIN32_REGISTRYKEY_CLOSEPERFDATAKEY_OFFSET UNITYSDK_OFFSET(0x9148D60)
#define MICROSOFT_WIN32_REGISTRYKEY_OPENBASEKEYCORE_OFFSET UNITYSDK_OFFSET(0x9148DC0)
#define MICROSOFT_WIN32_REGISTRYKEY_INTERNALOPENSUBKEYCORE_OFFSET UNITYSDK_OFFSET(0x91490D0)
#define MICROSOFT_WIN32_REGISTRYKEY_INTERNALSUBKEYCOUNTCORE_OFFSET UNITYSDK_OFFSET(0x9149550)
#define MICROSOFT_WIN32_REGISTRYKEY_INTERNALGETSUBKEYNAMESCORE_OFFSET UNITYSDK_OFFSET(0x91497B0)
#define MICROSOFT_WIN32_REGISTRYKEY_INTERNALGETVALUECORE_OFFSET UNITYSDK_OFFSET(0x9149B90)
#define MICROSOFT_WIN32_REGISTRYKEY_WIN32ERROR_OFFSET UNITYSDK_OFFSET(0x9149600)
#define MICROSOFT_WIN32_REGISTRYKEY_GETREGISTRYKEYACCESS_OFFSET UNITYSDK_OFFSET(0x91492D0)
#define MICROSOFT_WIN32_REGISTRYKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9148FA0)
#define MICROSOFT_WIN32_REGISTRYKEY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x914A8A0)
#define MICROSOFT_WIN32_REGISTRYKEY_OPENBASEKEY_OFFSET UNITYSDK_OFFSET(0x9148D00)
#define MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_OFFSET UNITYSDK_OFFSET(0x914AAD0)
#define MICROSOFT_WIN32_REGISTRYKEY_INTERNALSUBKEYCOUNT_OFFSET UNITYSDK_OFFSET(0x914AE80)
#define MICROSOFT_WIN32_REGISTRYKEY_GETSUBKEYNAMES_OFFSET UNITYSDK_OFFSET(0x914AF30)
#define MICROSOFT_WIN32_REGISTRYKEY_INTERNALGETSUBKEYNAMES_OFFSET UNITYSDK_OFFSET(0x914AF40)
#define MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x914B000)
#define MICROSOFT_WIN32_REGISTRYKEY_INTERNALGETVALUE_OFFSET UNITYSDK_OFFSET(0x914B0E0)
#define MICROSOFT_WIN32_REGISTRYKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x914B120)
#define MICROSOFT_WIN32_REGISTRYKEY_FIXUPNAME_OFFSET UNITYSDK_OFFSET(0x914AD70)
#define MICROSOFT_WIN32_REGISTRYKEY_FIXUPPATH_OFFSET UNITYSDK_OFFSET(0x914B150)
#define MICROSOFT_WIN32_REGISTRYKEY_ENSURENOTDISPOSED_OFFSET UNITYSDK_OFFSET(0x914ACD0)
#define MICROSOFT_WIN32_REGISTRYKEY_GETSUBKEYPERMISSIONCHECK_OFFSET UNITYSDK_OFFSET(0x91492E0)
#define MICROSOFT_WIN32_REGISTRYKEY_VALIDATEKEYNAME_OFFSET UNITYSDK_OFFSET(0x914AB50)
#define MICROSOFT_WIN32_REGISTRYKEY_VALIDATEKEYVIEW_OFFSET UNITYSDK_OFFSET(0x914A7F0)
#define MICROSOFT_WIN32_REGISTRYKEY_ISSYSTEMKEY_OFFSET UNITYSDK_OFFSET(0x914AAB0)
#define MICROSOFT_WIN32_REGISTRYKEY_ISPERFDATAKEY_OFFSET UNITYSDK_OFFSET(0x914A730)
#define MICROSOFT_WIN32_REGISTRYKEY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x914B410)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int RegistryKey_TypeDefinitionIndex = 23642;

	class RegistryKey : public Il2CppObject
	{
	public:
		::System::Int32 HKEY_CLASSES_ROOT; // 0x0
		::System::Int32 HKEY_CURRENT_USER; // 0x8
		::System::Int32 HKEY_LOCAL_MACHINE; // 0x10
		::System::Int32 HKEY_USERS; // 0x18
		::System::Int32 HKEY_PERFORMANCE_DATA; // 0x20
		::System::Int32 HKEY_CURRENT_CONFIG; // 0x28
		::System::Int32 HKEY_DYN_DATA; // 0x30
		::Il2CppArray<::System::Object*>* s_hkeyNames; // 0x38
		::Microsoft::Win32::SafeHandles::SafeRegistryHandle* _hkey; // 0x18
		::System::String* _keyName; // 0x20
		::System::Boolean _remoteKey; // 0x28
		StateFlags* _state; // 0x2C
		::Microsoft::Win32::RegistryKeyPermissionCheck* _checkMode; // 0x30
		::Microsoft::Win32::RegistryView* _regView; // 0x34

		::System::Void ClosePerfDataKey()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_CLOSEPERFDATAKEY_OFFSET))(nullptr);
		}

		::Microsoft::Win32::RegistryKey* OpenBaseKeyCore(::Microsoft::Win32::RegistryHive* arg, ::Microsoft::Win32::RegistryView* arg)
		{
			return (return (::Microsoft::Win32::RegistryKey*(*)(::Microsoft::Win32::RegistryHive*, ::Microsoft::Win32::RegistryView*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_OPENBASEKEYCORE_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::Win32::RegistryKey* InternalOpenSubKeyCore(::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::Microsoft::Win32::RegistryKey*(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_INTERNALOPENSUBKEYCORE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Int32 InternalSubKeyCountCore()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_INTERNALSUBKEYCOUNTCORE_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* InternalGetSubKeyNamesCore(::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_INTERNALGETSUBKEYNAMESCORE_OFFSET))(arg, nullptr);
		}

		::System::Object* InternalGetValueCore(::System::String* str, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_INTERNALGETVALUECORE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void Win32Error(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_WIN32ERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 GetRegistryKeyAccess(::System::Boolean arg)
		{
			return (return (::System::Int32(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETREGISTRYKEYACCESS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Microsoft::Win32::SafeHandles::SafeRegistryHandle* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::Microsoft::Win32::RegistryView* arg)
		{
			((::System::Void(*)(::Microsoft::Win32::SafeHandles::SafeRegistryHandle*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Microsoft::Win32::RegistryView*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_DISPOSE_OFFSET))(nullptr);
		}

		::Microsoft::Win32::RegistryKey* OpenBaseKey(::Microsoft::Win32::RegistryHive* arg, ::Microsoft::Win32::RegistryView* arg)
		{
			return (return (::Microsoft::Win32::RegistryKey*(*)(::Microsoft::Win32::RegistryHive*, ::Microsoft::Win32::RegistryView*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_OPENBASEKEY_OFFSET))(arg, arg, nullptr);
		}

		::Microsoft::Win32::RegistryKey* OpenSubKey(::System::String* str, ::System::Boolean arg)
		{
			return (return (::Microsoft::Win32::RegistryKey*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_OPENSUBKEY_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 InternalSubKeyCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_INTERNALSUBKEYCOUNT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSubKeyNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETSUBKEYNAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* InternalGetSubKeyNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_INTERNALGETSUBKEYNAMES_OFFSET))(nullptr);
		}

		::System::Object* GetValue(::System::String* str, ::System::Object* arg, ::Microsoft::Win32::RegistryValueOptions* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Object*, ::Microsoft::Win32::RegistryValueOptions*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETVALUE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Object* InternalGetValue(::System::String* str, ::System::Object* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Object*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_INTERNALGETVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* FixupName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_FIXUPNAME_OFFSET))(str, nullptr);
		}

		::System::Void FixupPath(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_FIXUPPATH_OFFSET))(arg, nullptr);
		}

		::System::Void EnsureNotDisposed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ENSURENOTDISPOSED_OFFSET))(nullptr);
		}

		::Microsoft::Win32::RegistryKeyPermissionCheck* GetSubKeyPermissionCheck(::System::Boolean arg)
		{
			return (return (::Microsoft::Win32::RegistryKeyPermissionCheck*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_GETSUBKEYPERMISSIONCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateKeyName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_VALIDATEKEYNAME_OFFSET))(str, nullptr);
		}

		::System::Void ValidateKeyView(::Microsoft::Win32::RegistryView* arg)
		{
			((::System::Void(*)(::Microsoft::Win32::RegistryView*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_VALIDATEKEYVIEW_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSystemKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ISSYSTEMKEY_OFFSET))(nullptr);
		}

		::System::Boolean IsPerfDataKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_ISPERFDATAKEY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRYKEY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

