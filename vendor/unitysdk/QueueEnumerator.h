#pragma once
#include "unitysdk.h"

#define QUEUEENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x92CBDC0)
#define QUEUEENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x92CBFE0)
#define QUEUEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x92CBFF0)
#define QUEUEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x92CC0F0)
#define QUEUEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x92CC180)

	inline static constexpr unsigned int QueueEnumerator_TypeDefinitionIndex = 25071;

	class QueueEnumerator : public Il2CppObject
	{
	public:
		::System::Collections::Queue* _q; // 0x10
		::System::Int32 _index; // 0x18
		::System::Int32 _version; // 0x1C
		::System::Object* _currentElement; // 0x20

		::System::Void .ctor(::System::Collections::Queue* arg)
		{
			((::System::Void(*)(::System::Collections::Queue*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUEENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUEENUMERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUEENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUEENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUEENUMERATOR_RESET_OFFSET))(nullptr);
		}

	};

