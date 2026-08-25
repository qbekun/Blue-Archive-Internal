#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ICOMPONENT_GET_SITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMPONENT_SET_SITE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMPONENT_ADD_DISPOSED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ICOMPONENT_REMOVE_DISPOSED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IComponent_TypeDefinitionIndex = 29499;

	class IComponent : public Il2CppObject
	{
	public:
		::System::ComponentModel::ISite* get_Site()
		{
			return (return (::System::ComponentModel::ISite*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMPONENT_GET_SITE_OFFSET))(nullptr);
		}

		::System::Void set_Site(::System::ComponentModel::ISite* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ISite*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMPONENT_SET_SITE_OFFSET))(arg, nullptr);
		}

		::System::Void add_Disposed(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMPONENT_ADD_DISPOSED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_Disposed(::System::EventHandler* arg)
		{
			((::System::Void(*)(::System::EventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ICOMPONENT_REMOVE_DISPOSED_OFFSET))(arg, nullptr);
		}

	};
}

