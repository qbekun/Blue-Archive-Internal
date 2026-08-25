#pragma once
#include "../unitysdk.h"

#define ANIMANCER_SELFDRAWERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4AC0A0)

namespace Animancer
{
	inline static constexpr unsigned int SelfDrawerAttribute_TypeDefinitionIndex = 35132;

	class SelfDrawerAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SELFDRAWERATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

