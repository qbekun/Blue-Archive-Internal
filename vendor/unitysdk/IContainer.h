#pragma once
#include "unitysdk.h"

#define ICONTAINER_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONTAINER_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONTAINER_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x000000)
#define ICONTAINER_GET_QUERYPATH_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IContainer_TypeDefinitionIndex = 33952;

	class IContainer : public Il2CppObject
	{
	public:
		::System::String* get_displayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICONTAINER_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Void set_displayName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ICONTAINER_SET_DISPLAYNAME_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_children()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICONTAINER_GET_CHILDREN_OFFSET))(nullptr);
		}

		::System::String* get_queryPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICONTAINER_GET_QUERYPATH_OFFSET))(nullptr);
		}

	};

