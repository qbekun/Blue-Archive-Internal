#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B20AB0)
#define SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_GET_ISLOCALIZABLE_OFFSET UNITYSDK_OFFSET(0x9B20AD0)
#define SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B20AE0)
#define SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B20BA0)
#define SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B20BB0)
#define SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B20C50)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LocalizableAttribute_TypeDefinitionIndex = 29338;

	class LocalizableAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _IsLocalizable_k__BackingField; // 0x10
		::System::ComponentModel::LocalizableAttribute* Yes; // 0x0
		::System::ComponentModel::LocalizableAttribute* No; // 0x8
		::System::ComponentModel::LocalizableAttribute* Default; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsLocalizable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_GET_ISLOCALIZABLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LOCALIZABLEATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

