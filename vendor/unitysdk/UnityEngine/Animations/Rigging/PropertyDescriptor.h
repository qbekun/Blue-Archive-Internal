#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::Animations::Rigging { class PropertyType; }

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int PropertyDescriptor_TypeDefinitionIndex = 37190;

	class PropertyDescriptor : public Il2CppObject
	{
	public:
		::System::Int32 size; // 0x10
		::UnityEngine::Animations::Rigging::PropertyType* type; // 0x14

	};
}

