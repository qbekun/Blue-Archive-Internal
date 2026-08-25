#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Editor::Security::Device { class NXPTrustedDevice; }
namespace NPA::Editor::Security::Device { class TrustedDeviceStatus; }
namespace NPA::Editor::Security::Device { class NXPTrustedDeviceDialog; }
namespace NPA::Editor::Security::Device { class TrustedDeviceError; }
namespace NPA::Editor::Security::Device { class TrustedDeviceStatusType; }
namespace NPA::Security { class NXPTrustedDeviceSettingsResult; }

#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x9C048C0)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_REQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0x9C04B80)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_SHOWSETTINGS_OFFSET UNITYSDK_OFFSET(0x9C04F80)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_FETCHSTATUS_OFFSET UNITYSDK_OFFSET(0x9C04E00)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_HANDLESETTINGSCLIENTERROR_OFFSET UNITYSDK_OFFSET(0x9C051E0)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_HANDLESETTINGSSERVERERROR_OFFSET UNITYSDK_OFFSET(0x9C05650)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_SHOWTRUSTEDDEVICESETTINGSDIALOG_OFFSET UNITYSDK_OFFSET(0x9C052D0)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_DISPATCHSETTINGSRESULT_OFFSET UNITYSDK_OFFSET(0x9C06090)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_GETTRUSTEDDEVICEURLSTRING_OFFSET UNITYSDK_OFFSET(0x9C05780)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_UPDATEDEVICESTATUSTYPE_OFFSET UNITYSDK_OFFSET(0x9C06310)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_GETPATHFORREGISTRATION_OFFSET UNITYSDK_OFFSET(0x9C06240)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_GETPATHFORSETTINGS_OFFSET UNITYSDK_OFFSET(0x9C06170)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C04B20)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C06400)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE__SHOWSETTINGS_B__9_0_OFFSET UNITYSDK_OFFSET(0x9C06480)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE__SHOWSETTINGS_B__9_1_OFFSET UNITYSDK_OFFSET(0x9C06510)

namespace NPA::Editor::Security::Device
{
	inline static constexpr unsigned int NXPTrustedDevice_TypeDefinitionIndex = 26548;

	class NXPTrustedDevice : public Il2CppObject
	{
	public:
		::NPA::Editor::Security::Device::NXPTrustedDevice* instance; // 0x0
		::System::Object* syncRoot; // 0x8
		::NPA::Editor::Security::Device::TrustedDeviceStatus* deviceStatus; // 0x10
		Il2CppObject* settingsAction; // 0x18
		::System::String* domain; // 0x20
		::System::String* settingsURLFormat; // 0x28
		::NPA::Editor::Security::Device::NXPTrustedDeviceDialog* settingsDialog; // 0x30

		::NPA::Editor::Security::Device::NXPTrustedDevice* getInstance()
		{
			return (return (::NPA::Editor::Security::Device::NXPTrustedDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_GETINSTANCE_OFFSET))(nullptr);
		}

		::System::Void RequestStatus(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_REQUESTSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void ShowSettings(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_SHOWSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void FetchStatus(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_FETCHSTATUS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void HandleSettingsClientError(::NPA::Editor::Security::Device::TrustedDeviceError* arg)
		{
			((::System::Void(*)(::NPA::Editor::Security::Device::TrustedDeviceError*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_HANDLESETTINGSCLIENTERROR_OFFSET))(arg, nullptr);
		}

		::System::Void HandleSettingsServerError(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_HANDLESETTINGSSERVERERROR_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void ShowTrustedDeviceSettingsDialog(::System::Boolean arg, ::System::String* str, ::NPA::Editor::Security::Device::TrustedDeviceStatusType* arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::NPA::Editor::Security::Device::TrustedDeviceStatusType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_SHOWTRUSTEDDEVICESETTINGSDIALOG_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void DispatchSettingsResult(::NPA::Security::NXPTrustedDeviceSettingsResult* arg)
		{
			((::System::Void(*)(::NPA::Security::NXPTrustedDeviceSettingsResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_DISPATCHSETTINGSRESULT_OFFSET))(arg, nullptr);
		}

		::System::String* GetTrustedDeviceUrlString(::System::Boolean arg, ::NPA::Editor::Security::Device::TrustedDeviceStatusType* arg)
		{
			return (return (::System::String*(*)(::System::Boolean, ::NPA::Editor::Security::Device::TrustedDeviceStatusType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_GETTRUSTEDDEVICEURLSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateDeviceStatusType(::NPA::Editor::Security::Device::TrustedDeviceStatusType* arg)
		{
			((::System::Void(*)(::NPA::Editor::Security::Device::TrustedDeviceStatusType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_UPDATEDEVICESTATUSTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* GetPathForRegistration()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_GETPATHFORREGISTRATION_OFFSET))(nullptr);
		}

		::System::String* GetPathForSettings()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_GETPATHFORSETTINGS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _ShowSettings_b__9_0(::NPA::Editor::Security::Device::TrustedDeviceStatusType* arg)
		{
			((::System::Void(*)(::NPA::Editor::Security::Device::TrustedDeviceStatusType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE__SHOWSETTINGS_B__9_0_OFFSET))(arg, nullptr);
		}

		::System::Void _ShowSettings_b__9_1(::System::Int32 arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICE__SHOWSETTINGS_B__9_1_OFFSET))(arg, str, str, nullptr);
		}

	};
}

