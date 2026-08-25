#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B54730)
#define SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTARGS_GET_PROGRESSPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x9B547A0)
#define SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTARGS_GET_USERSTATE_OFFSET UNITYSDK_OFFSET(0x9B547B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ProgressChangedEventArgs_TypeDefinitionIndex = 29503;

	class ProgressChangedEventArgs : public Il2CppObject
	{
	public:
		::System::Int32 progressPercentage; // 0x10
		::System::Object* userState; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTARGS_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_ProgressPercentage()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTARGS_GET_PROGRESSPERCENTAGE_OFFSET))(nullptr);
		}

		::System::Object* get_UserState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROGRESSCHANGEDEVENTARGS_GET_USERSTATE_OFFSET))(nullptr);
		}

	};
}

