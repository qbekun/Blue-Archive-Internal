#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_PLATFORMS_NXPWINDOWSNATIVEDYNAMICLOADER_OPEN_OFFSET UNITYSDK_OFFSET(0x9C13F60)
#define NPA_EDITOR_PLATFORMS_NXPWINDOWSNATIVEDYNAMICLOADER_GETPROCEDURE_OFFSET UNITYSDK_OFFSET(0x9C14080)
#define NPA_EDITOR_PLATFORMS_NXPWINDOWSNATIVEDYNAMICLOADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x9C14340)
#define NPA_EDITOR_PLATFORMS_NXPWINDOWSNATIVEDYNAMICLOADER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C13EE0)

namespace NPA::Editor::Platforms
{
	inline static constexpr unsigned int NXPWindowsNativeDynamicLoader_TypeDefinitionIndex = 26590;

	class NXPWindowsNativeDynamicLoader : public Il2CppObject
	{
	public:
		::System::Int32 Open(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_NXPWINDOWSNATIVEDYNAMICLOADER_OPEN_OFFSET))(str, nullptr);
		}

		::System::Int32 GetProcedure(::System::Int32 arg, ::System::String* str, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_NXPWINDOWSNATIVEDYNAMICLOADER_GETPROCEDURE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean Close(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_NXPWINDOWSNATIVEDYNAMICLOADER_CLOSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_NXPWINDOWSNATIVEDYNAMICLOADER_.CTOR_OFFSET))(nullptr);
		}

	};
}

