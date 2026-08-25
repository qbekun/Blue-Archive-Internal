#pragma once
#include "../../unitysdk.h"

namespace AutoMapper { class MemberList; }
namespace AutoMapper::Internal { class TypePair; }

#define AUTOMAPPER_CONFIGURATION_TYPEMAPCONFIGURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D4B50)
#define AUTOMAPPER_CONFIGURATION_TYPEMAPCONFIGURATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x4D4BC0)
#define AUTOMAPPER_CONFIGURATION_TYPEMAPCONFIGURATION_SET_PROJECTION_OFFSET UNITYSDK_OFFSET(0x4D4C60)
#define AUTOMAPPER_CONFIGURATION_TYPEMAPCONFIGURATION_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x4D4C70)
#define AUTOMAPPER_CONFIGURATION_TYPEMAPCONFIGURATION_GET_TYPEMAPACTIONS_OFFSET UNITYSDK_OFFSET(0x4D4C80)
#define AUTOMAPPER_CONFIGURATION_TYPEMAPCONFIGURATION_GET_MEMBERCONFIGURATIONS_OFFSET UNITYSDK_OFFSET(0x4D4C90)

namespace AutoMapper::Configuration
{
	inline static constexpr unsigned int TypeMapConfiguration_TypeDefinitionIndex = 37653;

	class TypeMapConfiguration : public Il2CppObject
	{
	public:
		Il2CppObject* _memberConfigurations; // 0x10
		::AutoMapper::MemberList* _memberList; // 0x18
		::AutoMapper::Internal::TypePair* _types; // 0x20
		::System::Boolean _Projection_k__BackingField; // 0x30
		Il2CppObject* _TypeMapActions_k__BackingField; // 0x38

		::System::Void .ctor(::AutoMapper::MemberList* arg, ::System::Type* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::AutoMapper::MemberList*, ::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_TYPEMAPCONFIGURATION_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::AutoMapper::MemberList* arg, ::AutoMapper::Internal::TypePair* arg)
		{
			((::System::Void(*)(::AutoMapper::MemberList*, ::AutoMapper::Internal::TypePair*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_TYPEMAPCONFIGURATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Projection(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_TYPEMAPCONFIGURATION_SET_PROJECTION_OFFSET))(arg, nullptr);
		}

		::System::Type* get_SourceType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_TYPEMAPCONFIGURATION_GET_SOURCETYPE_OFFSET))(nullptr);
		}

		Il2CppObject* get_TypeMapActions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_TYPEMAPCONFIGURATION_GET_TYPEMAPACTIONS_OFFSET))(nullptr);
		}

		Il2CppObject* get_MemberConfigurations()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_TYPEMAPCONFIGURATION_GET_MEMBERCONFIGURATIONS_OFFSET))(nullptr);
		}

	};
}

