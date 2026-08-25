#pragma once
#include "../unitysdk.h"

#define ANIMANCER_DEFAULTFADEVALUEATTRIBUTE_GET_PRIMARY_OFFSET UNITYSDK_OFFSET(0x4ABE70)
#define ANIMANCER_DEFAULTFADEVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4ABF50)

namespace Animancer
{
	inline static constexpr unsigned int DefaultFadeValueAttribute_TypeDefinitionIndex = 35128;

	class DefaultFadeValueAttribute : public Il2CppObject
	{
	public:
		::System::Object* get_Primary()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DEFAULTFADEVALUEATTRIBUTE_GET_PRIMARY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DEFAULTFADEVALUEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

