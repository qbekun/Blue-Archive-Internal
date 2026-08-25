#pragma once
#include "../unitysdk.h"

#define NPA_IUNITYENGINEDEVICE_GETHWIDFOREDITOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace NPA
{
	inline static constexpr unsigned int IUnityEngineDevice_TypeDefinitionIndex = 25561;

	class IUnityEngineDevice : public Il2CppObject
	{
	public:
		::System::String* GetHwidForEditor()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_IUNITYENGINEDEVICE_GETHWIDFOREDITOR_OFFSET))(nullptr);
		}

	};
}

