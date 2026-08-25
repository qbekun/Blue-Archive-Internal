#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPToyUnityLifeCycle; }

#define NPA_EDITOR_NXPTOYUNITYLIFECYCLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D7CE30)
#define NPA_EDITOR_NXPTOYUNITYLIFECYCLE_START_OFFSET UNITYSDK_OFFSET(0x9D7CE90)
#define NPA_EDITOR_NXPTOYUNITYLIFECYCLE_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x9D7CEF0)
#define NPA_EDITOR_NXPTOYUNITYLIFECYCLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D7CF50)
#define NPA_EDITOR_NXPTOYUNITYLIFECYCLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9D7CFE0)
#define NPA_EDITOR_NXPTOYUNITYLIFECYCLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D7D1B0)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPToyUnityLifeCycle_TypeDefinitionIndex = 26246;

	class NXPToyUnityLifeCycle : public Il2CppObject
	{
	public:
		::NPA::Editor::NXPToyUnityLifeCycle* instance; // 0x0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUNITYLIFECYCLE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUNITYLIFECYCLE_START_OFFSET))(nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUNITYLIFECYCLE_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUNITYLIFECYCLE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUNITYLIFECYCLE_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUNITYLIFECYCLE_.CTOR_OFFSET))(nullptr);
		}

	};
}

