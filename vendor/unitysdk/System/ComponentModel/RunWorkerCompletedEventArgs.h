#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B640D0)
#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTARGS_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x9B64170)
#define SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTARGS_GET_USERSTATE_OFFSET UNITYSDK_OFFSET(0x9B64190)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RunWorkerCompletedEventArgs_TypeDefinitionIndex = 29508;

	class RunWorkerCompletedEventArgs : public BoneShape
	{
	public:
		::System::Object* result; // 0x28

		::System::Void .ctor(::System::Object* arg, ::System::Exception* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Exception*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTARGS_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* get_Result()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTARGS_GET_RESULT_OFFSET))(nullptr);
		}

		::System::Object* get_UserState()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNWORKERCOMPLETEDEVENTARGS_GET_USERSTATE_OFFSET))(nullptr);
		}

	};
}

