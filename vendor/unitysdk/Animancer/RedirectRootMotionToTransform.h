#pragma once
#include "../unitysdk.h"

#define ANIMANCER_REDIRECTROOTMOTIONTOTRANSFORM_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x4BD1B0)
#define ANIMANCER_REDIRECTROOTMOTIONTOTRANSFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0x4BD3C0)

namespace Animancer
{
	inline static constexpr unsigned int RedirectRootMotionToTransform_TypeDefinitionIndex = 35207;

	class RedirectRootMotionToTransform : public ::System::Xml::ReadContentAsBinaryHelper
	{
	public:
		::System::Void OnAnimatorMove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_REDIRECTROOTMOTIONTOTRANSFORM_ONANIMATORMOVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_REDIRECTROOTMOTIONTOTRANSFORM_.CTOR_OFFSET))(nullptr);
		}

	};
}

