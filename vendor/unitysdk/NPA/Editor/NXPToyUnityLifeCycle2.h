#pragma once
#include "../../unitysdk.h"

namespace NPA::Editor { class NXPToyUnityLifeCycle2; }

#define NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D7D1C0)
#define NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_START_OFFSET UNITYSDK_OFFSET(0x9D7D270)
#define NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x9D7D2D0)
#define NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_ONQUITTING_OFFSET UNITYSDK_OFFSET(0x9D7D350)
#define NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D7D4F0)
#define NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9D7D5E0)
#define NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D7D830)

namespace NPA::Editor
{
	inline static constexpr unsigned int NXPToyUnityLifeCycle2_TypeDefinitionIndex = 26247;

	class NXPToyUnityLifeCycle2 : public Il2CppObject
	{
	public:
		::System::Boolean wasQuitProcessDone; // 0x18
		::NPA::Editor::NXPToyUnityLifeCycle2* instance; // 0x0

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_START_OFFSET))(nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void OnQuitting()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_ONQUITTING_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NXPTOYUNITYLIFECYCLE2_.CTOR_OFFSET))(nullptr);
		}

	};
}

