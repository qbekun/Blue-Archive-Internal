#pragma once
#include "../unitysdk.h"

#define TOYWEBVIEWSHARED_NXPMAINTHREADDISPATCHER_ADD_OFFSET UNITYSDK_OFFSET(0x9BA9E50)
#define TOYWEBVIEWSHARED_NXPMAINTHREADDISPATCHER_RUN_OFFSET UNITYSDK_OFFSET(0x9BA9FD0)
#define TOYWEBVIEWSHARED_NXPMAINTHREADDISPATCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9BAA010)
#define TOYWEBVIEWSHARED_NXPMAINTHREADDISPATCHER_STOP_OFFSET UNITYSDK_OFFSET(0x9BAA1C0)
#define TOYWEBVIEWSHARED_NXPMAINTHREADDISPATCHER_ISALIVE_OFFSET UNITYSDK_OFFSET(0x9BAA1E0)
#define TOYWEBVIEWSHARED_NXPMAINTHREADDISPATCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BAA200)

namespace ToyWebViewShared
{
	inline static constexpr unsigned int NXPMainThreadDispatcher_TypeDefinitionIndex = 25398;

	class NXPMainThreadDispatcher : public Il2CppObject
	{
	public:
		::System::Object* locker; // 0x10
		::System::Boolean alive; // 0x18
		Il2CppObject* currentActions; // 0x20
		Il2CppObject* nextActions; // 0x28

		::System::Void Add(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPMAINTHREADDISPATCHER_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void Run()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPMAINTHREADDISPATCHER_RUN_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPMAINTHREADDISPATCHER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPMAINTHREADDISPATCHER_STOP_OFFSET))(nullptr);
		}

		::System::Boolean IsAlive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPMAINTHREADDISPATCHER_ISALIVE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOYWEBVIEWSHARED_NXPMAINTHREADDISPATCHER_.CTOR_OFFSET))(nullptr);
		}

	};
}

