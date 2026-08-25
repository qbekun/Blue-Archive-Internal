#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_SERVICE_NXPSERVICEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BFDB40)

namespace NPA::Editor::Service
{
	inline static constexpr unsigned int NXPServiceBase_TypeDefinitionIndex = 26512;

	class NXPServiceBase : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_SERVICE_NXPSERVICEBASE_.CTOR_OFFSET))(nullptr);
		}

	};
}

