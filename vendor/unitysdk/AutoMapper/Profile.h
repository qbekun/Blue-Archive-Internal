#pragma once
#include "../unitysdk.h"

namespace AutoMapper::Configuration::Conventions { class PrePostfixName; }
namespace AutoMapper::Configuration::Conventions { class MemberConfiguration; }
namespace AutoMapper { class MemberList; }

#define AUTOMAPPER_PROFILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D0DC0)
#define AUTOMAPPER_PROFILE_CREATEMAP_OFFSET UNITYSDK_OFFSET(0x000000)
#define AUTOMAPPER_PROFILE_CREATEMAPCORE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace AutoMapper
{
	inline static constexpr unsigned int Profile_TypeDefinitionIndex = 37628;

	class Profile : public Il2CppObject
	{
	public:
		Il2CppObject* _prefixes; // 0x10
		Il2CppObject* _postfixes; // 0x18
		Il2CppObject* _typeMapConfigs; // 0x20
		::AutoMapper::Configuration::Conventions::PrePostfixName* _prePostfixName; // 0x28
		::AutoMapper::Configuration::Conventions::MemberConfiguration* _memberConfiguration; // 0x30
		::System::String* _ProfileName_k__BackingField; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_PROFILE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMap()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_PROFILE_CREATEMAP_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMapCore(::AutoMapper::MemberList* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::AutoMapper::MemberList*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_PROFILE_CREATEMAPCORE_OFFSET))(arg, arg, nullptr);
		}

	};
}

