#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_DISCONNECTALL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_TRYSENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_POLL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_REGISTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_UNREGISTERINTERNAL_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_ISCONNECTED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine
{
	inline static constexpr unsigned int IPlayerEditorConnectionNative_TypeDefinitionIndex = 31106;

	class IPlayerEditorConnectionNative : public Il2CppObject
	{
	public:
		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Void DisconnectAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_DISCONNECTALL_OFFSET))(nullptr);
		}

		::System::Void SendMessage(::System::Guid* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Guid*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_SENDMESSAGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TrySendMessage(::System::Guid* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Guid*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_TRYSENDMESSAGE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Poll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_POLL_OFFSET))(nullptr);
		}

		::System::Void RegisterInternal(::System::Guid* arg)
		{
			((::System::Void(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_REGISTERINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterInternal(::System::Guid* arg)
		{
			((::System::Void(*)(::System::Guid*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_UNREGISTERINTERNAL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsConnected()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_IPLAYEREDITORCONNECTIONNATIVE_ISCONNECTED_OFFSET))(nullptr);
		}

	};
}

