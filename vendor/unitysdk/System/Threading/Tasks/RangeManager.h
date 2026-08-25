#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_RANGEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F0E70)
#define SYSTEM_THREADING_TASKS_RANGEMANAGER_REGISTERNEWWORKER_OFFSET UNITYSDK_OFFSET(0x93F1090)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int RangeManager_TypeDefinitionIndex = 24160;

	class RangeManager : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _indexRanges; // 0x10
		::System::Boolean _use32BitCurrentIndex; // 0x18
		::System::Int32 _nCurrentIndexRangeToAssign; // 0x1C
		::System::Int64 _nStep; // 0x20

		::System::Void .ctor(::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_RANGEMANAGER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::RangeWorker* RegisterNewWorker()
		{
			return (return (::System::Threading::Tasks::RangeWorker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_RANGEMANAGER_REGISTERNEWWORKER_OFFSET))(nullptr);
		}

	};
}

