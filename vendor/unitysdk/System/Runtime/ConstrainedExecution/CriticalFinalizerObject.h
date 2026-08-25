#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CRITICALFINALIZEROBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9223090)
#define SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CRITICALFINALIZEROBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x92274A0)

namespace System::Runtime::ConstrainedExecution
{
	inline static constexpr unsigned int CriticalFinalizerObject_TypeDefinitionIndex = 24732;

	class CriticalFinalizerObject : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CRITICALFINALIZEROBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_CONSTRAINEDEXECUTION_CRITICALFINALIZEROBJECT_FINALIZE_OFFSET))(nullptr);
		}

	};
}

