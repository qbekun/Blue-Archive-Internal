#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ILISTSOURCE_GET_CONTAINSLISTCOLLECTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_ILISTSOURCE_GETLIST_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IListSource_TypeDefinitionIndex = 29404;

	class IListSource : public Il2CppObject
	{
	public:
		::System::Boolean get_ContainsListCollection()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ILISTSOURCE_GET_CONTAINSLISTCOLLECTION_OFFSET))(nullptr);
		}

		::System::Collections::IList* GetList()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ILISTSOURCE_GETLIST_OFFSET))(nullptr);
		}

	};
}

