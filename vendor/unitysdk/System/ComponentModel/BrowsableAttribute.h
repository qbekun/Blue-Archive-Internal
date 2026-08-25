#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B1EA00)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_GET_BROWSABLE_OFFSET UNITYSDK_OFFSET(0x9B1EA20)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B1EA30)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B1EAF0)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B1EB50)
#define SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B1EBC0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BrowsableAttribute_TypeDefinitionIndex = 29321;

	class BrowsableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::BrowsableAttribute* Yes; // 0x0
		::System::ComponentModel::BrowsableAttribute* No; // 0x8
		::System::ComponentModel::BrowsableAttribute* Default; // 0x10
		::System::Boolean _Browsable_k__BackingField; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Browsable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_GET_BROWSABLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BROWSABLEATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

