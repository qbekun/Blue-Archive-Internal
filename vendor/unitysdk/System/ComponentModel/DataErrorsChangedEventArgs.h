#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DATAERRORSCHANGEDEVENTARGS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4A810)
#define SYSTEM_COMPONENTMODEL_DATAERRORSCHANGEDEVENTARGS_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9B4A870)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DataErrorsChangedEventArgs_TypeDefinitionIndex = 29476;

	class DataErrorsChangedEventArgs : public Il2CppObject
	{
	public:
		::System::String* _propertyName; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAERRORSCHANGEDEVENTARGS_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_PropertyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAERRORSCHANGEDEVENTARGS_GET_PROPERTYNAME_OFFSET))(nullptr);
		}

	};
}

