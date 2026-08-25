#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_GET_NEWOBJECT_OFFSET UNITYSDK_OFFSET(0xDE30B0)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_SET_NEWOBJECT_OFFSET UNITYSDK_OFFSET(0xDE30C0)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE30D0)
#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE30E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AddingNewEventArgs_TypeDefinitionIndex = 10144;

	class AddingNewEventArgs : public Il2CppObject
	{
	public:
		::System::Object* _NewObject_k__BackingField; // 0x10

		::System::Object* get_NewObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_GET_NEWOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_NewObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_SET_NEWOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

