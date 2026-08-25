#pragma once
#include "../../unitysdk.h"

#define SPINE_UNITY_SPINEPATHCONSTRAINT_.CTOR_OFFSET UNITYSDK_OFFSET(0x961E6F0)

namespace Spine::Unity
{
	inline static constexpr unsigned int SpinePathConstraint_TypeDefinitionIndex = 35371;

	class SpinePathConstraint : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SPINEPATHCONSTRAINT_.CTOR_OFFSET))(str, str, arg, arg, nullptr);
		}

	};
}

