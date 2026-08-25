#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor { class NXPToySession; }

#define NPA_EDITOR_NETWORK_NXPAUTHREQUESTCREDENTIAL_GET_GUID_OFFSET UNITYSDK_OFFSET(0x9C19E00)
#define NPA_EDITOR_NETWORK_NXPAUTHREQUESTCREDENTIAL_GET_NPSN_OFFSET UNITYSDK_OFFSET(0x9C19E10)
#define NPA_EDITOR_NETWORK_NXPAUTHREQUESTCREDENTIAL_GET_GAMETOKEN_OFFSET UNITYSDK_OFFSET(0x9C19E20)
#define NPA_EDITOR_NETWORK_NXPAUTHREQUESTCREDENTIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C19E30)
#define NPA_EDITOR_NETWORK_NXPAUTHREQUESTCREDENTIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C19EB0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPAuthRequestCredential_TypeDefinitionIndex = 26614;

	class NXPAuthRequestCredential : public Il2CppObject
	{
	public:
		::System::String* _Guid_k__BackingField; // 0x10
		::System::Int64 _Npsn_k__BackingField; // 0x18
		::System::String* _GameToken_k__BackingField; // 0x20

		::System::String* get_Guid()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPAUTHREQUESTCREDENTIAL_GET_GUID_OFFSET))(nullptr);
		}

		::System::Int64 get_Npsn()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPAUTHREQUESTCREDENTIAL_GET_NPSN_OFFSET))(nullptr);
		}

		::System::String* get_GameToken()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPAUTHREQUESTCREDENTIAL_GET_GAMETOKEN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPAUTHREQUESTCREDENTIAL_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::NPA::Editor::NXPToySession* arg)
		{
			((::System::Void(*)(::NPA::Editor::NXPToySession*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPAUTHREQUESTCREDENTIAL_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

