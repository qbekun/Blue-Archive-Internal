#pragma once
#include "../unitysdk.h"

#define AUTOMAPPER_TYPEMAP_GET_DETAILS_OFFSET UNITYSDK_OFFSET(0x4D1330)
#define AUTOMAPPER_TYPEMAP_SET_INCLUDEALLDERIVEDTYPES_OFFSET UNITYSDK_OFFSET(0x4D13B0)
#define AUTOMAPPER_TYPEMAP_GET_PATHMAPS_OFFSET UNITYSDK_OFFSET(0x4D1430)
#define AUTOMAPPER_TYPEMAP_IGNOREPATHS_OFFSET UNITYSDK_OFFSET(0x4D1480)
#define AUTOMAPPER_TYPEMAP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4D1900)

namespace AutoMapper
{
	inline static constexpr unsigned int TypeMap_TypeDefinitionIndex = 37634;

	class TypeMap : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::LambdaExpression* EmptyLambda; // 0x0
		::System::Reflection::MethodInfo* CreateProxyMethod; // 0x8
		TypeMapDetails* _details; // 0x10

		TypeMapDetails* get_Details()
		{
			return (return (TypeMapDetails*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_TYPEMAP_GET_DETAILS_OFFSET))(nullptr);
		}

		::System::Void set_IncludeAllDerivedTypes(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_TYPEMAP_SET_INCLUDEALLDERIVEDTYPES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_PathMaps()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_TYPEMAP_GET_PATHMAPS_OFFSET))(nullptr);
		}

		::System::Void IgnorePaths(::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_TYPEMAP_IGNOREPATHS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_TYPEMAP_.CCTOR_OFFSET))(nullptr);
		}

	};
}

