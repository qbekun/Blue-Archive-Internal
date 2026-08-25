#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class AsyncUnit; }

#define CYSHARP_THREADING_TASKS_ASYNCUNIT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9DCFA10)
#define CYSHARP_THREADING_TASKS_ASYNCUNIT_EQUALS_OFFSET UNITYSDK_OFFSET(0x9DCFA20)
#define CYSHARP_THREADING_TASKS_ASYNCUNIT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9DCFA30)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncUnit_TypeDefinitionIndex = 35839;

	class AsyncUnit : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::AsyncUnit* Default; // 0x0

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::Cysharp::Threading::Tasks::AsyncUnit* arg)
		{
			return (return (::System::Boolean(*)(::Cysharp::Threading::Tasks::AsyncUnit*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNIT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

