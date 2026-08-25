#pragma once
#include "../unitysdk.h"

namespace Animancer { class ClipTransition; }

#define MXUNDERCOVER_UCENTITYANIMATIONSHEET_.CTOR_OFFSET UNITYSDK_OFFSET(0xD64380)
#define MXUNDERCOVER_UCENTITYANIMATIONSHEET_GET_OFFSET UNITYSDK_OFFSET(0xD64390)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCEntityAnimationSheet_TypeDefinitionIndex = 9660;

	class UCEntityAnimationSheet : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYANIMATIONSHEET_.CTOR_OFFSET))(nullptr);
		}

		::Animancer::ClipTransition* Get(::System::String* str)
		{
			return ((::Animancer::ClipTransition*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCENTITYANIMATIONSHEET_GET_OFFSET))(str, nullptr);
		}

	};
}

