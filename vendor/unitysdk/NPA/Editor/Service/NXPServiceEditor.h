#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_SERVICE_NXPSERVICEEDITOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BFDB50)

namespace NPA::Editor::Service
{
	inline static constexpr unsigned int NXPServiceEditor_TypeDefinitionIndex = 26513;

	class NXPServiceEditor : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPSERVICEEDITOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

