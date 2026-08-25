#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_RANGEWORKER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x93F0B90)
#define SYSTEM_THREADING_TASKS_RANGEWORKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93F0BA0)
#define SYSTEM_THREADING_TASKS_RANGEWORKER_FINDNEWWORK_OFFSET UNITYSDK_OFFSET(0x93F0BE0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int RangeWorker_TypeDefinitionIndex = 24159;

	class RangeWorker : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _indexRanges; // 0x10
		::System::Int32 _nCurrentIndexRange; // 0x18
		::System::Int64 _nStep; // 0x20
		::System::Int64 _nIncrementValue; // 0x28
		::System::Int64 _nMaxIncrementValue; // 0x30
		::System::Boolean _use32BitCurrentIndex; // 0x38

		::System::Boolean get_IsInitialized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_RANGEWORKER_GET_ISINITIALIZED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int64 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_RANGEWORKER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean FindNewWork(int64_t&* arg, int64_t&* arg)
		{
			return (return (::System::Boolean(*)(int64_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_RANGEWORKER_FINDNEWWORK_OFFSET))(arg, arg, nullptr);
		}

	};
}

