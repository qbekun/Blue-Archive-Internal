#pragma once
#include "../../unitysdk.h"

namespace NPA::Ex { class AppBehaviour; }

#define NPA_EX_APPBEHAVIOUR_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x9D1DA90)
#define NPA_EX_APPBEHAVIOUR_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x9D1DBF0)
#define NPA_EX_APPBEHAVIOUR_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x9D1DC50)
#define NPA_EX_APPBEHAVIOUR_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D1DD10)
#define NPA_EX_APPBEHAVIOUR_ISINMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x9D1DD40)
#define NPA_EX_APPBEHAVIOUR_INITONCE_OFFSET UNITYSDK_OFFSET(0x9D1DD70)
#define NPA_EX_APPBEHAVIOUR_ONDOMAINRESET_OFFSET UNITYSDK_OFFSET(0x9D1DFD0)
#define NPA_EX_APPBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1E110)

namespace NPA::Ex
{
	inline static constexpr unsigned int AppBehaviour_TypeDefinitionIndex = 25987;

	class AppBehaviour : public Il2CppObject
	{
	public:
		::System::Int32 EXECUTION_ORDER; // 0x0
		::System::Int32 unityMainThreadId; // 0x18
		::NPA::Ex::AppBehaviour* instance; // 0x0

		::System::Void OnApplicationFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPBEHAVIOUR_ONAPPLICATIONFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Void OnApplicationPause(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPBEHAVIOUR_ONAPPLICATIONPAUSE_OFFSET))(arg, nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPBEHAVIOUR_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPBEHAVIOUR_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean IsInMainThread()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPBEHAVIOUR_ISINMAINTHREAD_OFFSET))(nullptr);
		}

		::System::Void InitOnce()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPBEHAVIOUR_INITONCE_OFFSET))(nullptr);
		}

		::System::Void OnDomainReset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPBEHAVIOUR_ONDOMAINRESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPBEHAVIOUR_.CTOR_OFFSET))(nullptr);
		}

	};
}

