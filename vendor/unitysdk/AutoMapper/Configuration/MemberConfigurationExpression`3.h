#pragma once
#include "../../unitysdk.h"

#define AUTOMAPPER_CONFIGURATION_MEMBERCONFIGURATIONEXPRESSION`3_GET_PROPERTYMAPACTIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define AUTOMAPPER_CONFIGURATION_MEMBERCONFIGURATIONEXPRESSION`3_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define AUTOMAPPER_CONFIGURATION_MEMBERCONFIGURATIONEXPRESSION`3_GET_DESTINATIONMEMBER_OFFSET UNITYSDK_OFFSET(0x000000)
#define AUTOMAPPER_CONFIGURATION_MEMBERCONFIGURATIONEXPRESSION`3_IGNORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define AUTOMAPPER_CONFIGURATION_MEMBERCONFIGURATIONEXPRESSION`3_IGNORE_OFFSET UNITYSDK_OFFSET(0x000000)
#define AUTOMAPPER_CONFIGURATION_MEMBERCONFIGURATIONEXPRESSION`3_SET_IGNORED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace AutoMapper::Configuration
{
	inline static constexpr unsigned int MemberConfigurationExpression`3_TypeDefinitionIndex = 37652;

	class MemberConfigurationExpression`3 : public Il2CppObject
	{
	public:
		::System::Type* _sourceType; // 0x0
		Il2CppObject* _PropertyMapActions_k__BackingField; // 0x0
		::System::Reflection::MemberInfo* _DestinationMember_k__BackingField; // 0x0
		::System::Boolean _Ignored_k__BackingField; // 0x0

		Il2CppObject* get_PropertyMapActions()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_MEMBERCONFIGURATIONEXPRESSION`3_GET_PROPERTYMAPACTIONS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Reflection::MemberInfo* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_MEMBERCONFIGURATIONEXPRESSION`3_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MemberInfo* get_DestinationMember()
		{
			return (return (::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_MEMBERCONFIGURATIONEXPRESSION`3_GET_DESTINATIONMEMBER_OFFSET))(nullptr);
		}

		::System::Void Ignore()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_MEMBERCONFIGURATIONEXPRESSION`3_IGNORE_OFFSET))(nullptr);
		}

		::System::Void Ignore(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_MEMBERCONFIGURATIONEXPRESSION`3_IGNORE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Ignored(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_CONFIGURATION_MEMBERCONFIGURATIONEXPRESSION`3_SET_IGNORED_OFFSET))(arg, nullptr);
		}

	};
}

