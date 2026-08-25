#pragma once
#include "unitysdk.h"

#define CONTINGENTPROPERTIES_SETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x93F6970)
#define CONTINGENTPROPERTIES_UNREGISTERCANCELLATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x93F69A0)
#define CONTINGENTPROPERTIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F2520)

	inline static constexpr unsigned int ContingentProperties_TypeDefinitionIndex = 24175;

	class ContingentProperties : public Il2CppObject
	{
	public:
		::System::Threading::ExecutionContext* m_capturedContext; // 0x10
		::System::Threading::ManualResetEventSlim* m_completionEvent; // 0x18
		::System::Threading::Tasks::TaskExceptionHolder* m_exceptionsHolder; // 0x20
		::System::Threading::CancellationToken* m_cancellationToken; // 0x28
		::System::Object* m_cancellationRegistration; // 0x30
		::System::Int32 m_internalCancellationRequested; // 0x38
		::System::Int32 m_completionCountdown; // 0x3C
		Il2CppObject* m_exceptionalChildren; // 0x40

		::System::Void SetCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTINGENTPROPERTIES_SETCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void UnregisterCancellationCallback()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTINGENTPROPERTIES_UNREGISTERCANCELLATIONCALLBACK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONTINGENTPROPERTIES_.CTOR_OFFSET))(nullptr);
		}

	};

