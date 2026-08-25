#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_NXTOASTUTIL_SHOW_OFFSET UNITYSDK_OFFSET(0x9DA7DE0)
#define NPA_EDITOR_NXTOASTUTIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA8100)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXToastUtil_TypeDefinitionIndex = 26370;

	class NXToastUtil : public Il2CppObject
	{
	public:
		::System::Void Show(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXTOASTUTIL_SHOW_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXTOASTUTIL_.CTOR_OFFSET))(nullptr);
		}

	};
}

