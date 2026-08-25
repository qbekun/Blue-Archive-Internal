#pragma once
#include "../../../unitysdk.h"

#define UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINT_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x9E23FD0)
#define UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E24210)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int MultiAimConstraint_TypeDefinitionIndex = 37168;

	class MultiAimConstraint : public ::System::Xml::XmlReaderSettings
	{
	public:
		::System::Void OnValidate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINT_ONVALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_MULTIAIMCONSTRAINT_.CTOR_OFFSET))(nullptr);
		}

	};
}

