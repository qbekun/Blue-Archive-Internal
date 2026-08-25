#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B47590)
#define SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_GET_RUNINSTALLER_OFFSET UNITYSDK_OFFSET(0x9B475B0)
#define SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B475C0)
#define SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B47650)
#define SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B47660)
#define SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B476D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RunInstallerAttribute_TypeDefinitionIndex = 29454;

	class RunInstallerAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Boolean _RunInstaller_k__BackingField; // 0x10
		::System::ComponentModel::RunInstallerAttribute* Yes; // 0x0
		::System::ComponentModel::RunInstallerAttribute* No; // 0x8
		::System::ComponentModel::RunInstallerAttribute* Default; // 0x10

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_RunInstaller()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_GET_RUNINSTALLER_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_RUNINSTALLERATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

