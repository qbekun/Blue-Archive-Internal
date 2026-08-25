#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_SERVICE_NXPSERVICEINFACE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BFDB70)

namespace NPA::Editor::Service
{
	inline static constexpr unsigned int NXPServiceInface_TypeDefinitionIndex = 26514;

	class NXPServiceInface : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPSERVICEINFACE_.CTOR_OFFSET))(nullptr);
		}

	};
}

