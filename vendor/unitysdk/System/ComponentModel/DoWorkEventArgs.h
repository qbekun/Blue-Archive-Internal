#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B50260)
#define SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_GET_ARGUMENT_OFFSET UNITYSDK_OFFSET(0x9B502C0)
#define SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x9B502D0)
#define SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x9B502E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DoWorkEventArgs_TypeDefinitionIndex = 29496;

	class DoWorkEventArgs : public Il2CppObject
	{
	public:
		::System::Object* result; // 0x18
		::System::Object* argument; // 0x20

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Argument()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_GET_ARGUMENT_OFFSET))(nullptr);
		}

		::System::Object* get_Result()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_GET_RESULT_OFFSET))(nullptr);
		}

		::System::Void set_Result(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOWORKEVENTARGS_SET_RESULT_OFFSET))(arg, nullptr);
		}

	};
}

