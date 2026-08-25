#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AFDF90)
#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GET_LOGICALOPERATIONSTACK_OFFSET UNITYSDK_OFFSET(0x9AFDFA0)
#define SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GETLOGICALOPERATIONSTACK_OFFSET UNITYSDK_OFFSET(0x9AFDFB0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int CorrelationManager_TypeDefinitionIndex = 29239;

	class CorrelationManager : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::Stack* get_LogicalOperationStack()
		{
			return (return (::System::Collections::Stack*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GET_LOGICALOPERATIONSTACK_OFFSET))(nullptr);
		}

		::System::Collections::Stack* GetLogicalOperationStack()
		{
			return (return (::System::Collections::Stack*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CORRELATIONMANAGER_GETLOGICALOPERATIONSTACK_OFFSET))(nullptr);
		}

	};
}

