#pragma once
#include "../unitysdk.h"

#define NPA_UNITYENGINEDEVICESNAPSHOT_GETHWIDFOREDITOR_OFFSET UNITYSDK_OFFSET(0x9BC1080)
#define NPA_UNITYENGINEDEVICESNAPSHOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC1090)

namespace NPA
{
	inline static constexpr unsigned int UnityEngineDeviceSnapshot_TypeDefinitionIndex = 25564;

	class UnityEngineDeviceSnapshot : public Il2CppObject
	{
	public:
		::System::String* _hwidForEditor; // 0x10

		::System::String* GetHwidForEditor()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEDEVICESNAPSHOT_GETHWIDFOREDITOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEDEVICESNAPSHOT_.CTOR_OFFSET))(nullptr);
		}

	};
}

