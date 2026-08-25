#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B20FA0)
#define SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9B20FC0)
#define SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B20FD0)
#define SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B21090)
#define SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B210A0)
#define SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B21140)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReadOnlyAttribute_TypeDefinitionIndex = 29340;

	class ReadOnlyAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::ReadOnlyAttribute* Yes; // 0x0
		::System::ComponentModel::ReadOnlyAttribute* No; // 0x8
		::System::ComponentModel::ReadOnlyAttribute* Default; // 0x10
		::System::Boolean _IsReadOnly_k__BackingField; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_READONLYATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

