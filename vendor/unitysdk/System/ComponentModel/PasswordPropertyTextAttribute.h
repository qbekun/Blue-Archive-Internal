#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B3EED0)
#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B3EEF0)
#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x9B3EF10)
#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B3EF20)
#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B3EF80)
#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B3EF90)
#define SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B3F000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PasswordPropertyTextAttribute_TypeDefinitionIndex = 29443;

	class PasswordPropertyTextAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::PasswordPropertyTextAttribute* Yes; // 0x0
		::System::ComponentModel::PasswordPropertyTextAttribute* No; // 0x8
		::System::ComponentModel::PasswordPropertyTextAttribute* Default; // 0x10
		::System::Boolean _Password_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Password()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_GET_PASSWORD_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PASSWORDPROPERTYTEXTATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

