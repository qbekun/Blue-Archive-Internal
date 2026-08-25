#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_LIVESTREAM_NXPLIVESTREAMPROTOCOL`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA::Editor::Livestream
{
	inline static constexpr unsigned int NXPLivestreamProtocol`1_TypeDefinitionIndex = 26784;

	class NXPLivestreamProtocol`1 : public Il2CppObject
	{
	public:
		::System::Int32 code; // 0x0
		::System::String* message; // 0x0
		::System::String* name; // 0x0
		Il2CppObject* result; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_LIVESTREAM_NXPLIVESTREAMPROTOCOL`1_.CTOR_OFFSET))(nullptr);
		}

	};
}

