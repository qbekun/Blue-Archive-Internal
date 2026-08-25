#pragma once
#include "../unitysdk.h"

#define NPA_UNITYENGINEDEVICEGUARDEDDIRECTCALL_GETHWIDFOREDITOR_OFFSET UNITYSDK_OFFSET(0x9BC0E90)
#define NPA_UNITYENGINEDEVICEGUARDEDDIRECTCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC1070)

namespace NPA
{
	inline static constexpr unsigned int UnityEngineDeviceGuardedDirectCall_TypeDefinitionIndex = 25562;

	class UnityEngineDeviceGuardedDirectCall : public Il2CppObject
	{
	public:
		::System::String* GetHwidForEditor()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEDEVICEGUARDEDDIRECTCALL_GETHWIDFOREDITOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEDEVICEGUARDEDDIRECTCALL_.CTOR_OFFSET))(nullptr);
		}

	};
}

