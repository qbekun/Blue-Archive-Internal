#pragma once
#include "../unitysdk.h"

#define SYSTEM_CHARENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x927FC90)
#define SYSTEM_CHARENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x927FCD0)
#define SYSTEM_CHARENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x927FCE0)
#define SYSTEM_CHARENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x927FD30)
#define SYSTEM_CHARENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x927FD60)
#define SYSTEM_CHARENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x927FDB0)
#define SYSTEM_CHARENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x927FE60)
#define SYSTEM_CHARENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x927FE70)

namespace System
{
	inline static constexpr unsigned int CharEnumerator_TypeDefinitionIndex = 23721;

	class CharEnumerator : public Il2CppObject
	{
	public:
		::System::String* _str; // 0x10
		::System::Int32 _index; // 0x18
		::System::Char _currentElement; // 0x1C

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_DISPOSE_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Char get_Current()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_RESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CHARENUMERATOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

