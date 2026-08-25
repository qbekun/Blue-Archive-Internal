#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPBASEPLATERECIPEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C19F50)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPBasePlateRecipeInfo_TypeDefinitionIndex = 26616;

	class NXPBasePlateRecipeInfo : public Il2CppObject
	{
	public:
		::System::String* id; // 0x10
		::System::String* title; // 0x18
		::System::String* type; // 0x20
		Il2CppObject* meta; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPBASEPLATERECIPEINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

