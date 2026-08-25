#pragma once
#include "unitysdk.h"

#define SITE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4D800)
#define SITE_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x9B4E8D0)
#define SITE_GET_CONTAINER_OFFSET UNITYSDK_OFFSET(0x9B4E8E0)
#define SITE_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x9B4E8F0)
#define SITE_GET_DESIGNMODE_OFFSET UNITYSDK_OFFSET(0x9B4E9A0)
#define SITE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B4E9B0)
#define SITE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9B4E9C0)

	inline static constexpr unsigned int Site_TypeDefinitionIndex = 29492;

	class Site : public Il2CppObject
	{
	public:
		::System::ComponentModel::IComponent* component; // 0x10
		::System::ComponentModel::Container* container; // 0x18
		::System::String* name; // 0x20

		::System::Void .ctor(::System::ComponentModel::IComponent* arg, ::System::ComponentModel::Container* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::ComponentModel::IComponent*, ::System::ComponentModel::Container*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SITE_.CTOR_OFFSET))(arg, arg, str, nullptr);
		}

		::System::ComponentModel::IComponent* get_Component()
		{
			return (return (::System::ComponentModel::IComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SITE_GET_COMPONENT_OFFSET))(nullptr);
		}

		::System::ComponentModel::IContainer* get_Container()
		{
			return (return (::System::ComponentModel::IContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SITE_GET_CONTAINER_OFFSET))(nullptr);
		}

		::System::Object* GetService(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SITE_GETSERVICE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DesignMode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SITE_GET_DESIGNMODE_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SITE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SITE_SET_NAME_OFFSET))(str, nullptr);
		}

	};

