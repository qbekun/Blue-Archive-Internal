#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4AD20)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4AD70)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_GET_CANCELLED_OFFSET UNITYSDK_OFFSET(0x9B4ADF0)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x9B4AE00)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_GET_USERSTATE_OFFSET UNITYSDK_OFFSET(0x9B4AE10)
#define SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_RAISEEXCEPTIONIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x9B4AE20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AsyncCompletedEventArgs_TypeDefinitionIndex = 29485;

	class AsyncCompletedEventArgs : public Il2CppObject
	{
	public:
		::System::Exception* error; // 0x10
		::System::Boolean cancelled; // 0x18
		::System::Object* userState; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Exception* arg, ::System::Boolean arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Exception*, ::System::Boolean, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_Cancelled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_GET_CANCELLED_OFFSET))(nullptr);
		}

		::System::Exception* get_Error()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_GET_ERROR_OFFSET))(nullptr);
		}

		::System::Object* get_UserState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_GET_USERSTATE_OFFSET))(nullptr);
		}

		::System::Void RaiseExceptionIfNecessary()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCCOMPLETEDEVENTARGS_RAISEEXCEPTIONIFNECESSARY_OFFSET))(nullptr);
		}

	};
}

