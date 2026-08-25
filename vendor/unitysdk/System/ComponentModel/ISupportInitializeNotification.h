#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ISUPPORTINITIALIZENOTIFICATION_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ISUPPORTINITIALIZENOTIFICATION_ADD_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ISUPPORTINITIALIZENOTIFICATION_REMOVE_INITIALIZED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ISupportInitializeNotification_TypeDefinitionIndex = 29408;

	class ISupportInitializeNotification : public Il2CppObject
	{
	public:
		::System::Boolean get_IsInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISUPPORTINITIALIZENOTIFICATION_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void add_Initialized(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISUPPORTINITIALIZENOTIFICATION_ADD_INITIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Initialized(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ISUPPORTINITIALIZENOTIFICATION_REMOVE_INITIALIZED_OFFSET))(arg, nullptr);
		}

	};
}

