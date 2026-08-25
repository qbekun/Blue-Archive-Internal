#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPToyCryptType; }

#define NPA_EDITOR_NETWORK_NXPREQUEST_GET_ENCRYPTTYPE_OFFSET UNITYSDK_OFFSET(0x9C29050)
#define NPA_EDITOR_NETWORK_NXPREQUEST_SET_ENCRYPTTYPE_OFFSET UNITYSDK_OFFSET(0x9C29060)
#define NPA_EDITOR_NETWORK_NXPREQUEST_GET_DECRYPTTYPE_OFFSET UNITYSDK_OFFSET(0x9C29070)
#define NPA_EDITOR_NETWORK_NXPREQUEST_SET_DECRYPTTYPE_OFFSET UNITYSDK_OFFSET(0x9C29080)
#define NPA_EDITOR_NETWORK_NXPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C201C0)
#define NPA_EDITOR_NETWORK_NXPREQUEST_SETHEADER_OFFSET UNITYSDK_OFFSET(0x9C20240)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPRequest_TypeDefinitionIndex = 26716;

	class NXPRequest : public Il2CppObject
	{
	public:
		::NPA::Editor::Network::NXPToyCryptType* _EncryptType_k__BackingField; // 0x48
		::NPA::Editor::Network::NXPToyCryptType* _DecryptType_k__BackingField; // 0x4C

		::NPA::Editor::Network::NXPToyCryptType* get_EncryptType()
		{
			return (return (::NPA::Editor::Network::NXPToyCryptType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUEST_GET_ENCRYPTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_EncryptType(::NPA::Editor::Network::NXPToyCryptType* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPToyCryptType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUEST_SET_ENCRYPTTYPE_OFFSET))(arg, nullptr);
		}

		::NPA::Editor::Network::NXPToyCryptType* get_DecryptType()
		{
			return (return (::NPA::Editor::Network::NXPToyCryptType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUEST_GET_DECRYPTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_DecryptType(::NPA::Editor::Network::NXPToyCryptType* arg)
		{
			((::System::Void(*)(::NPA::Editor::Network::NXPToyCryptType*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUEST_SET_DECRYPTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetHeader(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPREQUEST_SETHEADER_OFFSET))(arg, nullptr);
		}

	};
}

