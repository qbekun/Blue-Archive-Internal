#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_IINTELLISENSEBUILDER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_IINTELLISENSEBUILDER_SHOW_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IIntellisenseBuilder_TypeDefinitionIndex = 29403;

	class IIntellisenseBuilder : public Il2CppObject
	{
	public:
		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IINTELLISENSEBUILDER_GET_NAME_OFFSET))(nullptr);
		}

		::System::Boolean Show(::System::String* str, ::System::String* str, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_IINTELLISENSEBUILDER_SHOW_OFFSET))(str, str, arg, nullptr);
		}

	};
}

