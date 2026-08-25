#pragma once
#include "../../unitysdk.h"

class Type;

#define MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONENUM_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE6000)
#define MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONENUM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEE6010)

namespace MXField::AnimationControl
{
	inline static constexpr unsigned int FieldEntityAnimationEnum_TypeDefinitionIndex = 11018;

	class FieldEntityAnimationEnum : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONENUM_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString(Type* arg)
		{
			return ((::System::String*(*)(Type*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ANIMATIONCONTROL_FIELDENTITYANIMATIONENUM_TOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

