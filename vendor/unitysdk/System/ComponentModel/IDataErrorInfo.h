#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_IDATAERRORINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IDATAERRORINFO_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IDataErrorInfo_TypeDefinitionIndex = 29401;

	class IDataErrorInfo : public Il2CppObject
	{
	public:
		::System::String* get_Item(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IDATAERRORINFO_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::String* get_Error()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IDATAERRORINFO_GET_ERROR_OFFSET))(nullptr);
		}

	};
}

