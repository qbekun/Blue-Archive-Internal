#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_IUXMLATTRIBUTES_TRYGETATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IUxmlAttributes_TypeDefinitionIndex = 30668;

	class IUxmlAttributes : public Il2CppObject
	{
	public:
		::System::Boolean TryGetAttributeValue(::System::String* str, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IUXMLATTRIBUTES_TRYGETATTRIBUTEVALUE_OFFSET))(str, arg, nullptr);
		}

	};
}

