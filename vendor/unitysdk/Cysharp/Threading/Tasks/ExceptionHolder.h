#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9DDEBF0)
#define CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DDED00)
#define CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x9DDED30)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int ExceptionHolder_TypeDefinitionIndex = 35944;

	class ExceptionHolder : public Il2CppObject
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x10
		::System::Boolean calledGet; // 0x18

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER_FINALIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* arg)
		{
			((::System::Void(*)(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetException()
		{
			return (return (::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_EXCEPTIONHOLDER_GETEXCEPTION_OFFSET))(nullptr);
		}

	};
}

