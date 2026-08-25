#pragma once
#include "unitysdk.h"

#define <GETENUMERATOR>D__20_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATOR>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATOR>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATOR>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_T_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATOR>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATOR>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <GetEnumerator>d__20_TypeDefinitionIndex = 33577;

	class <GetEnumerator>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __2__current; // 0x0
		Il2CppObject* __4__this; // 0x0
		::System::Int32 _i_5__2; // 0x0
		::System::Int32 _n_5__3; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__20_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_T_.get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_T_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

