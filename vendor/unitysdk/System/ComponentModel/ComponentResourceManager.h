#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B25270)
#define SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B252C0)
#define SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_GET_NEUTRALRESOURCESCULTURE_OFFSET UNITYSDK_OFFSET(0x9B25320)
#define SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_APPLYRESOURCES_OFFSET UNITYSDK_OFFSET(0x9B253B0)
#define SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_APPLYRESOURCES_OFFSET UNITYSDK_OFFSET(0x9B253E0)
#define SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_FILLRESOURCES_OFFSET UNITYSDK_OFFSET(0x9B25F40)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ComponentResourceManager_TypeDefinitionIndex = 29363;

	class ComponentResourceManager : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* _resourceSets; // 0x88
		::System::Globalization::CultureInfo* _neutralResourcesCulture; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Globalization::CultureInfo* get_NeutralResourcesCulture()
		{
			return (return (::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_GET_NEUTRALRESOURCESCULTURE_OFFSET))(nullptr);
		}

		::System::Void ApplyResources(::System::Object* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_APPLYRESOURCES_OFFSET))(arg, str, nullptr);
		}

		::System::Void ApplyResources(::System::Object* arg, ::System::String* str, ::System::Globalization::CultureInfo* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::String*, ::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_APPLYRESOURCES_OFFSET))(arg, str, arg, nullptr);
		}

		Il2CppObject* FillResources(::System::Globalization::CultureInfo* arg, ::System::Resources::ResourceSet&* arg)
		{
			return (return (Il2CppObject*(*)(::System::Globalization::CultureInfo*, ::System::Resources::ResourceSet&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTRESOURCEMANAGER_FILLRESOURCES_OFFSET))(arg, arg, nullptr);
		}

	};
}

