#pragma once
#include "../../unitysdk.h"

namespace NPA::Ex { class IAppInvoker; }
namespace NPA::Ex { class ApplicationFocusEvent; }

#define NPA_EX_APPDELEGATES_ADD_ONAPPLICATIONQUITEVENT_OFFSET UNITYSDK_OFFSET(0x9D1C720)
#define NPA_EX_APPDELEGATES_REMOVE_ONAPPLICATIONQUITEVENT_OFFSET UNITYSDK_OFFSET(0x9D1C7D0)
#define NPA_EX_APPDELEGATES_ADD_ONAPPLICATIONFOCUSEVENT_OFFSET UNITYSDK_OFFSET(0x9D1C880)
#define NPA_EX_APPDELEGATES_REMOVE_ONAPPLICATIONFOCUSEVENT_OFFSET UNITYSDK_OFFSET(0x9D1C940)
#define NPA_EX_APPDELEGATES_ADD_ONAPPLICATIONPAUSEEVENT_OFFSET UNITYSDK_OFFSET(0x9D1CA00)
#define NPA_EX_APPDELEGATES_REMOVE_ONAPPLICATIONPAUSEEVENT_OFFSET UNITYSDK_OFFSET(0x9D1CAC0)
#define NPA_EX_APPDELEGATES_PUBLISHONAPPLICATIONQUITEVENT_OFFSET UNITYSDK_OFFSET(0x9D1CB80)
#define NPA_EX_APPDELEGATES_PUBLISHONAPPLICATIONFOCUSEVENT_OFFSET UNITYSDK_OFFSET(0x9D1CBD0)
#define NPA_EX_APPDELEGATES_PUBLISHONAPPLICATIONPAUSEEVENT_OFFSET UNITYSDK_OFFSET(0x9D1CC30)
#define NPA_EX_APPDELEGATES_CLEARALLEVENTS_OFFSET UNITYSDK_OFFSET(0x9D1CC90)

namespace NPA::Ex
{
	inline static constexpr unsigned int AppDelegates_TypeDefinitionIndex = 25972;

	class AppDelegates : public Il2CppObject
	{
	public:
		::System::Action* OnApplicationQuitEvent; // 0x0
		Il2CppObject* OnApplicationFocusEvent; // 0x8
		Il2CppObject* OnApplicationPauseEvent; // 0x10

		::System::Void add_OnApplicationQuitEvent(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPDELEGATES_ADD_ONAPPLICATIONQUITEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnApplicationQuitEvent(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPDELEGATES_REMOVE_ONAPPLICATIONQUITEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnApplicationFocusEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPDELEGATES_ADD_ONAPPLICATIONFOCUSEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnApplicationFocusEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPDELEGATES_REMOVE_ONAPPLICATIONFOCUSEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void add_OnApplicationPauseEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPDELEGATES_ADD_ONAPPLICATIONPAUSEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnApplicationPauseEvent(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPDELEGATES_REMOVE_ONAPPLICATIONPAUSEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void PublishOnApplicationQuitEvent(::NPA::Ex::IAppInvoker* arg)
		{
			((::System::Void(*)(::NPA::Ex::IAppInvoker*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPDELEGATES_PUBLISHONAPPLICATIONQUITEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void PublishOnApplicationFocusEvent(::NPA::Ex::IAppInvoker* arg, ::NPA::Ex::ApplicationFocusEvent* arg)
		{
			((::System::Void(*)(::NPA::Ex::IAppInvoker*, ::NPA::Ex::ApplicationFocusEvent*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPDELEGATES_PUBLISHONAPPLICATIONFOCUSEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PublishOnApplicationPauseEvent(::NPA::Ex::IAppInvoker* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::NPA::Ex::IAppInvoker*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPDELEGATES_PUBLISHONAPPLICATIONPAUSEEVENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearAllEvents(::NPA::Ex::IAppInvoker* arg)
		{
			((::System::Void(*)(::NPA::Ex::IAppInvoker*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPDELEGATES_CLEARALLEVENTS_OFFSET))(arg, nullptr);
		}

	};
}

