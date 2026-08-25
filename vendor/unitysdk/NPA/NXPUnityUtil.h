#pragma once
#include "../unitysdk.h"

namespace NPA { class IUnityEngineApplication; }
namespace NPA { class IUnityEngineSystemInfo; }
namespace NPA { class IUnityEngineDevice; }
namespace NPA { class INXPToyApplicationQuitHandler; }

#define NPA_NXPUNITYUTIL_SETAPPLICATIONQUITHANDLER_OFFSET UNITYSDK_OFFSET(0x9BC1D40)
#define NPA_NXPUNITYUTIL_GETUNITYVERSION_OFFSET UNITYSDK_OFFSET(0x9BC1DB0)
#define NPA_NXPUNITYUTIL_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x9BC0D00)
#define NPA_NXPUNITYUTIL_GETHWIDFOREDITOR_OFFSET UNITYSDK_OFFSET(0x9BC1EB0)
#define NPA_NXPUNITYUTIL_GETOSVERSION_OFFSET UNITYSDK_OFFSET(0x9BC1FB0)
#define NPA_NXPUNITYUTIL_ISWINDOWS_OFFSET UNITYSDK_OFFSET(0x9BC20B0)
#define NPA_NXPUNITYUTIL_ISMACOS_OFFSET UNITYSDK_OFFSET(0x9BC21B0)
#define NPA_NXPUNITYUTIL_ISLAUNCHEDFORSTEAMWORKS_OFFSET UNITYSDK_OFFSET(0x9BC22B0)
#define NPA_NXPUNITYUTIL_CHECKBADDIRECTORYPATH_OFFSET UNITYSDK_OFFSET(0x9BC23E0)
#define NPA_NXPUNITYUTIL_ISNINTENDOSWITCH_OFFSET UNITYSDK_OFFSET(0x9BC2540)
#define NPA_NXPUNITYUTIL_GETNATIVEPLUGINSDIR_OFFSET UNITYSDK_OFFSET(0x9BC2550)
#define NPA_NXPUNITYUTIL_GETPLUGINDIR_OFFSET UNITYSDK_OFFSET(0x9BC2790)
#define NPA_NXPUNITYUTIL_GETCURRENTTARGETWELLKNOWNNAME_OFFSET UNITYSDK_OFFSET(0x9BC2630)
#define NPA_NXPUNITYUTIL_CONVERTMAINTHREADACTION_OFFSET UNITYSDK_OFFSET(0x9BC2C40)
#define NPA_NXPUNITYUTIL_CONVERTMAINTHREADACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPUNITYUTIL_CONVERTTOMAINTHREADACTION_OFFSET UNITYSDK_OFFSET(0x9BC2D10)
#define NPA_NXPUNITYUTIL_CONVERTTOMAINTHREADACTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_NXPUNITYUTIL_HASCOMMANDLINEARG_OFFSET UNITYSDK_OFFSET(0x9BC2360)
#define NPA_NXPUNITYUTIL_UPDATECURRENTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9BC2E20)
#define NPA_NXPUNITYUTIL_ONSUBSYSTEMREGISTRATION_OFFSET UNITYSDK_OFFSET(0x9BC2FA0)
#define NPA_NXPUNITYUTIL_LOADSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9BC3000)
#define NPA_NXPUNITYUTIL_TRYLOADSNAPSHOTANDFORGET_OFFSET UNITYSDK_OFFSET(0x9BC1670)
#define NPA_NXPUNITYUTIL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BC32C0)

namespace NPA
{
	inline static constexpr unsigned int NXPUnityUtil_TypeDefinitionIndex = 25577;

	class NXPUnityUtil : public Il2CppObject
	{
	public:
		::NPA::IUnityEngineApplication* _application; // 0x0
		::NPA::IUnityEngineSystemInfo* _systemInfo; // 0x8
		::NPA::IUnityEngineDevice* _device; // 0x10
		::NPA::INXPToyApplicationQuitHandler* _applicationQuitHandler; // 0x18

		::System::Void SetApplicationQuitHandler(::NPA::INXPToyApplicationQuitHandler* arg)
		{
			((::System::Void(*)(::NPA::INXPToyApplicationQuitHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_SETAPPLICATIONQUITHANDLER_OFFSET))(arg, nullptr);
		}

		::System::String* GetUnityVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_GETUNITYVERSION_OFFSET))(nullptr);
		}

		::System::Boolean IsEditor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_ISEDITOR_OFFSET))(nullptr);
		}

		::System::String* GetHwidForEditor()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_GETHWIDFOREDITOR_OFFSET))(nullptr);
		}

		::System::String* GetOSVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_GETOSVERSION_OFFSET))(nullptr);
		}

		::System::Boolean IsWindows()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_ISWINDOWS_OFFSET))(nullptr);
		}

		::System::Boolean IsMacOS()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_ISMACOS_OFFSET))(nullptr);
		}

		::System::Boolean IsLaunchedForSteamworks()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_ISLAUNCHEDFORSTEAMWORKS_OFFSET))(nullptr);
		}

		::System::Boolean CheckBadDirectoryPath()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_CHECKBADDIRECTORYPATH_OFFSET))(nullptr);
		}

		::System::Boolean IsNintendoSwitch()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_ISNINTENDOSWITCH_OFFSET))(nullptr);
		}

		::System::String* GetNativePluginsDir()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_GETNATIVEPLUGINSDIR_OFFSET))(nullptr);
		}

		::System::String* GetPluginDir(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_GETPLUGINDIR_OFFSET))(str, nullptr);
		}

		::System::String* GetCurrentTargetWellKnownName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_GETCURRENTTARGETWELLKNOWNNAME_OFFSET))(nullptr);
		}

		::System::Action* convertMainThreadAction(::System::Action* arg)
		{
			return (return (::System::Action*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_CONVERTMAINTHREADACTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* convertMainThreadAction(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_CONVERTMAINTHREADACTION_OFFSET))(arg, nullptr);
		}

		::System::Action* ConvertToMainThreadAction(::System::Action* arg)
		{
			return (return (::System::Action*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_CONVERTTOMAINTHREADACTION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ConvertToMainThreadAction(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_CONVERTTOMAINTHREADACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasCommandlineArg(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_HASCOMMANDLINEARG_OFFSET))(str, nullptr);
		}

		::System::Void UpdateCurrentDirectory()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_UPDATECURRENTDIRECTORY_OFFSET))(nullptr);
		}

		::System::Void OnSubsystemRegistration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_ONSUBSYSTEMREGISTRATION_OFFSET))(nullptr);
		}

		::System::Void LoadSnapshot()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_LOADSNAPSHOT_OFFSET))(nullptr);
		}

		::System::Void TryLoadSnapshotAndForget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_TRYLOADSNAPSHOTANDFORGET_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPUNITYUTIL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

