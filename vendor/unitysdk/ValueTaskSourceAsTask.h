#pragma once
#include "unitysdk.h"

#define VALUETASKSOURCEASTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUETASKSOURCEASTASK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ValueTaskSourceAsTask_TypeDefinitionIndex = 24142;

	class ValueTaskSourceAsTask : public <GetEnumerator>d__31
	{
	public:
		Il2CppObject* s_completionAction; // 0x0
		Il2CppObject* _source; // 0x0
		::System::Int16 _token; // 0x0

		::System::Void .ctor(Il2CppObject* arg, ::System::Int16 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + VALUETASKSOURCEASTASK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUETASKSOURCEASTASK_.CCTOR_OFFSET))(nullptr);
		}

	};

