#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_SERVICE_NXPSERVICEMOCK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BFDB60)

namespace NPA::Editor::Service
{
	inline static constexpr unsigned int NXPServiceMock_TypeDefinitionIndex = 26515;

	class NXPServiceMock : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPSERVICEMOCK_.CTOR_OFFSET))(nullptr);
		}

	};
}

