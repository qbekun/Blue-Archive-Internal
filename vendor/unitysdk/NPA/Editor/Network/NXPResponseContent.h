#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Texture2D; }

#define NPA_EDITOR_NETWORK_NXPRESPONSECONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1ABB0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPResponseContent_TypeDefinitionIndex = 26641;

	class NXPResponseContent : public Il2CppObject
	{
	public:
		::UnityEngine::Texture2D* Texture; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPRESPONSECONTENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

