#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ISYNCHRONIZEINVOKE_GET_INVOKEREQUIRED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ISYNCHRONIZEINVOKE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ISYNCHRONIZEINVOKE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ISYNCHRONIZEINVOKE_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ISynchronizeInvoke_TypeDefinitionIndex = 29334;

	class ISynchronizeInvoke : public Il2CppObject
	{
	public:
		::System::Boolean get_InvokeRequired()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISYNCHRONIZEINVOKE_GET_INVOKEREQUIRED_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Delegate* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Delegate*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISYNCHRONIZEINVOKE_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Object*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISYNCHRONIZEINVOKE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Object* Invoke(::System::Delegate* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Delegate*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISYNCHRONIZEINVOKE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

