#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2C080)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2C0F0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2C120)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2C0B0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_ISIDENTITY_OFFSET UNITYSDK_OFFSET(0x9B2C160)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x9B2C170)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9B2C180)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_PRIMARYKEY_OFFSET UNITYSDK_OFFSET(0x9B2C190)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B2C1A0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B2C230)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DataObjectFieldAttribute_TypeDefinitionIndex = 29370;

	class DataObjectFieldAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _IsIdentity_k__BackingField; // 0x10
		::System::Boolean _IsNullable_k__BackingField; // 0x11
		::System::Int32 _Length_k__BackingField; // 0x14
		::System::Boolean _PrimaryKey_k__BackingField; // 0x18

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsIdentity()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_ISIDENTITY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_ISNULLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Boolean get_PrimaryKey()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GET_PRIMARYKEY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTFIELDATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

