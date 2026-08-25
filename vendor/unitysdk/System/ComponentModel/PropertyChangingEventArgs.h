#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xDE3730)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0xDE3740)
#define SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0xDE3750)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyChangingEventArgs_TypeDefinitionIndex = 10149;

	class PropertyChangingEventArgs : public Il2CppObject
	{
	public:
		::System::String* _PropertyName_k__BackingField; // 0x10

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS_GET_PROPERTYNAME_OFFSET))(nullptr);
		}

		::System::Void set_PropertyName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS_SET_PROPERTYNAME_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYCHANGINGEVENTARGS_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

