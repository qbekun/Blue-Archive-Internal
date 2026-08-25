#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Component; }

#define UNITYENGINE_ANIMATIONS_RIGGING_CONSTRAINTSUTILS_CONSTRUCTCUSTOMPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9E2D5B0)
#define UNITYENGINE_ANIMATIONS_RIGGING_CONSTRAINTSUTILS_CONSTRUCTCONSTRAINTDATAPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x9E23710)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int ConstraintsUtils_TypeDefinitionIndex = 37201;

	class ConstraintsUtils : public Il2CppObject
	{
	public:
		::System::String* ConstructCustomPropertyName(::UnityEngine::Component* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::UnityEngine::Component*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_CONSTRAINTSUTILS_CONSTRUCTCUSTOMPROPERTYNAME_OFFSET))(arg, str, nullptr);
		}

		::System::String* ConstructConstraintDataPropertyName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_CONSTRAINTSUTILS_CONSTRUCTCONSTRAINTDATAPROPERTYNAME_OFFSET))(str, nullptr);
		}

	};
}

