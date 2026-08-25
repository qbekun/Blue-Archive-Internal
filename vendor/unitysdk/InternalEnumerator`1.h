#pragma once
#include "unitysdk.h"

#define INTERNALENUMERATOR`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define INTERNALENUMERATOR`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define INTERNALENUMERATOR`1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INTERNALENUMERATOR`1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define INTERNALENUMERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define INTERNALENUMERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int InternalEnumerator`1_TypeDefinitionIndex = 23901;

	class InternalEnumerator`1 : public Il2CppObject
	{
	public:
		::System::Array* array; // 0x0
		::System::Int32 idx; // 0x0

		::System::Void .ctor(::System::Array* arg)
		{
			((::System::Void(*)(::System::Array*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNALENUMERATOR`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNALENUMERATOR`1_DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNALENUMERATOR`1_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNALENUMERATOR`1_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNALENUMERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNALENUMERATOR`1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

