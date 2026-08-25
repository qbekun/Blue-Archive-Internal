#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_BANNER_NXPCLICKAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C67360)
#define NPA_EDITOR_BANNER_NXPCLICKAREA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C673A0)

namespace NPA::Editor::Banner
{
	inline static constexpr unsigned int NXPClickArea_TypeDefinitionIndex = 26926;

	class NXPClickArea : public Il2CppObject
	{
	public:
		::System::Int32 left; // 0x10
		::System::Int32 top; // 0x14
		::System::Int32 right; // 0x18
		::System::Int32 bottom; // 0x1C

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLICKAREA_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_BANNER_NXPCLICKAREA_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

