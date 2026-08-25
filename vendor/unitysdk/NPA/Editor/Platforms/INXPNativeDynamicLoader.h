#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_PLATFORMS_INXPNATIVEDYNAMICLOADER_OPEN_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_PLATFORMS_INXPNATIVEDYNAMICLOADER_GETPROCEDURE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NPA_EDITOR_PLATFORMS_INXPNATIVEDYNAMICLOADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Platforms
{
	inline static constexpr unsigned int INXPNativeDynamicLoader_TypeDefinitionIndex = 26588;

	class INXPNativeDynamicLoader : public Il2CppObject
	{
	public:
		::System::Int32 Open(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_INXPNATIVEDYNAMICLOADER_OPEN_OFFSET))(str, nullptr);
		}

		::System::Int32 GetProcedure(::System::Int32 arg, ::System::String* str, Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_INXPNATIVEDYNAMICLOADER_GETPROCEDURE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Boolean Close(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_INXPNATIVEDYNAMICLOADER_CLOSE_OFFSET))(arg, nullptr);
		}

	};
}

