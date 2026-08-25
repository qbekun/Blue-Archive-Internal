#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B20070)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B200D0)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9B20100)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAMEVALUE_OFFSET UNITYSDK_OFFSET(0x9B20110)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_SET_DISPLAYNAMEVALUE_OFFSET UNITYSDK_OFFSET(0x9B20120)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B20130)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B201E0)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B20220)
#define SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B20290)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DisplayNameAttribute_TypeDefinitionIndex = 29328;

	class DisplayNameAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::DisplayNameAttribute* Default; // 0x0
		::System::String* _DisplayNameValue_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_DisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::String* get_DisplayNameValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GET_DISPLAYNAMEVALUE_OFFSET))(nullptr);
		}

		::System::Void set_DisplayNameValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_SET_DISPLAYNAMEVALUE_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DISPLAYNAMEATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

