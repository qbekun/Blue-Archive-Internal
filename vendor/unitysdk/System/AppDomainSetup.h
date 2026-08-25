#pragma once
#include "../unitysdk.h"

#define SYSTEM_APPDOMAINSETUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x93B36D0)

namespace System
{
	inline static constexpr unsigned int AppDomainSetup_TypeDefinitionIndex = 23955;

	class AppDomainSetup : public Il2CppObject
	{
	public:
		::System::String* application_base; // 0x10
		::System::String* application_name; // 0x18
		::System::String* cache_path; // 0x20
		::System::String* configuration_file; // 0x28
		::System::String* dynamic_base; // 0x30
		::System::String* license_file; // 0x38
		::System::String* private_bin_path; // 0x40
		::System::String* private_bin_path_probe; // 0x48
		::System::String* shadow_copy_directories; // 0x50
		::System::String* shadow_copy_files; // 0x58
		::System::Boolean publisher_policy; // 0x60
		::System::Boolean path_changed; // 0x61
		::System::Int32 loader_optimization; // 0x64
		::System::Boolean disallow_binding_redirects; // 0x68
		::System::Boolean disallow_code_downloads; // 0x69
		::System::Object* _activationArguments; // 0x70
		::System::Object* domain_initializer; // 0x78
		::System::Object* application_trust; // 0x80
		::Il2CppArray<::System::Object*>* domain_initializer_args; // 0x88
		::System::Boolean disallow_appbase_probe; // 0x90
		::Il2CppArray<::System::Object*>* configuration_bytes; // 0x98
		::Il2CppArray<::System::Object*>* serialized_non_primitives; // 0xA0
		::System::String* manager_assembly; // 0xA8
		::System::String* manager_type; // 0xB0
		::Il2CppArray<::System::Object*>* partial_visible_assemblies; // 0xB8
		::System::String* _TargetFrameworkName_k__BackingField; // 0xC0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAINSETUP_.CTOR_OFFSET))(nullptr);
		}

	};
}

