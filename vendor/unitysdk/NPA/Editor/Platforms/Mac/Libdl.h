#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_PLATFORMS_MAC_LIBDL_DLOPEN_OFFSET UNITYSDK_OFFSET(0x9C144E0)
#define NPA_EDITOR_PLATFORMS_MAC_LIBDL_DLSYM_OFFSET UNITYSDK_OFFSET(0x9C14660)
#define NPA_EDITOR_PLATFORMS_MAC_LIBDL_DLCLOSE_OFFSET UNITYSDK_OFFSET(0x9C14780)

namespace NPA::Editor::Platforms::Mac
{
	inline static constexpr unsigned int Libdl_TypeDefinitionIndex = 26601;

	class Libdl : public Il2CppObject
	{
	public:
		::System::Int32 RtldNow; // 0x0

		::System::Int32 Dlopen(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_MAC_LIBDL_DLOPEN_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 Dlsym(::System::Int32 arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_MAC_LIBDL_DLSYM_OFFSET))(arg, str, nullptr);
		}

		::System::Int32 Dlclose(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_PLATFORMS_MAC_LIBDL_DLCLOSE_OFFSET))(arg, nullptr);
		}

	};
}

