#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_NPACCOUNTMAC_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D65960)
#define NPA_EDITOR_NPACCOUNTMAC_SETSERVICEKEYFOREDITOR_OFFSET UNITYSDK_OFFSET(0x9D65C50)
#define NPA_EDITOR_NPACCOUNTMAC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9D66360)
#define NPA_EDITOR_NPACCOUNTMAC_GETUSERINFO_OFFSET UNITYSDK_OFFSET(0x9D66480)
#define NPA_EDITOR_NPACCOUNTMAC_SHUTDOWN_OFFSET UNITYSDK_OFFSET(0x9D665E0)
#define NPA_EDITOR_NPACCOUNTMAC_LOGDEFAULTINFOS_OFFSET UNITYSDK_OFFSET(0x9D65C80)
#define NPA_EDITOR_NPACCOUNTMAC_REGISTERINSTANTMESSAGE_OFFSET UNITYSDK_OFFSET(0x9D666B0)
#define NPA_EDITOR_NPACCOUNTMAC_SUBSCRIBEINSTANTMESSAGE_OFFSET UNITYSDK_OFFSET(0x9D66890)
#define NPA_EDITOR_NPACCOUNTMAC_UNSUBSCRIBEINSTANTMESSAGE_OFFSET UNITYSDK_OFFSET(0x9D669B0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NPAccountMac_TypeDefinitionIndex = 26197;

	class NPAccountMac : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTMAC_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetServiceKeyForEditor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTMAC_SETSERVICEKEYFOREDITOR_OFFSET))(str, nullptr);
		}

		::System::Void Initialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTMAC_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void GetUserInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTMAC_GETUSERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void ShutDown()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTMAC_SHUTDOWN_OFFSET))(nullptr);
		}

		::System::Void LogDefaultInfos()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTMAC_LOGDEFAULTINFOS_OFFSET))(nullptr);
		}

		::System::Void RegisterInstantMessage(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTMAC_REGISTERINSTANTMESSAGE_OFFSET))(str, arg, nullptr);
		}

		::System::Void SubscribeInstantMessage(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTMAC_SUBSCRIBEINSTANTMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void UnsubscribeInstantMessage(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NPACCOUNTMAC_UNSUBSCRIBEINSTANTMESSAGE_OFFSET))(arg, nullptr);
		}

	};
}

