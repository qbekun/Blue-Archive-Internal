#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B32560)
#define SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B325B0)
#define SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_GET_INSTALLERTYPE_OFFSET UNITYSDK_OFFSET(0x9B325E0)
#define SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B32650)
#define SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B326E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int InstallerTypeAttribute_TypeDefinitionIndex = 29411;

	class InstallerTypeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _typeName; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Type* get_InstallerType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_GET_INSTALLERTYPE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INSTALLERTYPEATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

