#pragma once
#include "../../unitysdk.h"

namespace NPA::Ex { class IAppInvoker; }

#define NPA_EX_APPLIFECYCLE_GET_ISINMAINTHREADFUNC_OFFSET UNITYSDK_OFFSET(0x9D1CD30)
#define NPA_EX_APPLIFECYCLE_SET_ISINMAINTHREADFUNC_OFFSET UNITYSDK_OFFSET(0x9D1CD70)
#define NPA_EX_APPLIFECYCLE_ISINMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x9D1CDC0)
#define NPA_EX_APPLIFECYCLE_CLEARALLEVENTS_OFFSET UNITYSDK_OFFSET(0x9D1CE50)

namespace NPA::Ex
{
	inline static constexpr unsigned int AppLifecycle_TypeDefinitionIndex = 25975;

	class AppLifecycle : public Il2CppObject
	{
	public:
		Il2CppObject* _IsInMainThreadFunc_k__BackingField; // 0x0

		Il2CppObject* get_IsInMainThreadFunc()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPLIFECYCLE_GET_ISINMAINTHREADFUNC_OFFSET))(nullptr);
		}

		::System::Void set_IsInMainThreadFunc(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPLIFECYCLE_SET_ISINMAINTHREADFUNC_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInMainThread()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPLIFECYCLE_ISINMAINTHREAD_OFFSET))(nullptr);
		}

		::System::Void ClearAllEvents(::NPA::Ex::IAppInvoker* arg)
		{
			((::System::Void(*)(::NPA::Ex::IAppInvoker*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EX_APPLIFECYCLE_CLEARALLEVENTS_OFFSET))(arg, nullptr);
		}

	};
}

