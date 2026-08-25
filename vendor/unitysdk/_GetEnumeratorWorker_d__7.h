#pragma once
#include "unitysdk.h"

#define <GETENUMERATORWORKER>D__7_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATORWORKER>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATORWORKER>D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATORWORKER>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATORWORKER>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATORWORKER>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <GetEnumeratorWorker>d__7_TypeDefinitionIndex = 33506;

	class <GetEnumeratorWorker>d__7 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __2__current; // 0x0
		Il2CppObject* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATORWORKER>D__7_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATORWORKER>D__7_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATORWORKER>D__7_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_System.Collections.Generic.KeyValuePair_TKey_TValue__.get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATORWORKER>D__7_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_TKEY_TVALUE__.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATORWORKER>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATORWORKER>D__7_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

