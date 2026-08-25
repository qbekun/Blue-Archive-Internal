#pragma once
#include "../../../../unitysdk.h"

namespace NPA::Service { class NXPWebInfo; }

#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICEDIALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C06030)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICEDIALOG_GETSCREENNAME_OFFSET UNITYSDK_OFFSET(0x9C07150)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICEDIALOG_ONLOADPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x9C07180)
#define NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICEDIALOG_ONSTANDBY_OFFSET UNITYSDK_OFFSET(0x9C071D0)

namespace NPA::Editor::Security::Device
{
	inline static constexpr unsigned int NXPTrustedDeviceDialog_TypeDefinitionIndex = 26549;

	class NXPTrustedDeviceDialog : public Il2CppObject
	{
	public:
		::System::Void .ctor(::NPA::Service::NXPWebInfo* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::NPA::Service::NXPWebInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICEDIALOG_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetScreenName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICEDIALOG_GETSCREENNAME_OFFSET))(nullptr);
		}

		::System::Void OnLoadProgressChanged(::System::Object* arg, ::System::Single arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICEDIALOG_ONLOADPROGRESSCHANGED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnStandby(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SECURITY_DEVICE_NXPTRUSTEDDEVICEDIALOG_ONSTANDBY_OFFSET))(arg, nullptr);
		}

	};
}

