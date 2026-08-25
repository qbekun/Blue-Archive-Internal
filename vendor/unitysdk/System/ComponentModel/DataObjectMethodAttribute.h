#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2C240)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2C260)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x9B2C290)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GET_METHODTYPE_OFFSET UNITYSDK_OFFSET(0x9B2C2A0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B2C2B0)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B2C320)
#define SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_MATCH_OFFSET UNITYSDK_OFFSET(0x9B2C390)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DataObjectMethodAttribute_TypeDefinitionIndex = 29371;

	class DataObjectMethodAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _IsDefault_k__BackingField; // 0x10
		::System::ComponentModel::DataObjectMethodType* _MethodType_k__BackingField; // 0x14

		::System::Void .ctor(::System::ComponentModel::DataObjectMethodType* arg)
		{
			((::System::Void(*)(::System::ComponentModel::DataObjectMethodType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::ComponentModel::DataObjectMethodType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::ComponentModel::DataObjectMethodType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean get_IsDefault()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GET_ISDEFAULT_OFFSET))(nullptr);
		}

		::System::ComponentModel::DataObjectMethodType* get_MethodType()
		{
			return (return (::System::ComponentModel::DataObjectMethodType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GET_METHODTYPE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Match(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATAOBJECTMETHODATTRIBUTE_MATCH_OFFSET))(arg, nullptr);
		}

	};
}

