#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B206F0)
#define SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_GET_IMMUTABLE_OFFSET UNITYSDK_OFFSET(0x9B20710)
#define SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B20720)
#define SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B207E0)
#define SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B207F0)
#define SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B20860)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ImmutableObjectAttribute_TypeDefinitionIndex = 29335;

	class ImmutableObjectAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::ImmutableObjectAttribute* Yes; // 0x0
		::System::ComponentModel::ImmutableObjectAttribute* No; // 0x8
		::System::ComponentModel::ImmutableObjectAttribute* Default; // 0x10
		::System::Boolean _Immutable_k__BackingField; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Immutable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_GET_IMMUTABLE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IMMUTABLEOBJECTATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

