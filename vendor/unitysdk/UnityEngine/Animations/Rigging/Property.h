#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations::Rigging { class PropertyDescriptor; }

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int Property_TypeDefinitionIndex = 37191;

	class Property : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::UnityEngine::Animations::Rigging::PropertyDescriptor* descriptor; // 0x18

	};
}

