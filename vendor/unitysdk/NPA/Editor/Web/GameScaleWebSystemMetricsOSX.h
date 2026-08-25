#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_WEB_GAMESCALEWEBSYSTEMMETRICSOSX_IOHIDGETPARAMETER_OFFSET UNITYSDK_OFFSET(0x9DAAEC0)
#define NPA_EDITOR_WEB_GAMESCALEWEBSYSTEMMETRICSOSX_GETDOUBLECLICKTIME_OFFSET UNITYSDK_OFFSET(0x9DAAD50)
#define NPA_EDITOR_WEB_GAMESCALEWEBSYSTEMMETRICSOSX_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DAAF70)
#define NPA_EDITOR_WEB_GAMESCALEWEBSYSTEMMETRICSOSX_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DAAF80)

namespace NPA::Editor::Web
{
	inline static constexpr unsigned int GameScaleWebSystemMetricsOSX_TypeDefinitionIndex = 26382;

	class GameScaleWebSystemMetricsOSX : public Il2CppObject
	{
	public:
		::System::String* IOKitLibrary; // 0x0
		::System::Int32 kIOHIDSystemClass; // 0x0
		::System::String* kIOHIDMouseDoubleClickTimeKey; // 0x0

		::System::Int32 IOHIDGetParameter(::System::Int32 arg, ::System::String* str, uint32_t&* arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, uint32_t&*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBSYSTEMMETRICSOSX_IOHIDGETPARAMETER_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Double GetDoubleClickTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBSYSTEMMETRICSOSX_GETDOUBLECLICKTIME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBSYSTEMMETRICSOSX_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_WEB_GAMESCALEWEBSYSTEMMETRICSOSX_.CCTOR_OFFSET))(nullptr);
		}

	};
}

