#pragma once
#include "../../unitysdk.h"

namespace NPA::Push { class NXPToySendEventPushResult; }

#define NPA_PUSH_NXPTOYSENDEVENTPUSHRESULTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCB110)
#define NPA_PUSH_NXPTOYSENDEVENTPUSHRESULTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9CCB1E0)
#define NPA_PUSH_NXPTOYSENDEVENTPUSHRESULTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9CCB1F0)
#define NPA_PUSH_NXPTOYSENDEVENTPUSHRESULTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9CCB220)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPToySendEventPushResultDelegate_TypeDefinitionIndex = 27358;

	class NXPToySendEventPushResultDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYSENDEVENTPUSHRESULTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::NPA::Push::NXPToySendEventPushResult* arg)
		{
			((::System::Void(*)(::NPA::Push::NXPToySendEventPushResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYSENDEVENTPUSHRESULTDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::NPA::Push::NXPToySendEventPushResult* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::NPA::Push::NXPToySendEventPushResult*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYSENDEVENTPUSHRESULTDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYSENDEVENTPUSHRESULTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

