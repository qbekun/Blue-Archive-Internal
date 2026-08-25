#pragma once
#include "../../../../../unitysdk.h"

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGEHANDLERDELEGATE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGEHANDLERDELEGATE`1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGEHANDLERDELEGATE`1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGEHANDLERDELEGATE`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int MessageHandlerDelegate`1_TypeDefinitionIndex = 10417;

	class MessageHandlerDelegate`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGEHANDLERDELEGATE`1_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return ((::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGEHANDLERDELEGATE`1_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, ::System::AsyncCallback* arg2, ::System::Object* arg3)
		{
			return ((::System::IAsyncResult*(*)(Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGEHANDLERDELEGATE`1_BEGININVOKE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Boolean Invoke(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_MESSAGEHANDLERDELEGATE`1_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

