#pragma once
#include "../../unitysdk.h"

namespace AutoMapper { class MemberList; }

#define AUTOMAPPER_CONFIGURATION_MAPPINGEXPRESSION`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define AUTOMAPPER_CONFIGURATION_MAPPINGEXPRESSION`2_FORMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define AUTOMAPPER_CONFIGURATION_MAPPINGEXPRESSION`2_FORDESTINATIONMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace AutoMapper::Configuration
{
	inline static constexpr unsigned int MappingExpression`2_TypeDefinitionIndex = 37649;

	class MappingExpression`2 : public ::System::Resources::FileBasedResourceGroveler
	{
	public:
		::System::Void .ctor(::AutoMapper::MemberList* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::AutoMapper::MemberList*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_MAPPINGEXPRESSION`2_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ForMember(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_MAPPINGEXPRESSION`2_FORMEMBER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ForDestinationMember(::System::Reflection::MemberInfo* arg, Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_MAPPINGEXPRESSION`2_FORDESTINATIONMEMBER_OFFSET))(arg, arg, nullptr);
		}

	};
}

