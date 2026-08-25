#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_ITEXTELEMENT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ITextElement_TypeDefinitionIndex = 30212;

	class ITextElement : public Il2CppObject
	{
	public:
		::System::String* get_text()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_ITEXTELEMENT_GET_TEXT_OFFSET))(nullptr);
		}

	};
}

