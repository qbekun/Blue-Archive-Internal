#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int DiagnosticEventType_TypeDefinitionIndex = 36349;

	class DiagnosticEventType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		DiagnosticEventType* AsyncOperationFail; // 0x0
		DiagnosticEventType* AsyncOperationCreate; // 0x0
		DiagnosticEventType* AsyncOperationPercentComplete; // 0x0
		DiagnosticEventType* AsyncOperationComplete; // 0x0
		DiagnosticEventType* AsyncOperationReferenceCount; // 0x0
		DiagnosticEventType* AsyncOperationDestroy; // 0x0

	};

