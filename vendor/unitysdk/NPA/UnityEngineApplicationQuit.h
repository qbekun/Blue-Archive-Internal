#pragma once
#include "../unitysdk.h"

#define NPA_UNITYENGINEAPPLICATIONQUIT_QUIT_OFFSET UNITYSDK_OFFSET(0x9BC0BB0)
#define NPA_UNITYENGINEAPPLICATIONQUIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC0E00)

namespace NPA
{
	inline static constexpr unsigned int UnityEngineApplicationQuit_TypeDefinitionIndex = 25559;

	class UnityEngineApplicationQuit : public Il2CppObject
	{
	public:
		::System::Void Quit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEAPPLICATIONQUIT_QUIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEAPPLICATIONQUIT_.CTOR_OFFSET))(nullptr);
		}

	};
}

