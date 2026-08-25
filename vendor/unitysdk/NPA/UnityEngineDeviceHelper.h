#pragma once
#include "../unitysdk.h"

#define NPA_UNITYENGINEDEVICEHELPER_RESOLVEHWIDFOREDITOR_OFFSET UNITYSDK_OFFSET(0x9BC0F60)

namespace NPA
{
	inline static constexpr unsigned int UnityEngineDeviceHelper_TypeDefinitionIndex = 25563;

	class UnityEngineDeviceHelper : public Il2CppObject
	{
	public:
		::System::String* KEY_EDITOR_HWID; // 0x0

		::System::String* ResolveHwidForEditor()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEDEVICEHELPER_RESOLVEHWIDFOREDITOR_OFFSET))(nullptr);
		}

	};
}

